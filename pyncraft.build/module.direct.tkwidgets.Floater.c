/* Generated code for Python module 'direct.tkwidgets.Floater'
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

/* The "module_direct$tkwidgets$Floater" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$tkwidgets$Floater;
PyDictObject *moduledict_direct$tkwidgets$Floater;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[246];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[246];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.tkwidgets.Floater"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 246; i++) {
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
void checkModuleConstants_direct$tkwidgets$Floater(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 246; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ab9aacff31bba29c568c1c46faa2265b;
static PyCodeObject *codeobj_2c12d3ca3b0304259cea40ec1a186e49;
static PyCodeObject *codeobj_24ae5a7cf7360fda4df4e15b34bdf250;
static PyCodeObject *codeobj_f16d9274f108ba248cb938bbb9218477;
static PyCodeObject *codeobj_b4dcc67755929ddd5bce6c8764ee3a53;
static PyCodeObject *codeobj_9b2bff4ee1a0dd99cc3876258385fd9a;
static PyCodeObject *codeobj_14d786b7af576b1a53281c9119d84ec6;
static PyCodeObject *codeobj_f23c02d26d93191b2cfdcf37991b83e6;
static PyCodeObject *codeobj_a98f99d1b2bcaa403ba0244e7f361b10;
static PyCodeObject *codeobj_ee771a5a09acb522a7e30f1f1173f151;
static PyCodeObject *codeobj_b0ab7581659a749025665b945c18af39;
static PyCodeObject *codeobj_4aba6dbf2beeb2ae7e2152c9f46011db;
static PyCodeObject *codeobj_6780cadf32d7009fef3a141795759455;
static PyCodeObject *codeobj_bb380f3f564c280ff569a93bab800c58;
static PyCodeObject *codeobj_b6fc932cf9a684a2e42c7ff578c2e1e2;
static PyCodeObject *codeobj_f17e2bda4c88213b6b21f2f434af0e77;
static PyCodeObject *codeobj_e001b4767fe7b01fdcc836165a732140;
static PyCodeObject *codeobj_c7322f24ca0443ad4ecbe35e9ad35584;
static PyCodeObject *codeobj_32cfbeda15a9e6a266da98cb55a775e3;
static PyCodeObject *codeobj_43033c4afa0910931069525b32510c05;
static PyCodeObject *codeobj_6b5d74c9fa034636e2e163df7a0734a3;
static PyCodeObject *codeobj_9c45dd0daffa253ca41abf1ef3f49eb8;
static PyCodeObject *codeobj_e6b8b5eb35d1baa2dbec41d072eec905;
static PyCodeObject *codeobj_085c3f989873e983bb69bef734a5d2b0;
static PyCodeObject *codeobj_c5940c176671a193f03ac01830cfe375;
static PyCodeObject *codeobj_7e97f3cfc93f2bae6a2d30cf80deeb6c;
static PyCodeObject *codeobj_7fff5bab399f7f6a1d97afaed617511c;
static PyCodeObject *codeobj_76ed1c04ce6df5fed0b0582e92d7e1c4;
static PyCodeObject *codeobj_012ff07012b6b72689de82f4b6490368;
static PyCodeObject *codeobj_7c6346c76349f40662cf831afee81bcc;
static PyCodeObject *codeobj_d6bffe247b2be18ac0d2641328798ac5;
static PyCodeObject *codeobj_a351ed78029da43e523c51fb9ac5deb8;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[228]); CHECK_OBJECT(module_filename_obj);
    codeobj_ab9aacff31bba29c568c1c46faa2265b = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[229], NULL, 1, 0, 0);
    codeobj_2c12d3ca3b0304259cea40ec1a186e49 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[230], NULL, 3, 0, 0);
    codeobj_24ae5a7cf7360fda4df4e15b34bdf250 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[231], mod_consts[231], NULL, NULL, 0, 0, 0);
    codeobj_f16d9274f108ba248cb938bbb9218477 = MAKE_CODE_OBJECT(module_filename_obj, 16, 0, mod_consts[8], mod_consts[8], mod_consts[232], NULL, 0, 0, 0);
    codeobj_b4dcc67755929ddd5bce6c8764ee3a53 = MAKE_CODE_OBJECT(module_filename_obj, 213, 0, mod_consts[162], mod_consts[162], mod_consts[232], NULL, 0, 0, 0);
    codeobj_9b2bff4ee1a0dd99cc3876258385fd9a = MAKE_CODE_OBJECT(module_filename_obj, 46, 0, mod_consts[12], mod_consts[12], mod_consts[232], NULL, 0, 0, 0);
    codeobj_14d786b7af576b1a53281c9119d84ec6 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[6], mod_consts[6], mod_consts[233], NULL, 2, 0, 0);
    codeobj_f23c02d26d93191b2cfdcf37991b83e6 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[6], mod_consts[6], mod_consts[234], NULL, 2, 0, 0);
    codeobj_a98f99d1b2bcaa403ba0244e7f361b10 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[6], mod_consts[6], mod_consts[235], NULL, 2, 0, 0);
    codeobj_ee771a5a09acb522a7e30f1f1173f151 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[164], mod_consts[236], NULL, 3, 0, 0);
    codeobj_b0ab7581659a749025665b945c18af39 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[127], mod_consts[127], mod_consts[237], NULL, 1, 0, 0);
    codeobj_4aba6dbf2beeb2ae7e2152c9f46011db = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[196], mod_consts[196], mod_consts[238], NULL, 1, 0, 0);
    codeobj_6780cadf32d7009fef3a141795759455 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[166], mod_consts[166], mod_consts[238], NULL, 1, 0, 0);
    codeobj_bb380f3f564c280ff569a93bab800c58 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[166], mod_consts[166], mod_consts[238], NULL, 1, 0, 0);
    codeobj_b6fc932cf9a684a2e42c7ff578c2e1e2 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[221], mod_consts[221], mod_consts[237], NULL, 2, 0, 0);
    codeobj_f17e2bda4c88213b6b21f2f434af0e77 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[74], mod_consts[74], mod_consts[239], NULL, 2, 0, 0);
    codeobj_e001b4767fe7b01fdcc836165a732140 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[68], mod_consts[68], mod_consts[239], NULL, 2, 0, 0);
    codeobj_c7322f24ca0443ad4ecbe35e9ad35584 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[239], NULL, 2, 0, 0);
    codeobj_32cfbeda15a9e6a266da98cb55a775e3 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[198], mod_consts[198], mod_consts[238], NULL, 1, 0, 0);
    codeobj_43033c4afa0910931069525b32510c05 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[163], mod_consts[163], mod_consts[238], NULL, 1, 0, 0);
    codeobj_6b5d74c9fa034636e2e163df7a0734a3 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[76], mod_consts[76], mod_consts[239], NULL, 2, 0, 0);
    codeobj_9c45dd0daffa253ca41abf1ef3f49eb8 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[240], NULL, 3, 0, 0);
    codeobj_e6b8b5eb35d1baa2dbec41d072eec905 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[241], NULL, 3, 0, 0);
    codeobj_085c3f989873e983bb69bef734a5d2b0 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[224], mod_consts[224], mod_consts[236], NULL, 3, 0, 0);
    codeobj_c5940c176671a193f03ac01830cfe375 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[238], NULL, 1, 0, 0);
    codeobj_7e97f3cfc93f2bae6a2d30cf80deeb6c = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[238], NULL, 1, 0, 0);
    codeobj_7fff5bab399f7f6a1d97afaed617511c = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[238], NULL, 1, 0, 0);
    codeobj_76ed1c04ce6df5fed0b0582e92d7e1c4 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[238], NULL, 1, 0, 0);
    codeobj_012ff07012b6b72689de82f4b6490368 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], mod_consts[238], NULL, 1, 0, 0);
    codeobj_7c6346c76349f40662cf831afee81bcc = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[70], mod_consts[70], mod_consts[242], NULL, 2, 0, 0);
    codeobj_d6bffe247b2be18ac0d2641328798ac5 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[243], NULL, 2, 0, 0);
    codeobj_a351ed78029da43e523c51fb9ac5deb8 = MAKE_CODE_OBJECT(module_filename_obj, 129, 0, mod_consts[204], mod_consts[204], mod_consts[244], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__10_updateFloaterSF();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__11_mouseUp();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__12_setNumDigits();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__13_setRelief();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__14_setBorderwidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__15_setBackground();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__16_highlightWidget();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__17_restoreWidget();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__19__updateLabels();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__20_toggleBalloon();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__21_get();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__22_getAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__23_set(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__24_setAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__25__floaterSetAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__26_reset();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__2_createValuator();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__3_packValuator();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__5_set(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__6_updateIndicator();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__7_get();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__8_mouseDown();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__9_updateFloaterTask();


// The module function definitions.
static PyObject *impl_direct$tkwidgets$Floater$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_INITOPT = NULL;
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_f23c02d26d93191b2cfdcf37991b83e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f23c02d26d93191b2cfdcf37991b83e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f23c02d26d93191b2cfdcf37991b83e6)) {
        Py_XDECREF(cache_frame_f23c02d26d93191b2cfdcf37991b83e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f23c02d26d93191b2cfdcf37991b83e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f23c02d26d93191b2cfdcf37991b83e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_f23c02d26d93191b2cfdcf37991b83e6, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f23c02d26d93191b2cfdcf37991b83e6->m_type_description == NULL);
    frame_f23c02d26d93191b2cfdcf37991b83e6 = cache_frame_f23c02d26d93191b2cfdcf37991b83e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f23c02d26d93191b2cfdcf37991b83e6);
    assert(Py_REFCNT(frame_f23c02d26d93191b2cfdcf37991b83e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_INITOPT == NULL);
        var_INITOPT = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[2];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_INITOPT);
        tmp_tuple_element_2 = var_INITOPT;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_2;
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
        frame_f23c02d26d93191b2cfdcf37991b83e6->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_4 = par_parent;
        frame_f23c02d26d93191b2cfdcf37991b83e6->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f23c02d26d93191b2cfdcf37991b83e6->m_frame.f_lineno = 25;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f23c02d26d93191b2cfdcf37991b83e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f23c02d26d93191b2cfdcf37991b83e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f23c02d26d93191b2cfdcf37991b83e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f23c02d26d93191b2cfdcf37991b83e6,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_INITOPT,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_f23c02d26d93191b2cfdcf37991b83e6 == cache_frame_f23c02d26d93191b2cfdcf37991b83e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f23c02d26d93191b2cfdcf37991b83e6);
        cache_frame_f23c02d26d93191b2cfdcf37991b83e6 = NULL;
    }

    assertFrameObject(frame_f23c02d26d93191b2cfdcf37991b83e6);

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
    CHECK_OBJECT(var_INITOPT);
    Py_DECREF(var_INITOPT);
    var_INITOPT = NULL;
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

    Py_XDECREF(var_INITOPT);
    var_INITOPT = NULL;
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


static PyObject *impl_direct$tkwidgets$Floater$$$function__2_createValuator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4aba6dbf2beeb2ae7e2152c9f46011db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db)) {
        Py_XDECREF(cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db = MAKE_FUNCTION_FRAME(tstate, codeobj_4aba6dbf2beeb2ae7e2152c9f46011db, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db->m_type_description == NULL);
    frame_4aba6dbf2beeb2ae7e2152c9f46011db = cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4aba6dbf2beeb2ae7e2152c9f46011db);
    assert(Py_REFCNT(frame_4aba6dbf2beeb2ae7e2152c9f46011db) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        tmp_kw_call_arg_value_1_1 = mod_consts[11];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4aba6dbf2beeb2ae7e2152c9f46011db->m_frame.f_lineno = 32;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_kw_call_dict_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4aba6dbf2beeb2ae7e2152c9f46011db->m_frame.f_lineno = 28;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[18]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[21]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4aba6dbf2beeb2ae7e2152c9f46011db->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
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
        exception_tb = MAKE_TRACEBACK(frame_4aba6dbf2beeb2ae7e2152c9f46011db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4aba6dbf2beeb2ae7e2152c9f46011db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4aba6dbf2beeb2ae7e2152c9f46011db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4aba6dbf2beeb2ae7e2152c9f46011db,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4aba6dbf2beeb2ae7e2152c9f46011db == cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db);
        cache_frame_4aba6dbf2beeb2ae7e2152c9f46011db = NULL;
    }

    assertFrameObject(frame_4aba6dbf2beeb2ae7e2152c9f46011db);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__3_packValuator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_32cfbeda15a9e6a266da98cb55a775e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_32cfbeda15a9e6a266da98cb55a775e3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32cfbeda15a9e6a266da98cb55a775e3)) {
        Py_XDECREF(cache_frame_32cfbeda15a9e6a266da98cb55a775e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32cfbeda15a9e6a266da98cb55a775e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32cfbeda15a9e6a266da98cb55a775e3 = MAKE_FUNCTION_FRAME(tstate, codeobj_32cfbeda15a9e6a266da98cb55a775e3, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32cfbeda15a9e6a266da98cb55a775e3->m_type_description == NULL);
    frame_32cfbeda15a9e6a266da98cb55a775e3 = cache_frame_32cfbeda15a9e6a266da98cb55a775e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_32cfbeda15a9e6a266da98cb55a775e3);
    assert(Py_REFCNT(frame_32cfbeda15a9e6a266da98cb55a775e3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 39;
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
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[22]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[23]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[24];
        tmp_kw_call_value_1_1 = mod_consts[24];
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame.f_lineno = 40;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[23]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[24];
        tmp_kw_call_value_1_2 = mod_consts[28];
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame.f_lineno = 41;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[17]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[23]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame.f_lineno = 42;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[29], 0), mod_consts[30]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame.f_lineno = 43;
        tmp_expression_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[31]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame.f_lineno = 43;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[32], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32cfbeda15a9e6a266da98cb55a775e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32cfbeda15a9e6a266da98cb55a775e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32cfbeda15a9e6a266da98cb55a775e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32cfbeda15a9e6a266da98cb55a775e3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_32cfbeda15a9e6a266da98cb55a775e3 == cache_frame_32cfbeda15a9e6a266da98cb55a775e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32cfbeda15a9e6a266da98cb55a775e3);
        cache_frame_32cfbeda15a9e6a266da98cb55a775e3 = NULL;
    }

    assertFrameObject(frame_32cfbeda15a9e6a266da98cb55a775e3);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_INITOPT = NULL;
    PyObject *var_optiondefs = NULL;
    PyObject *var_interior = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    struct Nuitka_FrameObject *frame_a98f99d1b2bcaa403ba0244e7f361b10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a98f99d1b2bcaa403ba0244e7f361b10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a98f99d1b2bcaa403ba0244e7f361b10)) {
        Py_XDECREF(cache_frame_a98f99d1b2bcaa403ba0244e7f361b10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a98f99d1b2bcaa403ba0244e7f361b10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a98f99d1b2bcaa403ba0244e7f361b10 = MAKE_FUNCTION_FRAME(tstate, codeobj_a98f99d1b2bcaa403ba0244e7f361b10, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a98f99d1b2bcaa403ba0244e7f361b10->m_type_description == NULL);
    frame_a98f99d1b2bcaa403ba0244e7f361b10 = cache_frame_a98f99d1b2bcaa403ba0244e7f361b10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a98f99d1b2bcaa403ba0244e7f361b10);
    assert(Py_REFCNT(frame_a98f99d1b2bcaa403ba0244e7f361b10) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_INITOPT == NULL);
        var_INITOPT = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[34];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_INITOPT);
        tmp_tuple_element_2 = var_INITOPT;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(12);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[36];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_3 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[38];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[39]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_1 = "oooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_1 = "oooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_assign_source_2, 2, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[41];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_3;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[42];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_3 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[43]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_1 = "oooooooo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_assign_source_2, 3, tmp_tuple_element_1);
            tmp_tuple_element_6 = mod_consts[44];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = mod_consts[45];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_6);
                CHECK_OBJECT(par_self);
                tmp_expression_value_4 = par_self;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[46]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_1 = "oooooooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_assign_source_2, 4, tmp_tuple_element_1);
            tmp_tuple_element_7 = mod_consts[15];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[47];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_7);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_7 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_assign_source_2, 5, tmp_tuple_element_1);
            tmp_tuple_element_8 = mod_consts[48];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[42];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_8);
                CHECK_OBJECT(par_self);
                tmp_expression_value_5 = par_self;
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[49]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_1 = "oooooooo";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyTuple_SET_ITEM(tmp_assign_source_2, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_assign_source_2, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[51], "ili");
            PyTuple_SET_ITEM(tmp_assign_source_2, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_assign_source_2, 9, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_assign_source_2, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[54], "ili");
            PyTuple_SET_ITEM(tmp_assign_source_2, 11, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_2;
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
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[55]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_4 = par_parent;
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[6],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 78;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[13]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interior == NULL);
        var_interior = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_subscript_value_2 = mod_consts[34];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_subscript_value_3 = mod_consts[36];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[56];
        tmp_kw_call_arg_value_1_1 = mod_consts[57];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_tuple_element_9 = var_interior;
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_width);
        tmp_kw_call_dict_value_0_1 = var_width;
        CHECK_OBJECT(var_height);
        tmp_kw_call_dict_value_1_1 = var_height;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_subscript_value_4 = mod_consts[44];
        tmp_kw_call_dict_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_3_1 = mod_consts[24];
        CHECK_OBJECT(var_width);
        tmp_operand_value_1 = var_width;
        tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[59];
        tmp_tuple_element_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_4_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_4_1, 0, tmp_tuple_element_10);
            CHECK_OBJECT(var_height);
            tmp_operand_value_2 = var_height;
            tmp_truediv_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_8;
            }
            tmp_truediv_expr_right_2 = mod_consts[59];
            tmp_tuple_element_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_4_1, 1, tmp_tuple_element_10);
            CHECK_OBJECT(var_width);
            tmp_truediv_expr_left_3 = var_width;
            tmp_truediv_expr_right_3 = mod_consts[59];
            tmp_tuple_element_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_4_1, 2, tmp_tuple_element_10);
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_4 = var_height;
            tmp_truediv_expr_right_4 = mod_consts[59];
            tmp_tuple_element_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_4_1, 3, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_4_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 86;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[60]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_4_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[18]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[61]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[28];
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 96;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[18]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[64]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_operand_value_3 = var_width;
        tmp_truediv_expr_left_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_5 = mod_consts[59];
        tmp_tuple_element_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[65];
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_11);
            CHECK_OBJECT(var_height);
            tmp_operand_value_4 = var_height;
            tmp_truediv_expr_left_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_9;
            }
            tmp_truediv_expr_right_6 = mod_consts[59];
            tmp_tuple_element_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 3, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[65];
            PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_11);
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_7 = var_height;
            tmp_truediv_expr_right_7 = mod_consts[59];
            tmp_tuple_element_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 5, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[66]);
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 99;
        tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[18]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[64]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_truediv_expr_left_8 = var_width;
        tmp_truediv_expr_right_8 = mod_consts[59];
        tmp_tuple_element_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_truediv_expr_left_9;
            PyObject *tmp_truediv_expr_right_9;
            PyObject *tmp_truediv_expr_left_10;
            PyObject *tmp_truediv_expr_right_10;
            PyObject *tmp_operand_value_5;
            PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_12);
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_9 = var_height;
            tmp_truediv_expr_right_9 = mod_consts[59];
            tmp_tuple_element_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 3, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_args_value_2, 4, tmp_tuple_element_12);
            CHECK_OBJECT(var_height);
            tmp_operand_value_5 = var_height;
            tmp_truediv_expr_left_10 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
            if (tmp_truediv_expr_left_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_10;
            }
            tmp_truediv_expr_right_10 = mod_consts[59];
            tmp_tuple_element_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
            Py_DECREF(tmp_truediv_expr_left_10);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 5, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[66]);
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 103;
        tmp_call_result_5 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[18]);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[19]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[67];
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[68]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[18]);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[19]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[69];
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[70]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 110;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[18]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[19]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[71];
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[72]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 111;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[18]);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[19]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[73];
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[74]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[18]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[19]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[75];
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[76]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 113;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[7]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame.f_lineno = 116;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a98f99d1b2bcaa403ba0244e7f361b10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a98f99d1b2bcaa403ba0244e7f361b10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a98f99d1b2bcaa403ba0244e7f361b10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a98f99d1b2bcaa403ba0244e7f361b10,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_INITOPT,
        var_optiondefs,
        var_interior,
        var_width,
        var_height
    );


    // Release cached frame if used for exception.
    if (frame_a98f99d1b2bcaa403ba0244e7f361b10 == cache_frame_a98f99d1b2bcaa403ba0244e7f361b10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a98f99d1b2bcaa403ba0244e7f361b10);
        cache_frame_a98f99d1b2bcaa403ba0244e7f361b10 = NULL;
    }

    assertFrameObject(frame_a98f99d1b2bcaa403ba0244e7f361b10);

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
    CHECK_OBJECT(var_INITOPT);
    Py_DECREF(var_INITOPT);
    var_INITOPT = NULL;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    CHECK_OBJECT(var_interior);
    Py_DECREF(var_interior);
    var_interior = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
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

    Py_XDECREF(var_INITOPT);
    var_INITOPT = NULL;
    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
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


static PyObject *impl_direct$tkwidgets$Floater$$$function__5_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_fCommand = python_pars[2];
    struct Nuitka_FrameObject *frame_9c45dd0daffa253ca41abf1ef3f49eb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8)) {
        Py_XDECREF(cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8 = MAKE_FUNCTION_FRAME(tstate, codeobj_9c45dd0daffa253ca41abf1ef3f49eb8, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8->m_type_description == NULL);
    frame_9c45dd0daffa253ca41abf1ef3f49eb8 = cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9c45dd0daffa253ca41abf1ef3f49eb8);
    assert(Py_REFCNT(frame_9c45dd0daffa253ca41abf1ef3f49eb8) == 2);

    // Framed code:
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


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
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
        tmp_subscript_value_1 = mod_consts[77];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[77];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_list_element_1 = par_value;
        tmp_add_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_3 = mod_consts[78];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c45dd0daffa253ca41abf1ef3f49eb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c45dd0daffa253ca41abf1ef3f49eb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c45dd0daffa253ca41abf1ef3f49eb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c45dd0daffa253ca41abf1ef3f49eb8,
        type_description_1,
        par_self,
        par_value,
        par_fCommand
    );


    // Release cached frame if used for exception.
    if (frame_9c45dd0daffa253ca41abf1ef3f49eb8 == cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8);
        cache_frame_9c45dd0daffa253ca41abf1ef3f49eb8 = NULL;
    }

    assertFrameObject(frame_9c45dd0daffa253ca41abf1ef3f49eb8);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__7_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6780cadf32d7009fef3a141795759455;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6780cadf32d7009fef3a141795759455 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6780cadf32d7009fef3a141795759455)) {
        Py_XDECREF(cache_frame_6780cadf32d7009fef3a141795759455);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6780cadf32d7009fef3a141795759455 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6780cadf32d7009fef3a141795759455 = MAKE_FUNCTION_FRAME(tstate, codeobj_6780cadf32d7009fef3a141795759455, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6780cadf32d7009fef3a141795759455->m_type_description == NULL);
    frame_6780cadf32d7009fef3a141795759455 = cache_frame_6780cadf32d7009fef3a141795759455;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6780cadf32d7009fef3a141795759455);
    assert(Py_REFCNT(frame_6780cadf32d7009fef3a141795759455) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_6780cadf32d7009fef3a141795759455, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6780cadf32d7009fef3a141795759455->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6780cadf32d7009fef3a141795759455, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6780cadf32d7009fef3a141795759455,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6780cadf32d7009fef3a141795759455 == cache_frame_6780cadf32d7009fef3a141795759455) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6780cadf32d7009fef3a141795759455);
        cache_frame_6780cadf32d7009fef3a141795759455 = NULL;
    }

    assertFrameObject(frame_6780cadf32d7009fef3a141795759455);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__8_mouseDown(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_e001b4767fe7b01fdcc836165a732140;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e001b4767fe7b01fdcc836165a732140 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e001b4767fe7b01fdcc836165a732140)) {
        Py_XDECREF(cache_frame_e001b4767fe7b01fdcc836165a732140);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e001b4767fe7b01fdcc836165a732140 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e001b4767fe7b01fdcc836165a732140 = MAKE_FUNCTION_FRAME(tstate, codeobj_e001b4767fe7b01fdcc836165a732140, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e001b4767fe7b01fdcc836165a732140->m_type_description == NULL);
    frame_e001b4767fe7b01fdcc836165a732140 = cache_frame_e001b4767fe7b01fdcc836165a732140;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e001b4767fe7b01fdcc836165a732140);
    assert(Py_REFCNT(frame_e001b4767fe7b01fdcc836165a732140) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[82];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[82];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_3 = mod_consts[83];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[47];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[86]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[87]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[88];
        frame_e001b4767fe7b01fdcc836165a732140->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[89], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e001b4767fe7b01fdcc836165a732140->m_frame.f_lineno = 151;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[91]);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[89]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[92], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e001b4767fe7b01fdcc836165a732140, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e001b4767fe7b01fdcc836165a732140->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e001b4767fe7b01fdcc836165a732140, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e001b4767fe7b01fdcc836165a732140,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_e001b4767fe7b01fdcc836165a732140 == cache_frame_e001b4767fe7b01fdcc836165a732140) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e001b4767fe7b01fdcc836165a732140);
        cache_frame_e001b4767fe7b01fdcc836165a732140 = NULL;
    }

    assertFrameObject(frame_e001b4767fe7b01fdcc836165a732140);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__9_updateFloaterTask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *var_currT = NULL;
    PyObject *var_dt = NULL;
    struct Nuitka_FrameObject *frame_d6bffe247b2be18ac0d2641328798ac5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d6bffe247b2be18ac0d2641328798ac5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d6bffe247b2be18ac0d2641328798ac5)) {
        Py_XDECREF(cache_frame_d6bffe247b2be18ac0d2641328798ac5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6bffe247b2be18ac0d2641328798ac5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6bffe247b2be18ac0d2641328798ac5 = MAKE_FUNCTION_FRAME(tstate, codeobj_d6bffe247b2be18ac0d2641328798ac5, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6bffe247b2be18ac0d2641328798ac5->m_type_description == NULL);
    frame_d6bffe247b2be18ac0d2641328798ac5 = cache_frame_d6bffe247b2be18ac0d2641328798ac5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d6bffe247b2be18ac0d2641328798ac5);
    assert(Py_REFCNT(frame_d6bffe247b2be18ac0d2641328798ac5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6bffe247b2be18ac0d2641328798ac5->m_frame.f_lineno = 158;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[91]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_currT == NULL);
        var_currT = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_currT);
        tmp_sub_expr_left_1 = var_currT;
        CHECK_OBJECT(par_state);
        tmp_expression_value_1 = par_state;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[92]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_dt == NULL);
        var_dt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[84]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dt);
        tmp_mult_expr_right_1 = var_dt;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6bffe247b2be18ac0d2641328798ac5->m_frame.f_lineno = 160;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_currT);
        tmp_assattr_value_1 = var_currT;
        CHECK_OBJECT(par_state);
        tmp_assattr_target_1 = par_state;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[92], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[96]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6bffe247b2be18ac0d2641328798ac5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6bffe247b2be18ac0d2641328798ac5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6bffe247b2be18ac0d2641328798ac5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6bffe247b2be18ac0d2641328798ac5,
        type_description_1,
        par_self,
        par_state,
        var_currT,
        var_dt
    );


    // Release cached frame if used for exception.
    if (frame_d6bffe247b2be18ac0d2641328798ac5 == cache_frame_d6bffe247b2be18ac0d2641328798ac5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6bffe247b2be18ac0d2641328798ac5);
        cache_frame_d6bffe247b2be18ac0d2641328798ac5 = NULL;
    }

    assertFrameObject(frame_d6bffe247b2be18ac0d2641328798ac5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_currT);
    Py_DECREF(var_currT);
    var_currT = NULL;
    CHECK_OBJECT(var_dt);
    Py_DECREF(var_dt);
    var_dt = NULL;
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

    Py_XDECREF(var_currT);
    var_currT = NULL;
    Py_XDECREF(var_dt);
    var_dt = NULL;
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
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__10_updateFloaterSF(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_sf = NULL;
    struct Nuitka_FrameObject *frame_7c6346c76349f40662cf831afee81bcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7c6346c76349f40662cf831afee81bcc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7c6346c76349f40662cf831afee81bcc)) {
        Py_XDECREF(cache_frame_7c6346c76349f40662cf831afee81bcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c6346c76349f40662cf831afee81bcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c6346c76349f40662cf831afee81bcc = MAKE_FUNCTION_FRAME(tstate, codeobj_7c6346c76349f40662cf831afee81bcc, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c6346c76349f40662cf831afee81bcc->m_type_description == NULL);
    frame_7c6346c76349f40662cf831afee81bcc = cache_frame_7c6346c76349f40662cf831afee81bcc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c6346c76349f40662cf831afee81bcc);
    assert(Py_REFCNT(frame_7c6346c76349f40662cf831afee81bcc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[98]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[99]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7c6346c76349f40662cf831afee81bcc->m_frame.f_lineno = 168;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[18]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[100]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_6 = par_event;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[101]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7c6346c76349f40662cf831afee81bcc->m_frame.f_lineno = 169;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[24];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_args_element_value_5 = var_x;
        frame_7c6346c76349f40662cf831afee81bcc->m_frame.f_lineno = 170;
        tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[104]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7c6346c76349f40662cf831afee81bcc->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_offset);
        tmp_cmp_expr_left_1 = var_offset;
        tmp_cmp_expr_right_1 = mod_consts[24];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[24];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[106]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[107]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[108]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_offset);
        tmp_truediv_expr_left_1 = var_offset;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[109]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 174;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7c6346c76349f40662cf831afee81bcc->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sf == NULL);
        var_sf = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_x);
        tmp_cmp_expr_left_2 = var_x;
        tmp_cmp_expr_right_2 = mod_consts[24];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_sf);
        tmp_assattr_value_1 = var_sf;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_sf);
        tmp_operand_value_1 = var_sf;
        tmp_assattr_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[84], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c6346c76349f40662cf831afee81bcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c6346c76349f40662cf831afee81bcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c6346c76349f40662cf831afee81bcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c6346c76349f40662cf831afee81bcc,
        type_description_1,
        par_self,
        par_event,
        var_x,
        var_y,
        var_offset,
        var_sf
    );


    // Release cached frame if used for exception.
    if (frame_7c6346c76349f40662cf831afee81bcc == cache_frame_7c6346c76349f40662cf831afee81bcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c6346c76349f40662cf831afee81bcc);
        cache_frame_7c6346c76349f40662cf831afee81bcc = NULL;
    }

    assertFrameObject(frame_7c6346c76349f40662cf831afee81bcc);

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
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_sf);
    var_sf = NULL;
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

    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_sf);
    var_sf = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__11_mouseUp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_c7322f24ca0443ad4ecbe35e9ad35584;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c7322f24ca0443ad4ecbe35e9ad35584 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7322f24ca0443ad4ecbe35e9ad35584)) {
        Py_XDECREF(cache_frame_c7322f24ca0443ad4ecbe35e9ad35584);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7322f24ca0443ad4ecbe35e9ad35584 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7322f24ca0443ad4ecbe35e9ad35584 = MAKE_FUNCTION_FRAME(tstate, codeobj_c7322f24ca0443ad4ecbe35e9ad35584, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7322f24ca0443ad4ecbe35e9ad35584->m_type_description == NULL);
    frame_c7322f24ca0443ad4ecbe35e9ad35584 = cache_frame_c7322f24ca0443ad4ecbe35e9ad35584;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c7322f24ca0443ad4ecbe35e9ad35584);
    assert(Py_REFCNT(frame_c7322f24ca0443ad4ecbe35e9ad35584) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[89]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c7322f24ca0443ad4ecbe35e9ad35584->m_frame.f_lineno = 181;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[47];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = mod_consts[112];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_2 = mod_consts[112];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_3 = mod_consts[83];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_2 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7322f24ca0443ad4ecbe35e9ad35584, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7322f24ca0443ad4ecbe35e9ad35584->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7322f24ca0443ad4ecbe35e9ad35584, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7322f24ca0443ad4ecbe35e9ad35584,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_c7322f24ca0443ad4ecbe35e9ad35584 == cache_frame_c7322f24ca0443ad4ecbe35e9ad35584) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7322f24ca0443ad4ecbe35e9ad35584);
        cache_frame_c7322f24ca0443ad4ecbe35e9ad35584 = NULL;
    }

    assertFrameObject(frame_c7322f24ca0443ad4ecbe35e9ad35584);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__12_setNumDigits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7fff5bab399f7f6a1d97afaed617511c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7fff5bab399f7f6a1d97afaed617511c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7fff5bab399f7f6a1d97afaed617511c)) {
        Py_XDECREF(cache_frame_7fff5bab399f7f6a1d97afaed617511c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fff5bab399f7f6a1d97afaed617511c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fff5bab399f7f6a1d97afaed617511c = MAKE_FUNCTION_FRAME(tstate, codeobj_7fff5bab399f7f6a1d97afaed617511c, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7fff5bab399f7f6a1d97afaed617511c->m_type_description == NULL);
    frame_7fff5bab399f7f6a1d97afaed617511c = cache_frame_7fff5bab399f7f6a1d97afaed617511c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7fff5bab399f7f6a1d97afaed617511c);
    assert(Py_REFCNT(frame_7fff5bab399f7f6a1d97afaed617511c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[113]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[48];
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[114]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[107]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7fff5bab399f7f6a1d97afaed617511c->m_frame.f_lineno = 194;
        tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7fff5bab399f7f6a1d97afaed617511c->m_frame.f_lineno = 193;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[108], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fff5bab399f7f6a1d97afaed617511c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fff5bab399f7f6a1d97afaed617511c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fff5bab399f7f6a1d97afaed617511c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fff5bab399f7f6a1d97afaed617511c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7fff5bab399f7f6a1d97afaed617511c == cache_frame_7fff5bab399f7f6a1d97afaed617511c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fff5bab399f7f6a1d97afaed617511c);
        cache_frame_7fff5bab399f7f6a1d97afaed617511c = NULL;
    }

    assertFrameObject(frame_7fff5bab399f7f6a1d97afaed617511c);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__13_setRelief(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_76ed1c04ce6df5fed0b0582e92d7e1c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4)) {
        Py_XDECREF(cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4 = MAKE_FUNCTION_FRAME(tstate, codeobj_76ed1c04ce6df5fed0b0582e92d7e1c4, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4->m_type_description == NULL);
    frame_76ed1c04ce6df5fed0b0582e92d7e1c4 = cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_76ed1c04ce6df5fed0b0582e92d7e1c4);
    assert(Py_REFCNT(frame_76ed1c04ce6df5fed0b0582e92d7e1c4) == 2);

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
        tmp_subscript_value_1 = mod_consts[38];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_76ed1c04ce6df5fed0b0582e92d7e1c4->m_frame.f_lineno = 198;
        tmp_ass_subscribed_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 198;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76ed1c04ce6df5fed0b0582e92d7e1c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76ed1c04ce6df5fed0b0582e92d7e1c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76ed1c04ce6df5fed0b0582e92d7e1c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76ed1c04ce6df5fed0b0582e92d7e1c4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_76ed1c04ce6df5fed0b0582e92d7e1c4 == cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4);
        cache_frame_76ed1c04ce6df5fed0b0582e92d7e1c4 = NULL;
    }

    assertFrameObject(frame_76ed1c04ce6df5fed0b0582e92d7e1c4);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__14_setBorderwidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7e97f3cfc93f2bae6a2d30cf80deeb6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c)) {
        Py_XDECREF(cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c = MAKE_FUNCTION_FRAME(tstate, codeobj_7e97f3cfc93f2bae6a2d30cf80deeb6c, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c->m_type_description == NULL);
    frame_7e97f3cfc93f2bae6a2d30cf80deeb6c = cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7e97f3cfc93f2bae6a2d30cf80deeb6c);
    assert(Py_REFCNT(frame_7e97f3cfc93f2bae6a2d30cf80deeb6c) == 2);

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
        tmp_subscript_value_1 = mod_consts[41];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7e97f3cfc93f2bae6a2d30cf80deeb6c->m_frame.f_lineno = 201;
        tmp_ass_subscribed_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[41];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e97f3cfc93f2bae6a2d30cf80deeb6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e97f3cfc93f2bae6a2d30cf80deeb6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e97f3cfc93f2bae6a2d30cf80deeb6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e97f3cfc93f2bae6a2d30cf80deeb6c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7e97f3cfc93f2bae6a2d30cf80deeb6c == cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c);
        cache_frame_7e97f3cfc93f2bae6a2d30cf80deeb6c = NULL;
    }

    assertFrameObject(frame_7e97f3cfc93f2bae6a2d30cf80deeb6c);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__15_setBackground(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c5940c176671a193f03ac01830cfe375;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c5940c176671a193f03ac01830cfe375 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5940c176671a193f03ac01830cfe375)) {
        Py_XDECREF(cache_frame_c5940c176671a193f03ac01830cfe375);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5940c176671a193f03ac01830cfe375 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5940c176671a193f03ac01830cfe375 = MAKE_FUNCTION_FRAME(tstate, codeobj_c5940c176671a193f03ac01830cfe375, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5940c176671a193f03ac01830cfe375->m_type_description == NULL);
    frame_c5940c176671a193f03ac01830cfe375 = cache_frame_c5940c176671a193f03ac01830cfe375;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c5940c176671a193f03ac01830cfe375);
    assert(Py_REFCNT(frame_c5940c176671a193f03ac01830cfe375) == 2);

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
        tmp_subscript_value_1 = mod_consts[44];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[44];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5940c176671a193f03ac01830cfe375, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5940c176671a193f03ac01830cfe375->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5940c176671a193f03ac01830cfe375, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5940c176671a193f03ac01830cfe375,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c5940c176671a193f03ac01830cfe375 == cache_frame_c5940c176671a193f03ac01830cfe375) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5940c176671a193f03ac01830cfe375);
        cache_frame_c5940c176671a193f03ac01830cfe375 = NULL;
    }

    assertFrameObject(frame_c5940c176671a193f03ac01830cfe375);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__16_highlightWidget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_f17e2bda4c88213b6b21f2f434af0e77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f17e2bda4c88213b6b21f2f434af0e77 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f17e2bda4c88213b6b21f2f434af0e77)) {
        Py_XDECREF(cache_frame_f17e2bda4c88213b6b21f2f434af0e77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f17e2bda4c88213b6b21f2f434af0e77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f17e2bda4c88213b6b21f2f434af0e77 = MAKE_FUNCTION_FRAME(tstate, codeobj_f17e2bda4c88213b6b21f2f434af0e77, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f17e2bda4c88213b6b21f2f434af0e77->m_type_description == NULL);
    frame_f17e2bda4c88213b6b21f2f434af0e77 = cache_frame_f17e2bda4c88213b6b21f2f434af0e77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f17e2bda4c88213b6b21f2f434af0e77);
    assert(Py_REFCNT(frame_f17e2bda4c88213b6b21f2f434af0e77) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[116]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f17e2bda4c88213b6b21f2f434af0e77->m_frame.f_lineno = 207;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f17e2bda4c88213b6b21f2f434af0e77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f17e2bda4c88213b6b21f2f434af0e77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f17e2bda4c88213b6b21f2f434af0e77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f17e2bda4c88213b6b21f2f434af0e77,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_f17e2bda4c88213b6b21f2f434af0e77 == cache_frame_f17e2bda4c88213b6b21f2f434af0e77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f17e2bda4c88213b6b21f2f434af0e77);
        cache_frame_f17e2bda4c88213b6b21f2f434af0e77 = NULL;
    }

    assertFrameObject(frame_f17e2bda4c88213b6b21f2f434af0e77);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__17_restoreWidget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_6b5d74c9fa034636e2e163df7a0734a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b5d74c9fa034636e2e163df7a0734a3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b5d74c9fa034636e2e163df7a0734a3)) {
        Py_XDECREF(cache_frame_6b5d74c9fa034636e2e163df7a0734a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b5d74c9fa034636e2e163df7a0734a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b5d74c9fa034636e2e163df7a0734a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b5d74c9fa034636e2e163df7a0734a3, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b5d74c9fa034636e2e163df7a0734a3->m_type_description == NULL);
    frame_6b5d74c9fa034636e2e163df7a0734a3 = cache_frame_6b5d74c9fa034636e2e163df7a0734a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b5d74c9fa034636e2e163df7a0734a3);
    assert(Py_REFCNT(frame_6b5d74c9fa034636e2e163df7a0734a3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[116]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6b5d74c9fa034636e2e163df7a0734a3->m_frame.f_lineno = 210;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[119], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b5d74c9fa034636e2e163df7a0734a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b5d74c9fa034636e2e163df7a0734a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b5d74c9fa034636e2e163df7a0734a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b5d74c9fa034636e2e163df7a0734a3,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_6b5d74c9fa034636e2e163df7a0734a3 == cache_frame_6b5d74c9fa034636e2e163df7a0734a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b5d74c9fa034636e2e163df7a0734a3);
        cache_frame_6b5d74c9fa034636e2e163df7a0734a3 = NULL;
    }

    assertFrameObject(frame_6b5d74c9fa034636e2e163df7a0734a3);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    PyObject *var_menubar = NULL;
    PyObject *var_index = NULL;
    PyObject *var_f = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_14d786b7af576b1a53281c9119d84ec6;
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
    static struct Nuitka_FrameObject *cache_frame_14d786b7af576b1a53281c9119d84ec6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_14d786b7af576b1a53281c9119d84ec6)) {
        Py_XDECREF(cache_frame_14d786b7af576b1a53281c9119d84ec6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14d786b7af576b1a53281c9119d84ec6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14d786b7af576b1a53281c9119d84ec6 = MAKE_FUNCTION_FRAME(tstate, codeobj_14d786b7af576b1a53281c9119d84ec6, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14d786b7af576b1a53281c9119d84ec6->m_type_description == NULL);
    frame_14d786b7af576b1a53281c9119d84ec6 = cache_frame_14d786b7af576b1a53281c9119d84ec6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_14d786b7af576b1a53281c9119d84ec6);
    assert(Py_REFCNT(frame_14d786b7af576b1a53281c9119d84ec6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[47]);
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_key_value_1 = mod_consts[120];
        tmp_default_value_1 = mod_consts[28];
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


            exception_lineno = 219;
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
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_kw);
            tmp_dict_arg_value_2 = par_kw;
            tmp_key_value_2 = mod_consts[120];
            tmp_default_value_2 = mod_consts[28];
            tmp_args_element_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
            if (tmp_args_element_value_1 == NULL) {
                tmp_args_element_value_1 = tmp_default_value_2;
                Py_INCREF(tmp_args_element_value_1);
            }
            assert(!(tmp_args_element_value_1 == NULL));
            frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 220;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
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
                    exception_lineno = 220;
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
            tmp_mod_expr_left_1 = mod_consts[122];
            CHECK_OBJECT(outline_0_var_x);
            tmp_mod_expr_right_1 = outline_0_var_x;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_lineno = 220;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_DEFAULT_LABELS == NULL);
        var_DEFAULT_LABELS = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        tmp_tuple_element_2 = mod_consts[120];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[28];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_INITOPT);
        tmp_tuple_element_2 = var_INITOPT;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[123];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooNoooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_3 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 2, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[15];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_DEFAULT_VALUE);
            tmp_tuple_element_4 = var_DEFAULT_VALUE;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_4 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_assign_source_8, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 4, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[126];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                CHECK_OBJECT(var_DEFAULT_LABELS);
                tmp_tuple_element_5 = var_DEFAULT_LABELS;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[127]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 233;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
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
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[128]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_5 = par_parent;
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[6],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 241;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[13]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interior == NULL);
        var_interior = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 243;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[130], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 246;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[131]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[132], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[133];
        tmp_kw_call_arg_value_1_1 = mod_consts[57];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 248;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[134]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 248;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_tuple_element_6 = var_interior;
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_6);
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[132]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 249;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 247;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_menubar == NULL);
        var_menubar = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_8 = var_menubar;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[61]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 250;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 250;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_menubar);
        tmp_called_instance_5 = var_menubar;
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 253;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_5,
            mod_consts[137],
            &PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_9 = var_menubar;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[139]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[140];
        CHECK_OBJECT(par_self);
        tmp_tuple_element_7 = par_self;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_7);


        tmp_kw_call_value_1_1 = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda(tmp_defaults_1);

        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 254;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};
            tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_5, mod_consts[143], kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_10 = var_menubar;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[139]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[145];
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[146]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 260;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};
            tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_6, mod_consts[147], kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_menubar);
        tmp_called_instance_6 = var_menubar;
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 262;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_6,
            mod_consts[137],
            &PyTuple_GET_ITEM(mod_consts[148], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 263;
        tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[150], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[150]);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 264;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_13 = var_menubar;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[139]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[152];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[150]);
        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 268;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[153]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_1_3);

            exception_lineno = 269;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 265;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_1};
            tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_8, mod_consts[154], kw_values, mod_consts[155]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_1_3);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[156], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_subscript_value_2 = mod_consts[120];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 272;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
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
                exception_lineno = 272;
                goto try_except_handler_4;
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_17 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[9]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_2 = mod_consts[158];
        CHECK_OBJECT(var_index);
        tmp_mod_expr_right_2 = var_index;
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 276;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_1_2 = mod_consts[57];
        tmp_kw_call_arg_value_2_2 = mod_consts[5];
        tmp_kw_call_arg_value_3_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_kw_call_arg_value_3_2 == NULL)) {
            tmp_kw_call_arg_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 276;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        if (var_interior == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_8 = var_interior;
        tmp_kw_call_arg_value_4_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_2, 0, tmp_tuple_element_8);
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[130]);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 277;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_3 = var_index;
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 277;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 278;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_21 = par_self;
        tmp_subscript_value_4 = mod_consts[126];
        tmp_expression_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_4);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 278;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_5 = var_index;
        tmp_kw_call_dict_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 278;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 275;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[159]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_9 = par_self;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_9 = var_index;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_9);


        tmp_ass_subvalue_1 = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda(tmp_defaults_2);

        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_1 = var_f;
        tmp_ass_subscript_1 = mod_consts[77];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(var_f);
        tmp_expression_value_22 = var_f;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[61]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 281;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_23 = par_self;
        tmp_subscript_value_6 = mod_consts[123];
        tmp_kw_call_value_0_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_6);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 281;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_1_4 = mod_consts[28];
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 281;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 281;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4, tmp_kw_call_value_2_2};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[160]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 282;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[156]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[161]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_8 = var_f;
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 282;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_11);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 272;
        type_description_1 = "oooNoooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_self;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[94]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_self;
        tmp_subscript_value_7 = mod_consts[15];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_7);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 285;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 285;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 288;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_self;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[7]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 288;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_14d786b7af576b1a53281c9119d84ec6->m_frame.f_lineno = 288;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14d786b7af576b1a53281c9119d84ec6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14d786b7af576b1a53281c9119d84ec6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14d786b7af576b1a53281c9119d84ec6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14d786b7af576b1a53281c9119d84ec6,
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
        var_menubar,
        var_index,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_14d786b7af576b1a53281c9119d84ec6 == cache_frame_14d786b7af576b1a53281c9119d84ec6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14d786b7af576b1a53281c9119d84ec6);
        cache_frame_14d786b7af576b1a53281c9119d84ec6 = NULL;
    }

    assertFrameObject(frame_14d786b7af576b1a53281c9119d84ec6);

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
    CHECK_OBJECT(var_menubar);
    Py_DECREF(var_menubar);
    var_menubar = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    Py_XDECREF(var_menubar);
    var_menubar = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_ab9aacff31bba29c568c1c46faa2265b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ab9aacff31bba29c568c1c46faa2265b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab9aacff31bba29c568c1c46faa2265b)) {
        Py_XDECREF(cache_frame_ab9aacff31bba29c568c1c46faa2265b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab9aacff31bba29c568c1c46faa2265b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab9aacff31bba29c568c1c46faa2265b = MAKE_FUNCTION_FRAME(tstate, codeobj_ab9aacff31bba29c568c1c46faa2265b, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab9aacff31bba29c568c1c46faa2265b->m_type_description == NULL);
    frame_ab9aacff31bba29c568c1c46faa2265b = cache_frame_ab9aacff31bba29c568c1c46faa2265b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ab9aacff31bba29c568c1c46faa2265b);
    assert(Py_REFCNT(frame_ab9aacff31bba29c568c1c46faa2265b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_ab9aacff31bba29c568c1c46faa2265b->m_frame.f_lineno = 257;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[163]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_ab9aacff31bba29c568c1c46faa2265b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab9aacff31bba29c568c1c46faa2265b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab9aacff31bba29c568c1c46faa2265b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab9aacff31bba29c568c1c46faa2265b,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_ab9aacff31bba29c568c1c46faa2265b == cache_frame_ab9aacff31bba29c568c1c46faa2265b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab9aacff31bba29c568c1c46faa2265b);
        cache_frame_ab9aacff31bba29c568c1c46faa2265b = NULL;
    }

    assertFrameObject(frame_ab9aacff31bba29c568c1c46faa2265b);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_i = python_pars[2];
    struct Nuitka_FrameObject *frame_2c12d3ca3b0304259cea40ec1a186e49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c12d3ca3b0304259cea40ec1a186e49 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c12d3ca3b0304259cea40ec1a186e49)) {
        Py_XDECREF(cache_frame_2c12d3ca3b0304259cea40ec1a186e49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c12d3ca3b0304259cea40ec1a186e49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c12d3ca3b0304259cea40ec1a186e49 = MAKE_FUNCTION_FRAME(tstate, codeobj_2c12d3ca3b0304259cea40ec1a186e49, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c12d3ca3b0304259cea40ec1a186e49->m_type_description == NULL);
    frame_2c12d3ca3b0304259cea40ec1a186e49 = cache_frame_2c12d3ca3b0304259cea40ec1a186e49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c12d3ca3b0304259cea40ec1a186e49);
    assert(Py_REFCNT(frame_2c12d3ca3b0304259cea40ec1a186e49) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_i);
        tmp_args_element_value_1 = par_i;
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        frame_2c12d3ca3b0304259cea40ec1a186e49->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[164],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2c12d3ca3b0304259cea40ec1a186e49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c12d3ca3b0304259cea40ec1a186e49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c12d3ca3b0304259cea40ec1a186e49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c12d3ca3b0304259cea40ec1a186e49,
        type_description_1,
        par_val,
        par_s,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_2c12d3ca3b0304259cea40ec1a186e49 == cache_frame_2c12d3ca3b0304259cea40ec1a186e49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c12d3ca3b0304259cea40ec1a186e49);
        cache_frame_2c12d3ca3b0304259cea40ec1a186e49 = NULL;
    }

    assertFrameObject(frame_2c12d3ca3b0304259cea40ec1a186e49);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
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


static PyObject *impl_direct$tkwidgets$Floater$$$function__19__updateLabels(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b0ab7581659a749025665b945c18af39;
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
    static struct Nuitka_FrameObject *cache_frame_b0ab7581659a749025665b945c18af39 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0ab7581659a749025665b945c18af39)) {
        Py_XDECREF(cache_frame_b0ab7581659a749025665b945c18af39);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0ab7581659a749025665b945c18af39 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0ab7581659a749025665b945c18af39 = MAKE_FUNCTION_FRAME(tstate, codeobj_b0ab7581659a749025665b945c18af39, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0ab7581659a749025665b945c18af39->m_type_description == NULL);
    frame_b0ab7581659a749025665b945c18af39 = cache_frame_b0ab7581659a749025665b945c18af39;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b0ab7581659a749025665b945c18af39);
    assert(Py_REFCNT(frame_b0ab7581659a749025665b945c18af39) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[126];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[120];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b0ab7581659a749025665b945c18af39->m_frame.f_lineno = 292;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 292;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_3;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_subscript_value_3 = mod_consts[126];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_4 = var_index;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[156]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_5 = var_index;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_1 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 292;
        type_description_1 = "oo";
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0ab7581659a749025665b945c18af39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0ab7581659a749025665b945c18af39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0ab7581659a749025665b945c18af39, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0ab7581659a749025665b945c18af39,
        type_description_1,
        par_self,
        var_index
    );


    // Release cached frame if used for exception.
    if (frame_b0ab7581659a749025665b945c18af39 == cache_frame_b0ab7581659a749025665b945c18af39) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0ab7581659a749025665b945c18af39);
        cache_frame_b0ab7581659a749025665b945c18af39 = NULL;
    }

    assertFrameObject(frame_b0ab7581659a749025665b945c18af39);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__20_toggleBalloon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_012ff07012b6b72689de82f4b6490368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_012ff07012b6b72689de82f4b6490368 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_012ff07012b6b72689de82f4b6490368)) {
        Py_XDECREF(cache_frame_012ff07012b6b72689de82f4b6490368);

#if _DEBUG_REFCOUNTS
        if (cache_frame_012ff07012b6b72689de82f4b6490368 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_012ff07012b6b72689de82f4b6490368 = MAKE_FUNCTION_FRAME(tstate, codeobj_012ff07012b6b72689de82f4b6490368, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_012ff07012b6b72689de82f4b6490368->m_type_description == NULL);
    frame_012ff07012b6b72689de82f4b6490368 = cache_frame_012ff07012b6b72689de82f4b6490368;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_012ff07012b6b72689de82f4b6490368);
    assert(Py_REFCNT(frame_012ff07012b6b72689de82f4b6490368) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[150]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[166]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_012ff07012b6b72689de82f4b6490368->m_frame.f_lineno = 296;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[132]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[167]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_012ff07012b6b72689de82f4b6490368->m_frame.f_lineno = 297;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[135], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[132]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[167]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_012ff07012b6b72689de82f4b6490368->m_frame.f_lineno = 299;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[169], 0), mod_consts[168]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_012ff07012b6b72689de82f4b6490368, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_012ff07012b6b72689de82f4b6490368->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_012ff07012b6b72689de82f4b6490368, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_012ff07012b6b72689de82f4b6490368,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_012ff07012b6b72689de82f4b6490368 == cache_frame_012ff07012b6b72689de82f4b6490368) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_012ff07012b6b72689de82f4b6490368);
        cache_frame_012ff07012b6b72689de82f4b6490368 = NULL;
    }

    assertFrameObject(frame_012ff07012b6b72689de82f4b6490368);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__21_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bb380f3f564c280ff569a93bab800c58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bb380f3f564c280ff569a93bab800c58 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb380f3f564c280ff569a93bab800c58)) {
        Py_XDECREF(cache_frame_bb380f3f564c280ff569a93bab800c58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb380f3f564c280ff569a93bab800c58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb380f3f564c280ff569a93bab800c58 = MAKE_FUNCTION_FRAME(tstate, codeobj_bb380f3f564c280ff569a93bab800c58, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb380f3f564c280ff569a93bab800c58->m_type_description == NULL);
    frame_bb380f3f564c280ff569a93bab800c58 = cache_frame_bb380f3f564c280ff569a93bab800c58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb380f3f564c280ff569a93bab800c58);
    assert(Py_REFCNT(frame_bb380f3f564c280ff569a93bab800c58) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[130]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
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
        exception_tb = MAKE_TRACEBACK(frame_bb380f3f564c280ff569a93bab800c58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb380f3f564c280ff569a93bab800c58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb380f3f564c280ff569a93bab800c58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb380f3f564c280ff569a93bab800c58,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bb380f3f564c280ff569a93bab800c58 == cache_frame_bb380f3f564c280ff569a93bab800c58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb380f3f564c280ff569a93bab800c58);
        cache_frame_bb380f3f564c280ff569a93bab800c58 = NULL;
    }

    assertFrameObject(frame_bb380f3f564c280ff569a93bab800c58);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__22_getAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_b6fc932cf9a684a2e42c7ff578c2e1e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2)) {
        Py_XDECREF(cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2 = MAKE_FUNCTION_FRAME(tstate, codeobj_b6fc932cf9a684a2e42c7ff578c2e1e2, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2->m_type_description == NULL);
    frame_b6fc932cf9a684a2e42c7ff578c2e1e2 = cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b6fc932cf9a684a2e42c7ff578c2e1e2);
    assert(Py_REFCNT(frame_b6fc932cf9a684a2e42c7ff578c2e1e2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[130]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
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


            exception_lineno = 305;
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
        exception_tb = MAKE_TRACEBACK(frame_b6fc932cf9a684a2e42c7ff578c2e1e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6fc932cf9a684a2e42c7ff578c2e1e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6fc932cf9a684a2e42c7ff578c2e1e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6fc932cf9a684a2e42c7ff578c2e1e2,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_b6fc932cf9a684a2e42c7ff578c2e1e2 == cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2);
        cache_frame_b6fc932cf9a684a2e42c7ff578c2e1e2 = NULL;
    }

    assertFrameObject(frame_b6fc932cf9a684a2e42c7ff578c2e1e2);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__23_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    struct Nuitka_FrameObject *frame_e6b8b5eb35d1baa2dbec41d072eec905;
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
    static struct Nuitka_FrameObject *cache_frame_e6b8b5eb35d1baa2dbec41d072eec905 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6b8b5eb35d1baa2dbec41d072eec905)) {
        Py_XDECREF(cache_frame_e6b8b5eb35d1baa2dbec41d072eec905);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6b8b5eb35d1baa2dbec41d072eec905 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6b8b5eb35d1baa2dbec41d072eec905 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6b8b5eb35d1baa2dbec41d072eec905, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6b8b5eb35d1baa2dbec41d072eec905->m_type_description == NULL);
    frame_e6b8b5eb35d1baa2dbec41d072eec905 = cache_frame_e6b8b5eb35d1baa2dbec41d072eec905;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6b8b5eb35d1baa2dbec41d072eec905);
    assert(Py_REFCNT(frame_e6b8b5eb35d1baa2dbec41d072eec905) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[120];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e6b8b5eb35d1baa2dbec41d072eec905->m_frame.f_lineno = 309;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 309;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 310;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[130]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 310;
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


            exception_lineno = 310;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[156]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[94]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_7 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = mod_consts[24];
        frame_e6b8b5eb35d1baa2dbec41d072eec905->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 309;
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
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_fCommand);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_fCommand);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_subscript_value_5 = mod_consts[77];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_subscript_value_6 = mod_consts[77];
        tmp_called_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[157]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[130]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e6b8b5eb35d1baa2dbec41d072eec905->m_frame.f_lineno = 314;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_e6b8b5eb35d1baa2dbec41d072eec905, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6b8b5eb35d1baa2dbec41d072eec905->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6b8b5eb35d1baa2dbec41d072eec905, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6b8b5eb35d1baa2dbec41d072eec905,
        type_description_1,
        par_self,
        par_value,
        par_fCommand,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_e6b8b5eb35d1baa2dbec41d072eec905 == cache_frame_e6b8b5eb35d1baa2dbec41d072eec905) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6b8b5eb35d1baa2dbec41d072eec905);
        cache_frame_e6b8b5eb35d1baa2dbec41d072eec905 = NULL;
    }

    assertFrameObject(frame_e6b8b5eb35d1baa2dbec41d072eec905);

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


static PyObject *impl_direct$tkwidgets$Floater$$$function__24_setAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_085c3f989873e983bb69bef734a5d2b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_085c3f989873e983bb69bef734a5d2b0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_085c3f989873e983bb69bef734a5d2b0)) {
        Py_XDECREF(cache_frame_085c3f989873e983bb69bef734a5d2b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_085c3f989873e983bb69bef734a5d2b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_085c3f989873e983bb69bef734a5d2b0 = MAKE_FUNCTION_FRAME(tstate, codeobj_085c3f989873e983bb69bef734a5d2b0, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_085c3f989873e983bb69bef734a5d2b0->m_type_description == NULL);
    frame_085c3f989873e983bb69bef734a5d2b0 = cache_frame_085c3f989873e983bb69bef734a5d2b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_085c3f989873e983bb69bef734a5d2b0);
    assert(Py_REFCNT(frame_085c3f989873e983bb69bef734a5d2b0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_085c3f989873e983bb69bef734a5d2b0->m_frame.f_lineno = 318;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[94], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_085c3f989873e983bb69bef734a5d2b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_085c3f989873e983bb69bef734a5d2b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_085c3f989873e983bb69bef734a5d2b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_085c3f989873e983bb69bef734a5d2b0,
        type_description_1,
        par_self,
        par_index,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_085c3f989873e983bb69bef734a5d2b0 == cache_frame_085c3f989873e983bb69bef734a5d2b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_085c3f989873e983bb69bef734a5d2b0);
        cache_frame_085c3f989873e983bb69bef734a5d2b0 = NULL;
    }

    assertFrameObject(frame_085c3f989873e983bb69bef734a5d2b0);

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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__25__floaterSetAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_ee771a5a09acb522a7e30f1f1173f151;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee771a5a09acb522a7e30f1f1173f151 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee771a5a09acb522a7e30f1f1173f151)) {
        Py_XDECREF(cache_frame_ee771a5a09acb522a7e30f1f1173f151);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee771a5a09acb522a7e30f1f1173f151 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee771a5a09acb522a7e30f1f1173f151 = MAKE_FUNCTION_FRAME(tstate, codeobj_ee771a5a09acb522a7e30f1f1173f151, module_direct$tkwidgets$Floater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee771a5a09acb522a7e30f1f1173f151->m_type_description == NULL);
    frame_ee771a5a09acb522a7e30f1f1173f151 = cache_frame_ee771a5a09acb522a7e30f1f1173f151;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ee771a5a09acb522a7e30f1f1173f151);
    assert(Py_REFCNT(frame_ee771a5a09acb522a7e30f1f1173f151) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[130]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_ass_subscript_1 = par_index;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[77];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_2 = mod_consts[77];
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[130]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ee771a5a09acb522a7e30f1f1173f151->m_frame.f_lineno = 324;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_ee771a5a09acb522a7e30f1f1173f151, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee771a5a09acb522a7e30f1f1173f151->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee771a5a09acb522a7e30f1f1173f151, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee771a5a09acb522a7e30f1f1173f151,
        type_description_1,
        par_self,
        par_index,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ee771a5a09acb522a7e30f1f1173f151 == cache_frame_ee771a5a09acb522a7e30f1f1173f151) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee771a5a09acb522a7e30f1f1173f151);
        cache_frame_ee771a5a09acb522a7e30f1f1173f151 = NULL;
    }

    assertFrameObject(frame_ee771a5a09acb522a7e30f1f1173f151);

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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$Floater$$$function__26_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_43033c4afa0910931069525b32510c05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43033c4afa0910931069525b32510c05 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43033c4afa0910931069525b32510c05)) {
        Py_XDECREF(cache_frame_43033c4afa0910931069525b32510c05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43033c4afa0910931069525b32510c05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43033c4afa0910931069525b32510c05 = MAKE_FUNCTION_FRAME(tstate, codeobj_43033c4afa0910931069525b32510c05, module_direct$tkwidgets$Floater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43033c4afa0910931069525b32510c05->m_type_description == NULL);
    frame_43033c4afa0910931069525b32510c05 = cache_frame_43033c4afa0910931069525b32510c05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_43033c4afa0910931069525b32510c05);
    assert(Py_REFCNT(frame_43033c4afa0910931069525b32510c05) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_43033c4afa0910931069525b32510c05->m_frame.f_lineno = 327;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
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
        exception_tb = MAKE_TRACEBACK(frame_43033c4afa0910931069525b32510c05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43033c4afa0910931069525b32510c05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43033c4afa0910931069525b32510c05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43033c4afa0910931069525b32510c05,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_43033c4afa0910931069525b32510c05 == cache_frame_43033c4afa0910931069525b32510c05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43033c4afa0910931069525b32510c05);
        cache_frame_43033c4afa0910931069525b32510c05 = NULL;
    }

    assertFrameObject(frame_43033c4afa0910931069525b32510c05);

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



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__10_updateFloaterSF() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__10_updateFloaterSF,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_7c6346c76349f40662cf831afee81bcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[110],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__11_mouseUp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__11_mouseUp,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_c7322f24ca0443ad4ecbe35e9ad35584,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__12_setNumDigits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__12_setNumDigits,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_7fff5bab399f7f6a1d97afaed617511c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__13_setRelief() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__13_setRelief,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_76ed1c04ce6df5fed0b0582e92d7e1c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__14_setBorderwidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__14_setBorderwidth,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_7e97f3cfc93f2bae6a2d30cf80deeb6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__15_setBackground() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__15_setBackground,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_c5940c176671a193f03ac01830cfe375,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__16_highlightWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__16_highlightWidget,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_f17e2bda4c88213b6b21f2f434af0e77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__17_restoreWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__17_restoreWidget,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_6b5d74c9fa034636e2e163df7a0734a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__18___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_14d786b7af576b1a53281c9119d84ec6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_ab9aacff31bba29c568c1c46faa2265b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_2c12d3ca3b0304259cea40ec1a186e49,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__19__updateLabels() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__19__updateLabels,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_b0ab7581659a749025665b945c18af39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__1___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_f23c02d26d93191b2cfdcf37991b83e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__20_toggleBalloon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__20_toggleBalloon,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_012ff07012b6b72689de82f4b6490368,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__21_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__21_get,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_bb380f3f564c280ff569a93bab800c58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__22_getAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__22_getAt,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_b6fc932cf9a684a2e42c7ff578c2e1e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__23_set(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__23_set,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_e6b8b5eb35d1baa2dbec41d072eec905,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__24_setAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__24_setAt,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_085c3f989873e983bb69bef734a5d2b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__25__floaterSetAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__25__floaterSetAt,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_ee771a5a09acb522a7e30f1f1173f151,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__26_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__26_reset,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_43033c4afa0910931069525b32510c05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__2_createValuator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__2_createValuator,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_4aba6dbf2beeb2ae7e2152c9f46011db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__3_packValuator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__3_packValuator,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_32cfbeda15a9e6a266da98cb55a775e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__4___init__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_a98f99d1b2bcaa403ba0244e7f361b10,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__5_set(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__5_set,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_9c45dd0daffa253ca41abf1ef3f49eb8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__6_updateIndicator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_a351ed78029da43e523c51fb9ac5deb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__7_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__7_get,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_6780cadf32d7009fef3a141795759455,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__8_mouseDown() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__8_mouseDown,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_e001b4767fe7b01fdcc836165a732140,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__9_updateFloaterTask() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$Floater$$$function__9_updateFloaterTask,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_d6bffe247b2be18ac0d2641328798ac5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$Floater,
        mod_consts[97],
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

function_impl_code functable_direct$tkwidgets$Floater[] = {
    impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__1_lambda,
    impl_direct$tkwidgets$Floater$$$function__18___init__$$$function__2_lambda,
    impl_direct$tkwidgets$Floater$$$function__1___init__,
    impl_direct$tkwidgets$Floater$$$function__2_createValuator,
    impl_direct$tkwidgets$Floater$$$function__3_packValuator,
    impl_direct$tkwidgets$Floater$$$function__4___init__,
    impl_direct$tkwidgets$Floater$$$function__5_set,
    NULL,
    impl_direct$tkwidgets$Floater$$$function__7_get,
    impl_direct$tkwidgets$Floater$$$function__8_mouseDown,
    impl_direct$tkwidgets$Floater$$$function__9_updateFloaterTask,
    impl_direct$tkwidgets$Floater$$$function__10_updateFloaterSF,
    impl_direct$tkwidgets$Floater$$$function__11_mouseUp,
    impl_direct$tkwidgets$Floater$$$function__12_setNumDigits,
    impl_direct$tkwidgets$Floater$$$function__13_setRelief,
    impl_direct$tkwidgets$Floater$$$function__14_setBorderwidth,
    impl_direct$tkwidgets$Floater$$$function__15_setBackground,
    impl_direct$tkwidgets$Floater$$$function__16_highlightWidget,
    impl_direct$tkwidgets$Floater$$$function__17_restoreWidget,
    impl_direct$tkwidgets$Floater$$$function__18___init__,
    impl_direct$tkwidgets$Floater$$$function__19__updateLabels,
    impl_direct$tkwidgets$Floater$$$function__20_toggleBalloon,
    impl_direct$tkwidgets$Floater$$$function__21_get,
    impl_direct$tkwidgets$Floater$$$function__22_getAt,
    impl_direct$tkwidgets$Floater$$$function__23_set,
    impl_direct$tkwidgets$Floater$$$function__24_setAt,
    impl_direct$tkwidgets$Floater$$$function__25__floaterSetAt,
    impl_direct$tkwidgets$Floater$$$function__26_reset,
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

    function_impl_code *current = functable_direct$tkwidgets$Floater;
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

    if (offset > sizeof(functable_direct$tkwidgets$Floater) || offset < 0) {
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
        functable_direct$tkwidgets$Floater[offset],
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
        module_direct$tkwidgets$Floater,
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
PyObject *modulecode_direct$tkwidgets$Floater(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.tkwidgets.Floater");

    // Store the module for future use.
    module_direct$tkwidgets$Floater = module;

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
        PRINT_STRING("direct.tkwidgets.Floater: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.tkwidgets.Floater: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$tkwidgets$Floater\n");

    moduledict_direct$tkwidgets$Floater = MODULE_DICT(module_direct$tkwidgets$Floater);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$tkwidgets$Floater,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$Floater,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[245]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$Floater,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$Floater,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$Floater,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$tkwidgets$Floater);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$tkwidgets$Floater);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_24ae5a7cf7360fda4df4e15b34bdf250;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_direct$tkwidgets$Floater$$$class__1_Floater_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f16d9274f108ba248cb938bbb9218477_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46 = NULL;
    struct Nuitka_FrameObject *frame_9b2bff4ee1a0dd99cc3876258385fd9a_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213 = NULL;
    struct Nuitka_FrameObject *frame_b4dcc67755929ddd5bce6c8764ee3a53_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_2);
    }
    frame_24ae5a7cf7360fda4df4e15b34bdf250 = MAKE_MODULE_FRAME(codeobj_24ae5a7cf7360fda4df4e15b34bdf250, module_direct$tkwidgets$Floater);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_24ae5a7cf7360fda4df4e15b34bdf250);
    assert(Py_REFCNT(frame_24ae5a7cf7360fda4df4e15b34bdf250) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[174], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[175], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST3(mod_consts[8],mod_consts[12],mod_consts[162]);
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[178];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_fromlist_value_1 = mod_consts[179];
        tmp_level_value_1 = mod_consts[24];
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 8;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$Floater, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[180];
        tmp_level_value_2 = mod_consts[28];
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 9;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$tkwidgets$Floater,
                mod_consts[5],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$tkwidgets$Floater,
                mod_consts[3],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[3]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$tkwidgets$Floater,
                mod_consts[181],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[181]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_8);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[182];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[183];
        tmp_level_value_3 = mod_consts[24];
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_direct$tkwidgets$Floater,
                mod_consts[95],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[105];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[24];
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[0];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_direct$tkwidgets$Floater;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[24];
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 11;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[186]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[186]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[8];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 16;
        tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[187]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[188];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_6 = mod_consts[189];
        tmp_default_value_1 = mod_consts[190];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_6, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[189]);
            Py_DECREF(tmp_expression_value_6);
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
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$tkwidgets$Floater$$$class__1_Floater_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[8];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        frame_f16d9274f108ba248cb938bbb9218477_2 = MAKE_CLASS_FRAME(tstate, codeobj_f16d9274f108ba248cb938bbb9218477, module_direct$tkwidgets$Floater, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f16d9274f108ba248cb938bbb9218477_2);
        assert(Py_REFCNT(frame_f16d9274f108ba248cb938bbb9218477_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[194];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__2_createValuator();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[196], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__3_packValuator();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f16d9274f108ba248cb938bbb9218477_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f16d9274f108ba248cb938bbb9218477_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f16d9274f108ba248cb938bbb9218477_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f16d9274f108ba248cb938bbb9218477_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f16d9274f108ba248cb938bbb9218477_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__1_Floater_16, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[8];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_direct$tkwidgets$Floater$$$class__1_Floater_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 16;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__1_Floater_16);
        locals_direct$tkwidgets$Floater$$$class__1_Floater_16 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__1_Floater_16);
        locals_direct$tkwidgets$Floater$$$class__1_Floater_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_20);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[55]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
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


            exception_lineno = 46;

            goto try_except_handler_5;
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
        tmp_subscript_value_2 = mod_consts[24];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[186]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[186]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[12];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 46;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[187]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
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
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[188];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_name_value_7 = mod_consts[189];
        tmp_default_value_2 = mod_consts[190];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_7, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
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
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[189]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 46;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[12];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        frame_9b2bff4ee1a0dd99cc3876258385fd9a_3 = MAKE_CLASS_FRAME(tstate, codeobj_9b2bff4ee1a0dd99cc3876258385fd9a, module_direct$tkwidgets$Floater, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_9b2bff4ee1a0dd99cc3876258385fd9a_3);
        assert(Py_REFCNT(frame_9b2bff4ee1a0dd99cc3876258385fd9a_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[194];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__4___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[202];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__5_set(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__6_updateIndicator();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[204], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__7_get();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__8_mouseDown();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__9_updateFloaterTask();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__10_updateFloaterSF();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__11_mouseUp();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__12_setNumDigits();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__13_setRelief();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__14_setBorderwidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__15_setBackground();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__16_highlightWidget();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[74], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__17_restoreWidget();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9b2bff4ee1a0dd99cc3876258385fd9a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9b2bff4ee1a0dd99cc3876258385fd9a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9b2bff4ee1a0dd99cc3876258385fd9a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9b2bff4ee1a0dd99cc3876258385fd9a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_9b2bff4ee1a0dd99cc3876258385fd9a_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
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


                exception_lineno = 46;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[12];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 46;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46);
        locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46);
        locals_direct$tkwidgets$Floater$$$class__2_FloaterWidget_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 46;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_28);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[128]);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_31 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_15 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[24];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[186]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[186]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_tuple_element_10 = mod_consts[162];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 213;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_18 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[187]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
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
        PyObject *tmp_expression_value_19;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[188];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_name_value_8 = mod_consts[189];
        tmp_default_value_3 = mod_consts[190];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_8, tmp_default_value_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[189]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 213;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[193], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        frame_b4dcc67755929ddd5bce6c8764ee3a53_4 = MAKE_CLASS_FRAME(tstate, codeobj_b4dcc67755929ddd5bce6c8764ee3a53, module_direct$tkwidgets$Floater, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b4dcc67755929ddd5bce6c8764ee3a53_4);
        assert(Py_REFCNT(frame_b4dcc67755929ddd5bce6c8764ee3a53_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[194];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__18___init__(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__19__updateLabels();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__20_toggleBalloon();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__21_get();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__22_getAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[202];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__23_set(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__24_setAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[224], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__25__floaterSetAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$Floater$$$function__26_reset();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b4dcc67755929ddd5bce6c8764ee3a53_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b4dcc67755929ddd5bce6c8764ee3a53_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b4dcc67755929ddd5bce6c8764ee3a53_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b4dcc67755929ddd5bce6c8764ee3a53_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_b4dcc67755929ddd5bce6c8764ee3a53_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
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


                exception_lineno = 213;

                goto try_except_handler_10;
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
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[162];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame.f_lineno = 213;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_36 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213);
        locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213);
        locals_direct$tkwidgets$Floater$$$class__3_FloaterGroup_213 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 213;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_36);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24ae5a7cf7360fda4df4e15b34bdf250, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24ae5a7cf7360fda4df4e15b34bdf250->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24ae5a7cf7360fda4df4e15b34bdf250, exception_lineno);
    }



    assertFrameObject(frame_24ae5a7cf7360fda4df4e15b34bdf250);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.tkwidgets.Floater", false);

    Py_INCREF(module_direct$tkwidgets$Floater);
    return module_direct$tkwidgets$Floater;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$Floater, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$tkwidgets$Floater", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
