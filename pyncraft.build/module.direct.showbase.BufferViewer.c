/* Generated code for Python module 'direct.showbase.BufferViewer'
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

/* The "module_direct$showbase$BufferViewer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$showbase$BufferViewer;
PyDictObject *moduledict_direct$showbase$BufferViewer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[285];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[285];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.showbase.BufferViewer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 285; i++) {
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
void checkModuleConstants_direct$showbase$BufferViewer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 285; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fc02a513e6b44d77efe7ecc14afbb414;
static PyCodeObject *codeobj_bb3756ef5322fe4dd72a7ac719735ea8;
static PyCodeObject *codeobj_044aac93fd8d54bd5cd669226a7ddc67;
static PyCodeObject *codeobj_7970a1c5afabcf3405c9a7fcb6367311;
static PyCodeObject *codeobj_e49dec1d230739461ec7f6651db47db9;
static PyCodeObject *codeobj_83f331536cba7d96a7ea08b683bcf4c3;
static PyCodeObject *codeobj_129a08c08295d07881e0fc9442fd61e5;
static PyCodeObject *codeobj_5e6dec336e7f7f5e4076741a7654c362;
static PyCodeObject *codeobj_a2854fa12ae6d3f72cbaad7493c71741;
static PyCodeObject *codeobj_2b55d26834996723cd8191f5db0a0060;
static PyCodeObject *codeobj_457875e24774c4ab227e9fbdaa5fda34;
static PyCodeObject *codeobj_07cddd3113c02fe013104d779c960cc1;
static PyCodeObject *codeobj_7762e9287c1fd0e6dd79cebd6de74698;
static PyCodeObject *codeobj_e8016caf446410418489734537cce245;
static PyCodeObject *codeobj_31446994496a8bd2f12f79378924013a;
static PyCodeObject *codeobj_e2b8cc08a3333c0b02f92f8b4b31cd7a;
static PyCodeObject *codeobj_70c07bff6da013109229133f15f811be;
static PyCodeObject *codeobj_139ba77e0d05e5409778bb915a8049e8;
static PyCodeObject *codeobj_41934a736153ef371be66015880b4a22;
static PyCodeObject *codeobj_9d0700ae72965a8fbf104d05668a7d8b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[268]); CHECK_OBJECT(module_filename_obj);
    codeobj_fc02a513e6b44d77efe7ecc14afbb414 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[269], mod_consts[269], NULL, NULL, 0, 0, 0);
    codeobj_bb3756ef5322fe4dd72a7ac719735ea8 = MAKE_CODE_OBJECT(module_filename_obj, 25, 0, mod_consts[52], mod_consts[52], mod_consts[270], NULL, 0, 0, 0);
    codeobj_044aac93fd8d54bd5cd669226a7ddc67 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[237], mod_consts[237], mod_consts[271], NULL, 3, 0, 0);
    codeobj_7970a1c5afabcf3405c9a7fcb6367311 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[254], mod_consts[254], mod_consts[272], NULL, 1, 0, 0);
    codeobj_e49dec1d230739461ec7f6651db47db9 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[273], NULL, 3, 0, 0);
    codeobj_83f331536cba7d96a7ea08b683bcf4c3 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[274], NULL, 2, 0, 0);
    codeobj_129a08c08295d07881e0fc9442fd61e5 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[241], mod_consts[241], mod_consts[272], NULL, 1, 0, 0);
    codeobj_5e6dec336e7f7f5e4076741a7654c362 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[275], NULL, 2, 0, 0);
    codeobj_a2854fa12ae6d3f72cbaad7493c71741 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[276], NULL, 2, 0, 0);
    codeobj_2b55d26834996723cd8191f5db0a0060 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[188], mod_consts[188], mod_consts[277], NULL, 3, 0, 0);
    codeobj_457875e24774c4ab227e9fbdaa5fda34 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[272], NULL, 1, 0, 0);
    codeobj_07cddd3113c02fe013104d779c960cc1 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[252], mod_consts[252], mod_consts[278], NULL, 2, 0, 0);
    codeobj_7762e9287c1fd0e6dd79cebd6de74698 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[246], mod_consts[246], mod_consts[279], NULL, 3, 0, 0);
    codeobj_e8016caf446410418489734537cce245 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[258], mod_consts[258], mod_consts[274], NULL, 2, 0, 0);
    codeobj_31446994496a8bd2f12f79378924013a = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[256], mod_consts[256], mod_consts[274], NULL, 2, 0, 0);
    codeobj_e2b8cc08a3333c0b02f92f8b4b31cd7a = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[250], mod_consts[250], mod_consts[280], NULL, 2, 0, 0);
    codeobj_70c07bff6da013109229133f15f811be = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[248], mod_consts[248], mod_consts[281], NULL, 2, 0, 0);
    codeobj_139ba77e0d05e5409778bb915a8049e8 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[262], mod_consts[262], mod_consts[282], NULL, 2, 0, 0);
    codeobj_41934a736153ef371be66015880b4a22 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[260], mod_consts[260], mod_consts[283], NULL, 3, 0, 0);
    codeobj_9d0700ae72965a8fbf104d05668a7d8b = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[244], mod_consts[244], mod_consts[272], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__10_selectCard();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__11_advanceCard();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__12_setInclude();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__13_setExclude();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__14_setSort();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__15_setRenderParent();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__17_makeFrame();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__18_maintainReadout();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__1___init__();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__2_refreshReadout();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__3_isValidTextureSet();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__4_isEnabled();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__5_enable();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__6_toggleEnable();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__7_setCardSize();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__8_setPosition();


static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__9_setLayout();


// The module function definitions.
static PyObject *impl_direct$showbase$BufferViewer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_win = python_pars[1];
    PyObject *par_parent = python_pars[2];
    PyObject *var_size = NULL;
    struct Nuitka_FrameObject *frame_044aac93fd8d54bd5cd669226a7ddc67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_044aac93fd8d54bd5cd669226a7ddc67 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_044aac93fd8d54bd5cd669226a7ddc67)) {
        Py_XDECREF(cache_frame_044aac93fd8d54bd5cd669226a7ddc67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_044aac93fd8d54bd5cd669226a7ddc67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_044aac93fd8d54bd5cd669226a7ddc67 = MAKE_FUNCTION_FRAME(tstate, codeobj_044aac93fd8d54bd5cd669226a7ddc67, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_044aac93fd8d54bd5cd669226a7ddc67->m_type_description == NULL);
    frame_044aac93fd8d54bd5cd669226a7ddc67 = cache_frame_044aac93fd8d54bd5cd669226a7ddc67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_044aac93fd8d54bd5cd669226a7ddc67);
    assert(Py_REFCNT(frame_044aac93fd8d54bd5cd669226a7ddc67) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_1, mod_consts[3]);

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_size);
        tmp_expression_value_1 = var_size;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_size);
        tmp_expression_value_2 = var_size;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 34;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[8]);

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 34;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[10], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 35;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[11]);

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 35;
        tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[9]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[12], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[13];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[14], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[15];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[16], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[17];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[18], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = mod_consts[19];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[20], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_win);
        tmp_assattr_value_10 = par_win;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[21], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_assattr_target_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 41;
        tmp_assattr_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[23]);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[24], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_parent);
        tmp_assattr_value_12 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[25], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[26], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[27], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_15;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 45;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[29]);

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[30], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
            tstate,
            tmp_called_instance_4,
            mod_consts[31],
            &PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[33], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[34], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 50;
        tmp_called_instance_5 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[39]);

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 50;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[9]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame.f_lineno = 51;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_044aac93fd8d54bd5cd669226a7ddc67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_044aac93fd8d54bd5cd669226a7ddc67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_044aac93fd8d54bd5cd669226a7ddc67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_044aac93fd8d54bd5cd669226a7ddc67,
        type_description_1,
        par_self,
        par_win,
        par_parent,
        var_size
    );


    // Release cached frame if used for exception.
    if (frame_044aac93fd8d54bd5cd669226a7ddc67 == cache_frame_044aac93fd8d54bd5cd669226a7ddc67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_044aac93fd8d54bd5cd669226a7ddc67);
        cache_frame_044aac93fd8d54bd5cd669226a7ddc67 = NULL;
    }

    assertFrameObject(frame_044aac93fd8d54bd5cd669226a7ddc67);

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
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
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

    Py_XDECREF(var_size);
    var_size = NULL;
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
    CHECK_OBJECT(par_win);
    Py_DECREF(par_win);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_win);
    Py_DECREF(par_win);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__2_refreshReadout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_457875e24774c4ab227e9fbdaa5fda34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_457875e24774c4ab227e9fbdaa5fda34 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_457875e24774c4ab227e9fbdaa5fda34)) {
        Py_XDECREF(cache_frame_457875e24774c4ab227e9fbdaa5fda34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_457875e24774c4ab227e9fbdaa5fda34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_457875e24774c4ab227e9fbdaa5fda34 = MAKE_FUNCTION_FRAME(tstate, codeobj_457875e24774c4ab227e9fbdaa5fda34, module_direct$showbase$BufferViewer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_457875e24774c4ab227e9fbdaa5fda34->m_type_description == NULL);
    frame_457875e24774c4ab227e9fbdaa5fda34 = cache_frame_457875e24774c4ab227e9fbdaa5fda34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_457875e24774c4ab227e9fbdaa5fda34);
    assert(Py_REFCNT(frame_457875e24774c4ab227e9fbdaa5fda34) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_457875e24774c4ab227e9fbdaa5fda34->m_frame.f_lineno = 63;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_457875e24774c4ab227e9fbdaa5fda34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_457875e24774c4ab227e9fbdaa5fda34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_457875e24774c4ab227e9fbdaa5fda34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_457875e24774c4ab227e9fbdaa5fda34,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_457875e24774c4ab227e9fbdaa5fda34 == cache_frame_457875e24774c4ab227e9fbdaa5fda34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_457875e24774c4ab227e9fbdaa5fda34);
        cache_frame_457875e24774c4ab227e9fbdaa5fda34 = NULL;
    }

    assertFrameObject(frame_457875e24774c4ab227e9fbdaa5fda34);

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


static PyObject *impl_direct$showbase$BufferViewer$$$function__3_isValidTextureSet(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *var_elt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5e6dec336e7f7f5e4076741a7654c362;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5e6dec336e7f7f5e4076741a7654c362 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e6dec336e7f7f5e4076741a7654c362)) {
        Py_XDECREF(cache_frame_5e6dec336e7f7f5e4076741a7654c362);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e6dec336e7f7f5e4076741a7654c362 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e6dec336e7f7f5e4076741a7654c362 = MAKE_FUNCTION_FRAME(tstate, codeobj_5e6dec336e7f7f5e4076741a7654c362, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e6dec336e7f7f5e4076741a7654c362->m_type_description == NULL);
    frame_5e6dec336e7f7f5e4076741a7654c362 = cache_frame_5e6dec336e7f7f5e4076741a7654c362;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e6dec336e7f7f5e4076741a7654c362);
    assert(Py_REFCNT(frame_5e6dec336e7f7f5e4076741a7654c362) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5e6dec336e7f7f5e4076741a7654c362->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 68;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_x);
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 69;
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
            PyObject *old = var_elt;
            var_elt = tmp_assign_source_3;
            Py_INCREF(var_elt);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 70;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_elt);
        tmp_args_element_value_3 = var_elt;
        frame_5e6dec336e7f7f5e4076741a7654c362->m_frame.f_lineno = 70;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[47], tmp_args_element_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[0];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 69;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
    goto branch_end_1;
    branch_no_1:;
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_2 = par_x;
        tmp_cmp_expr_right_2 = mod_consts[13];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5e6dec336e7f7f5e4076741a7654c362->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_or_left_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_6 = par_x;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5e6dec336e7f7f5e4076741a7654c362->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_or_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e6dec336e7f7f5e4076741a7654c362, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e6dec336e7f7f5e4076741a7654c362->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e6dec336e7f7f5e4076741a7654c362, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e6dec336e7f7f5e4076741a7654c362,
        type_description_1,
        par_self,
        par_x,
        var_elt
    );


    // Release cached frame if used for exception.
    if (frame_5e6dec336e7f7f5e4076741a7654c362 == cache_frame_5e6dec336e7f7f5e4076741a7654c362) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e6dec336e7f7f5e4076741a7654c362);
        cache_frame_5e6dec336e7f7f5e4076741a7654c362 = NULL;
    }

    assertFrameObject(frame_5e6dec336e7f7f5e4076741a7654c362);

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
    Py_XDECREF(var_elt);
    var_elt = NULL;
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

    Py_XDECREF(var_elt);
    var_elt = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__4_isEnabled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_129a08c08295d07881e0fc9442fd61e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_129a08c08295d07881e0fc9442fd61e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_129a08c08295d07881e0fc9442fd61e5)) {
        Py_XDECREF(cache_frame_129a08c08295d07881e0fc9442fd61e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_129a08c08295d07881e0fc9442fd61e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_129a08c08295d07881e0fc9442fd61e5 = MAKE_FUNCTION_FRAME(tstate, codeobj_129a08c08295d07881e0fc9442fd61e5, module_direct$showbase$BufferViewer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_129a08c08295d07881e0fc9442fd61e5->m_type_description == NULL);
    frame_129a08c08295d07881e0fc9442fd61e5 = cache_frame_129a08c08295d07881e0fc9442fd61e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_129a08c08295d07881e0fc9442fd61e5);
    assert(Py_REFCNT(frame_129a08c08295d07881e0fc9442fd61e5) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_129a08c08295d07881e0fc9442fd61e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_129a08c08295d07881e0fc9442fd61e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_129a08c08295d07881e0fc9442fd61e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_129a08c08295d07881e0fc9442fd61e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_129a08c08295d07881e0fc9442fd61e5 == cache_frame_129a08c08295d07881e0fc9442fd61e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_129a08c08295d07881e0fc9442fd61e5);
        cache_frame_129a08c08295d07881e0fc9442fd61e5 = NULL;
    }

    assertFrameObject(frame_129a08c08295d07881e0fc9442fd61e5);

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


static PyObject *impl_direct$showbase$BufferViewer$$$function__5_enable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_83f331536cba7d96a7ea08b683bcf4c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_83f331536cba7d96a7ea08b683bcf4c3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83f331536cba7d96a7ea08b683bcf4c3)) {
        Py_XDECREF(cache_frame_83f331536cba7d96a7ea08b683bcf4c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83f331536cba7d96a7ea08b683bcf4c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83f331536cba7d96a7ea08b683bcf4c3 = MAKE_FUNCTION_FRAME(tstate, codeobj_83f331536cba7d96a7ea08b683bcf4c3, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83f331536cba7d96a7ea08b683bcf4c3->m_type_description == NULL);
    frame_83f331536cba7d96a7ea08b683bcf4c3 = cache_frame_83f331536cba7d96a7ea08b683bcf4c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_83f331536cba7d96a7ea08b683bcf4c3);
    assert(Py_REFCNT(frame_83f331536cba7d96a7ea08b683bcf4c3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_2 = par_x;
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83f331536cba7d96a7ea08b683bcf4c3->m_frame.f_lineno = 83;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_x);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_x);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[0];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[58]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[59];
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[60]);
        frame_83f331536cba7d96a7ea08b683bcf4c3->m_frame.f_lineno = 88;
        tmp_assattr_value_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83f331536cba7d96a7ea08b683bcf4c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83f331536cba7d96a7ea08b683bcf4c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83f331536cba7d96a7ea08b683bcf4c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83f331536cba7d96a7ea08b683bcf4c3,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_83f331536cba7d96a7ea08b683bcf4c3 == cache_frame_83f331536cba7d96a7ea08b683bcf4c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83f331536cba7d96a7ea08b683bcf4c3);
        cache_frame_83f331536cba7d96a7ea08b683bcf4c3 = NULL;
    }

    assertFrameObject(frame_83f331536cba7d96a7ea08b683bcf4c3);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__6_toggleEnable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9d0700ae72965a8fbf104d05668a7d8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d0700ae72965a8fbf104d05668a7d8b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d0700ae72965a8fbf104d05668a7d8b)) {
        Py_XDECREF(cache_frame_9d0700ae72965a8fbf104d05668a7d8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d0700ae72965a8fbf104d05668a7d8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d0700ae72965a8fbf104d05668a7d8b = MAKE_FUNCTION_FRAME(tstate, codeobj_9d0700ae72965a8fbf104d05668a7d8b, module_direct$showbase$BufferViewer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d0700ae72965a8fbf104d05668a7d8b->m_type_description == NULL);
    frame_9d0700ae72965a8fbf104d05668a7d8b = cache_frame_9d0700ae72965a8fbf104d05668a7d8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9d0700ae72965a8fbf104d05668a7d8b);
    assert(Py_REFCNT(frame_9d0700ae72965a8fbf104d05668a7d8b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9d0700ae72965a8fbf104d05668a7d8b->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_9d0700ae72965a8fbf104d05668a7d8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d0700ae72965a8fbf104d05668a7d8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d0700ae72965a8fbf104d05668a7d8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d0700ae72965a8fbf104d05668a7d8b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9d0700ae72965a8fbf104d05668a7d8b == cache_frame_9d0700ae72965a8fbf104d05668a7d8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d0700ae72965a8fbf104d05668a7d8b);
        cache_frame_9d0700ae72965a8fbf104d05668a7d8b = NULL;
    }

    assertFrameObject(frame_9d0700ae72965a8fbf104d05668a7d8b);

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


static PyObject *impl_direct$showbase$BufferViewer$$$function__7_setCardSize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_7762e9287c1fd0e6dd79cebd6de74698;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7762e9287c1fd0e6dd79cebd6de74698 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7762e9287c1fd0e6dd79cebd6de74698)) {
        Py_XDECREF(cache_frame_7762e9287c1fd0e6dd79cebd6de74698);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7762e9287c1fd0e6dd79cebd6de74698 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7762e9287c1fd0e6dd79cebd6de74698 = MAKE_FUNCTION_FRAME(tstate, codeobj_7762e9287c1fd0e6dd79cebd6de74698, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7762e9287c1fd0e6dd79cebd6de74698->m_type_description == NULL);
    frame_7762e9287c1fd0e6dd79cebd6de74698 = cache_frame_7762e9287c1fd0e6dd79cebd6de74698;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7762e9287c1fd0e6dd79cebd6de74698);
    assert(Py_REFCNT(frame_7762e9287c1fd0e6dd79cebd6de74698) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_2 = par_y;
        tmp_cmp_expr_right_2 = mod_consts[0];
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7762e9287c1fd0e6dd79cebd6de74698->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_y);
        tmp_assattr_value_2 = par_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[34], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_7762e9287c1fd0e6dd79cebd6de74698, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7762e9287c1fd0e6dd79cebd6de74698->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7762e9287c1fd0e6dd79cebd6de74698, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7762e9287c1fd0e6dd79cebd6de74698,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_7762e9287c1fd0e6dd79cebd6de74698 == cache_frame_7762e9287c1fd0e6dd79cebd6de74698) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7762e9287c1fd0e6dd79cebd6de74698);
        cache_frame_7762e9287c1fd0e6dd79cebd6de74698 = NULL;
    }

    assertFrameObject(frame_7762e9287c1fd0e6dd79cebd6de74698);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__8_setPosition(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pos = python_pars[1];
    PyObject *var_valid = NULL;
    struct Nuitka_FrameObject *frame_70c07bff6da013109229133f15f811be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_70c07bff6da013109229133f15f811be = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST5(mod_consts[65]);
        assert(var_valid == NULL);
        var_valid = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_70c07bff6da013109229133f15f811be)) {
        Py_XDECREF(cache_frame_70c07bff6da013109229133f15f811be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70c07bff6da013109229133f15f811be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70c07bff6da013109229133f15f811be = MAKE_FUNCTION_FRAME(tstate, codeobj_70c07bff6da013109229133f15f811be, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70c07bff6da013109229133f15f811be->m_type_description == NULL);
    frame_70c07bff6da013109229133f15f811be = cache_frame_70c07bff6da013109229133f15f811be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_70c07bff6da013109229133f15f811be);
    assert(Py_REFCNT(frame_70c07bff6da013109229133f15f811be) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_valid);
        tmp_list_arg_value_1 = var_valid;
        CHECK_OBJECT(par_pos);
        tmp_value_value_1 = par_pos;
        tmp_cmp_expr_left_1 = LIST_COUNT(tmp_list_arg_value_1, tmp_value_value_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_70c07bff6da013109229133f15f811be->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[53]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_70c07bff6da013109229133f15f811be->m_frame.f_lineno = 125;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_pos);
        tmp_cmp_expr_left_2 = par_pos;
        tmp_cmp_expr_right_2 = mod_consts[68];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[53]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_70c07bff6da013109229133f15f811be->m_frame.f_lineno = 128;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_pos);
        tmp_assattr_value_1 = par_pos;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_70c07bff6da013109229133f15f811be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70c07bff6da013109229133f15f811be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70c07bff6da013109229133f15f811be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70c07bff6da013109229133f15f811be,
        type_description_1,
        par_self,
        par_pos,
        var_valid
    );


    // Release cached frame if used for exception.
    if (frame_70c07bff6da013109229133f15f811be == cache_frame_70c07bff6da013109229133f15f811be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70c07bff6da013109229133f15f811be);
        cache_frame_70c07bff6da013109229133f15f811be = NULL;
    }

    assertFrameObject(frame_70c07bff6da013109229133f15f811be);

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
    CHECK_OBJECT(var_valid);
    Py_DECREF(var_valid);
    var_valid = NULL;
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

    CHECK_OBJECT(var_valid);
    Py_DECREF(var_valid);
    var_valid = NULL;
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
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__9_setLayout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lay = python_pars[1];
    PyObject *var_valid = NULL;
    struct Nuitka_FrameObject *frame_e2b8cc08a3333c0b02f92f8b4b31cd7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST5(mod_consts[71]);
        assert(var_valid == NULL);
        var_valid = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a)) {
        Py_XDECREF(cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a = MAKE_FUNCTION_FRAME(tstate, codeobj_e2b8cc08a3333c0b02f92f8b4b31cd7a, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a->m_type_description == NULL);
    frame_e2b8cc08a3333c0b02f92f8b4b31cd7a = cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e2b8cc08a3333c0b02f92f8b4b31cd7a);
    assert(Py_REFCNT(frame_e2b8cc08a3333c0b02f92f8b4b31cd7a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_valid);
        tmp_list_arg_value_1 = var_valid;
        CHECK_OBJECT(par_lay);
        tmp_value_value_1 = par_lay;
        tmp_cmp_expr_left_1 = LIST_COUNT(tmp_list_arg_value_1, tmp_value_value_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e2b8cc08a3333c0b02f92f8b4b31cd7a->m_frame.f_lineno = 145;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[53]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e2b8cc08a3333c0b02f92f8b4b31cd7a->m_frame.f_lineno = 146;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_lay);
        tmp_assattr_value_1 = par_lay;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_e2b8cc08a3333c0b02f92f8b4b31cd7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2b8cc08a3333c0b02f92f8b4b31cd7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2b8cc08a3333c0b02f92f8b4b31cd7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2b8cc08a3333c0b02f92f8b4b31cd7a,
        type_description_1,
        par_self,
        par_lay,
        var_valid
    );


    // Release cached frame if used for exception.
    if (frame_e2b8cc08a3333c0b02f92f8b4b31cd7a == cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a);
        cache_frame_e2b8cc08a3333c0b02f92f8b4b31cd7a = NULL;
    }

    assertFrameObject(frame_e2b8cc08a3333c0b02f92f8b4b31cd7a);

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
    CHECK_OBJECT(var_valid);
    Py_DECREF(var_valid);
    var_valid = NULL;
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

    CHECK_OBJECT(var_valid);
    Py_DECREF(var_valid);
    var_valid = NULL;
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
    CHECK_OBJECT(par_lay);
    Py_DECREF(par_lay);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lay);
    Py_DECREF(par_lay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__10_selectCard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_i = python_pars[1];
    struct Nuitka_FrameObject *frame_07cddd3113c02fe013104d779c960cc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07cddd3113c02fe013104d779c960cc1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07cddd3113c02fe013104d779c960cc1)) {
        Py_XDECREF(cache_frame_07cddd3113c02fe013104d779c960cc1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07cddd3113c02fe013104d779c960cc1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07cddd3113c02fe013104d779c960cc1 = MAKE_FUNCTION_FRAME(tstate, codeobj_07cddd3113c02fe013104d779c960cc1, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07cddd3113c02fe013104d779c960cc1->m_type_description == NULL);
    frame_07cddd3113c02fe013104d779c960cc1 = cache_frame_07cddd3113c02fe013104d779c960cc1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07cddd3113c02fe013104d779c960cc1);
    assert(Py_REFCNT(frame_07cddd3113c02fe013104d779c960cc1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_i);
        tmp_assattr_value_1 = par_i;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07cddd3113c02fe013104d779c960cc1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07cddd3113c02fe013104d779c960cc1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07cddd3113c02fe013104d779c960cc1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07cddd3113c02fe013104d779c960cc1,
        type_description_1,
        par_self,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_07cddd3113c02fe013104d779c960cc1 == cache_frame_07cddd3113c02fe013104d779c960cc1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07cddd3113c02fe013104d779c960cc1);
        cache_frame_07cddd3113c02fe013104d779c960cc1 = NULL;
    }

    assertFrameObject(frame_07cddd3113c02fe013104d779c960cc1);

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
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__11_advanceCard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_7970a1c5afabcf3405c9a7fcb6367311;
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
    static struct Nuitka_FrameObject *cache_frame_7970a1c5afabcf3405c9a7fcb6367311 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7970a1c5afabcf3405c9a7fcb6367311)) {
        Py_XDECREF(cache_frame_7970a1c5afabcf3405c9a7fcb6367311);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7970a1c5afabcf3405c9a7fcb6367311 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7970a1c5afabcf3405c9a7fcb6367311 = MAKE_FUNCTION_FRAME(tstate, codeobj_7970a1c5afabcf3405c9a7fcb6367311, module_direct$showbase$BufferViewer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7970a1c5afabcf3405c9a7fcb6367311->m_type_description == NULL);
    frame_7970a1c5afabcf3405c9a7fcb6367311 = cache_frame_7970a1c5afabcf3405c9a7fcb6367311;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7970a1c5afabcf3405c9a7fcb6367311);
    assert(Py_REFCNT(frame_7970a1c5afabcf3405c9a7fcb6367311) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[27]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[5];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7970a1c5afabcf3405c9a7fcb6367311, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7970a1c5afabcf3405c9a7fcb6367311->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7970a1c5afabcf3405c9a7fcb6367311, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7970a1c5afabcf3405c9a7fcb6367311,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7970a1c5afabcf3405c9a7fcb6367311 == cache_frame_7970a1c5afabcf3405c9a7fcb6367311) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7970a1c5afabcf3405c9a7fcb6367311);
        cache_frame_7970a1c5afabcf3405c9a7fcb6367311 = NULL;
    }

    assertFrameObject(frame_7970a1c5afabcf3405c9a7fcb6367311);

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


static PyObject *impl_direct$showbase$BufferViewer$$$function__12_setInclude(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_31446994496a8bd2f12f79378924013a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_31446994496a8bd2f12f79378924013a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31446994496a8bd2f12f79378924013a)) {
        Py_XDECREF(cache_frame_31446994496a8bd2f12f79378924013a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31446994496a8bd2f12f79378924013a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31446994496a8bd2f12f79378924013a = MAKE_FUNCTION_FRAME(tstate, codeobj_31446994496a8bd2f12f79378924013a, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31446994496a8bd2f12f79378924013a->m_type_description == NULL);
    frame_31446994496a8bd2f12f79378924013a = cache_frame_31446994496a8bd2f12f79378924013a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_31446994496a8bd2f12f79378924013a);
    assert(Py_REFCNT(frame_31446994496a8bd2f12f79378924013a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_31446994496a8bd2f12f79378924013a->m_frame.f_lineno = 171;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[47], tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_31446994496a8bd2f12f79378924013a->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_31446994496a8bd2f12f79378924013a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31446994496a8bd2f12f79378924013a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31446994496a8bd2f12f79378924013a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31446994496a8bd2f12f79378924013a,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_31446994496a8bd2f12f79378924013a == cache_frame_31446994496a8bd2f12f79378924013a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31446994496a8bd2f12f79378924013a);
        cache_frame_31446994496a8bd2f12f79378924013a = NULL;
    }

    assertFrameObject(frame_31446994496a8bd2f12f79378924013a);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__13_setExclude(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_e8016caf446410418489734537cce245;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e8016caf446410418489734537cce245 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8016caf446410418489734537cce245)) {
        Py_XDECREF(cache_frame_e8016caf446410418489734537cce245);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8016caf446410418489734537cce245 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8016caf446410418489734537cce245 = MAKE_FUNCTION_FRAME(tstate, codeobj_e8016caf446410418489734537cce245, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8016caf446410418489734537cce245->m_type_description == NULL);
    frame_e8016caf446410418489734537cce245 = cache_frame_e8016caf446410418489734537cce245;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e8016caf446410418489734537cce245);
    assert(Py_REFCNT(frame_e8016caf446410418489734537cce245) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_e8016caf446410418489734537cce245->m_frame.f_lineno = 183;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[47], tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e8016caf446410418489734537cce245->m_frame.f_lineno = 184;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_e8016caf446410418489734537cce245, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8016caf446410418489734537cce245->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8016caf446410418489734537cce245, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8016caf446410418489734537cce245,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_e8016caf446410418489734537cce245 == cache_frame_e8016caf446410418489734537cce245) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8016caf446410418489734537cce245);
        cache_frame_e8016caf446410418489734537cce245 = NULL;
    }

    assertFrameObject(frame_e8016caf446410418489734537cce245);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__14_setSort(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bin = python_pars[1];
    PyObject *par_sort = python_pars[2];
    struct Nuitka_FrameObject *frame_41934a736153ef371be66015880b4a22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41934a736153ef371be66015880b4a22 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41934a736153ef371be66015880b4a22)) {
        Py_XDECREF(cache_frame_41934a736153ef371be66015880b4a22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41934a736153ef371be66015880b4a22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41934a736153ef371be66015880b4a22 = MAKE_FUNCTION_FRAME(tstate, codeobj_41934a736153ef371be66015880b4a22, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41934a736153ef371be66015880b4a22->m_type_description == NULL);
    frame_41934a736153ef371be66015880b4a22 = cache_frame_41934a736153ef371be66015880b4a22;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41934a736153ef371be66015880b4a22);
    assert(Py_REFCNT(frame_41934a736153ef371be66015880b4a22) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bin);
        tmp_assattr_value_1 = par_bin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_sort);
        tmp_assattr_value_2 = par_sort;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[34], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41934a736153ef371be66015880b4a22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41934a736153ef371be66015880b4a22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41934a736153ef371be66015880b4a22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41934a736153ef371be66015880b4a22,
        type_description_1,
        par_self,
        par_bin,
        par_sort
    );


    // Release cached frame if used for exception.
    if (frame_41934a736153ef371be66015880b4a22 == cache_frame_41934a736153ef371be66015880b4a22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41934a736153ef371be66015880b4a22);
        cache_frame_41934a736153ef371be66015880b4a22 = NULL;
    }

    assertFrameObject(frame_41934a736153ef371be66015880b4a22);

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
    CHECK_OBJECT(par_bin);
    Py_DECREF(par_bin);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bin);
    Py_DECREF(par_bin);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__15_setRenderParent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_renderParent = python_pars[1];
    struct Nuitka_FrameObject *frame_139ba77e0d05e5409778bb915a8049e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_139ba77e0d05e5409778bb915a8049e8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_139ba77e0d05e5409778bb915a8049e8)) {
        Py_XDECREF(cache_frame_139ba77e0d05e5409778bb915a8049e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_139ba77e0d05e5409778bb915a8049e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_139ba77e0d05e5409778bb915a8049e8 = MAKE_FUNCTION_FRAME(tstate, codeobj_139ba77e0d05e5409778bb915a8049e8, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_139ba77e0d05e5409778bb915a8049e8->m_type_description == NULL);
    frame_139ba77e0d05e5409778bb915a8049e8 = cache_frame_139ba77e0d05e5409778bb915a8049e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_139ba77e0d05e5409778bb915a8049e8);
    assert(Py_REFCNT(frame_139ba77e0d05e5409778bb915a8049e8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_renderParent);
        tmp_assattr_value_1 = par_renderParent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_139ba77e0d05e5409778bb915a8049e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_139ba77e0d05e5409778bb915a8049e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_139ba77e0d05e5409778bb915a8049e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_139ba77e0d05e5409778bb915a8049e8,
        type_description_1,
        par_self,
        par_renderParent
    );


    // Release cached frame if used for exception.
    if (frame_139ba77e0d05e5409778bb915a8049e8 == cache_frame_139ba77e0d05e5409778bb915a8049e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_139ba77e0d05e5409778bb915a8049e8);
        cache_frame_139ba77e0d05e5409778bb915a8049e8 = NULL;
    }

    assertFrameObject(frame_139ba77e0d05e5409778bb915a8049e8);

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
    CHECK_OBJECT(par_renderParent);
    Py_DECREF(par_renderParent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_renderParent);
    Py_DECREF(par_renderParent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_set = python_pars[2];
    PyObject *var_elt = NULL;
    PyObject *var_itex = NULL;
    PyObject *var_tex = NULL;
    PyObject *var_iwin = NULL;
    PyObject *var_win = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e49dec1d230739461ec7f6651db47db9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e49dec1d230739461ec7f6651db47db9 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e49dec1d230739461ec7f6651db47db9)) {
        Py_XDECREF(cache_frame_e49dec1d230739461ec7f6651db47db9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e49dec1d230739461ec7f6651db47db9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e49dec1d230739461ec7f6651db47db9 = MAKE_FUNCTION_FRAME(tstate, codeobj_e49dec1d230739461ec7f6651db47db9, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e49dec1d230739461ec7f6651db47db9->m_type_description == NULL);
    frame_e49dec1d230739461ec7f6651db47db9 = cache_frame_e49dec1d230739461ec7f6651db47db9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e49dec1d230739461ec7f6651db47db9);
    assert(Py_REFCNT(frame_e49dec1d230739461ec7f6651db47db9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 206;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_x);
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 207;
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
            PyObject *old = var_elt;
            var_elt = tmp_assign_source_3;
            Py_INCREF(var_elt);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_elt);
        tmp_args_element_value_3 = var_elt;
        if (par_set == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_set;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 207;
        type_description_1 = "oooooooo";
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
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_5 = par_x;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[5];
        CHECK_OBJECT(par_set);
        tmp_ass_subscribed_1 = par_set;
        CHECK_OBJECT(par_x);
        tmp_ass_subscript_1 = par_x;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_7 = par_x;
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 212;
        tmp_args_element_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[86]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 212;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 212;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_itex;
            var_itex = tmp_assign_source_6;
            Py_INCREF(var_itex);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = par_x;
        CHECK_OBJECT(var_itex);
        tmp_args_element_value_10 = var_itex;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 213;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[88], tmp_args_element_value_10);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_tex;
            var_tex = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[5];
        if (par_set == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_2 = par_set;
        CHECK_OBJECT(var_tex);
        tmp_ass_subscript_2 = var_tex;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 212;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        int tmp_truth_name_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_11 = par_x;
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_called_instance_3 = par_x;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 216;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[89]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 216;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 216;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_10 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_iwin;
            var_iwin = tmp_assign_source_10;
            Py_INCREF(var_iwin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_14;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_4 = par_x;
        CHECK_OBJECT(var_iwin);
        tmp_args_element_value_14 = var_iwin;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 217;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[90], tmp_args_element_value_14);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_win;
            var_win = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[83]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_win);
        tmp_args_element_value_15 = var_win;
        if (par_set == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_16 = par_set;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 216;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[83]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[24]);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_set);
        tmp_args_element_value_18 = par_set;
        frame_e49dec1d230739461ec7f6651db47db9->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e49dec1d230739461ec7f6651db47db9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e49dec1d230739461ec7f6651db47db9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e49dec1d230739461ec7f6651db47db9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e49dec1d230739461ec7f6651db47db9,
        type_description_1,
        par_self,
        par_x,
        par_set,
        var_elt,
        var_itex,
        var_tex,
        var_iwin,
        var_win
    );


    // Release cached frame if used for exception.
    if (frame_e49dec1d230739461ec7f6651db47db9 == cache_frame_e49dec1d230739461ec7f6651db47db9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e49dec1d230739461ec7f6651db47db9);
        cache_frame_e49dec1d230739461ec7f6651db47db9 = NULL;
    }

    assertFrameObject(frame_e49dec1d230739461ec7f6651db47db9);

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
    Py_XDECREF(var_elt);
    var_elt = NULL;
    Py_XDECREF(var_itex);
    var_itex = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
    Py_XDECREF(var_iwin);
    var_iwin = NULL;
    Py_XDECREF(var_win);
    var_win = NULL;
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

    Py_XDECREF(var_elt);
    var_elt = NULL;
    Py_XDECREF(var_itex);
    var_itex = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
    Py_XDECREF(var_iwin);
    var_iwin = NULL;
    Py_XDECREF(var_win);
    var_win = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_set);
    Py_DECREF(par_set);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_set);
    Py_DECREF(par_set);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__17_makeFrame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sizex = python_pars[1];
    PyObject *par_sizey = python_pars[2];
    PyObject *var_format = NULL;
    PyObject *var_vdata = NULL;
    PyObject *var_vwriter = NULL;
    PyObject *var_cwriter = NULL;
    PyObject *var_ringoffset = NULL;
    PyObject *var_ringbright = NULL;
    PyObject *var_ring = NULL;
    PyObject *var_offsetx = NULL;
    PyObject *var_offsety = NULL;
    PyObject *var_bright = NULL;
    PyObject *var_triangles = NULL;
    PyObject *var_i = NULL;
    PyObject *var_delta = NULL;
    PyObject *var_geom = NULL;
    PyObject *var_geomnode = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2b55d26834996723cd8191f5db0a0060;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b55d26834996723cd8191f5db0a0060 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2b55d26834996723cd8191f5db0a0060)) {
        Py_XDECREF(cache_frame_2b55d26834996723cd8191f5db0a0060);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b55d26834996723cd8191f5db0a0060 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b55d26834996723cd8191f5db0a0060 = MAKE_FUNCTION_FRAME(tstate, codeobj_2b55d26834996723cd8191f5db0a0060, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b55d26834996723cd8191f5db0a0060->m_type_description == NULL);
    frame_2b55d26834996723cd8191f5db0a0060 = cache_frame_2b55d26834996723cd8191f5db0a0060;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2b55d26834996723cd8191f5db0a0060);
    assert(Py_REFCNT(frame_2b55d26834996723cd8191f5db0a0060) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 231;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[93]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_format == NULL);
        var_format = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[95];
        CHECK_OBJECT(var_format);
        tmp_args_element_value_2 = var_format;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[97]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vdata == NULL);
        var_vdata = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vdata);
        tmp_args_element_value_4 = var_vdata;
        tmp_args_element_value_5 = mod_consts[99];
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vwriter == NULL);
        var_vwriter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vdata);
        tmp_args_element_value_6 = var_vdata;
        tmp_args_element_value_7 = mod_consts[100];
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cwriter == NULL);
        var_cwriter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST4(mod_consts[101]);
        assert(var_ringoffset == NULL);
        var_ringoffset = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST4(mod_consts[102]);
        assert(var_ringbright == NULL);
        var_ringbright = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 239;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[103]);

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 239;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ring;
            var_ring = tmp_assign_source_9;
            Py_INCREF(var_ring);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_ringoffset);
        tmp_expression_value_2 = var_ringoffset;
        CHECK_OBJECT(var_ring);
        tmp_subscript_value_1 = var_ring;
        tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = mod_consts[104];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_sizex == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_sizex;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 240;
        tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_offsetx;
            var_offsetx = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_ringoffset);
        tmp_expression_value_3 = var_ringoffset;
        CHECK_OBJECT(var_ring);
        tmp_subscript_value_2 = var_ring;
        tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_2 = mod_consts[104];
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_sizey == NULL) {
            Py_DECREF(tmp_truediv_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = par_sizey;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 241;
        tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_offsety;
            var_offsety = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_ringbright);
        tmp_expression_value_4 = var_ringbright;
        CHECK_OBJECT(var_ring);
        tmp_subscript_value_3 = var_ring;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bright;
            var_bright = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        if (var_vwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_vwriter;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[107]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[109]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_1 = mod_consts[110];
        CHECK_OBJECT(var_offsetx);
        tmp_sub_expr_right_1 = var_offsetx;
        tmp_args_element_value_11 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_12 = mod_consts[0];
        tmp_sub_expr_left_2 = mod_consts[110];
        CHECK_OBJECT(var_offsety);
        tmp_sub_expr_right_2 = var_offsety;
        tmp_args_element_value_13 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 243;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        if (var_vwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_vwriter;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[107]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[109]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(var_offsetx);
        tmp_add_expr_right_1 = var_offsetx;
        tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_16 = mod_consts[0];
        tmp_sub_expr_left_3 = mod_consts[110];
        CHECK_OBJECT(var_offsety);
        tmp_sub_expr_right_3 = var_offsety;
        tmp_args_element_value_17 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 244;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_vwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = var_vwriter;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[107]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[109]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_2 = mod_consts[5];
        CHECK_OBJECT(var_offsetx);
        tmp_add_expr_right_2 = var_offsetx;
        tmp_args_element_value_19 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_20 = mod_consts[0];
        tmp_add_expr_left_3 = mod_consts[5];
        CHECK_OBJECT(var_offsety);
        tmp_add_expr_right_3 = var_offsety;
        tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_args_element_value_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 245;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (var_vwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = var_vwriter;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[107]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[109]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_4 = mod_consts[110];
        CHECK_OBJECT(var_offsetx);
        tmp_sub_expr_right_4 = var_offsetx;
        tmp_args_element_value_23 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_24 = mod_consts[0];
        tmp_add_expr_left_4 = mod_consts[5];
        CHECK_OBJECT(var_offsety);
        tmp_add_expr_right_4 = var_offsety;
        tmp_args_element_value_25 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 246;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        if (var_cwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_cwriter;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_26 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_27 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_28 = var_bright;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[107],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        if (var_cwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_cwriter;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_29 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_30 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_31 = var_bright;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_3,
                mod_consts[107],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        if (var_cwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = var_cwriter;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_32 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_33 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_34 = var_bright;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_4,
                mod_consts[107],
                call_args
            );
        }

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        if (var_cwriter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = var_cwriter;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_35 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_36 = var_bright;
        CHECK_OBJECT(var_bright);
        tmp_args_element_value_37 = var_bright;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_5,
                mod_consts[107],
                call_args
            );
        }

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 239;
        type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_13;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[113]);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 252;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_triangles == NULL);
        var_triangles = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 253;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[114]);

        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 253;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_16 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_16;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_i);
        tmp_mult_expr_left_3 = var_i;
        tmp_mult_expr_right_3 = mod_consts[115];
        tmp_assign_source_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_delta;
            var_delta = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_14 = var_triangles;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[117]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_5 = mod_consts[0];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_5 = var_delta;
        tmp_args_element_value_39 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_6 = mod_consts[118];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_6 = var_delta;
        tmp_args_element_value_40 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_7 = mod_consts[5];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_7 = var_delta;
        tmp_args_element_value_41 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_15 = var_triangles;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[117]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_8 = mod_consts[5];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_8 = var_delta;
        tmp_args_element_value_42 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_9 = mod_consts[118];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_9 = var_delta;
        tmp_args_element_value_43 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_10 = mod_consts[119];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_10 = var_delta;
        tmp_args_element_value_44 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_16 = var_triangles;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[117]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_11 = mod_consts[5];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_11 = var_delta;
        tmp_args_element_value_45 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_12 = mod_consts[119];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_12 = var_delta;
        tmp_args_element_value_46 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_13 = mod_consts[120];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_13 = var_delta;
        tmp_args_element_value_47 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_17 = var_triangles;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[117]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_14 = mod_consts[120];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_14 = var_delta;
        tmp_args_element_value_48 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_15 = mod_consts[119];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_15 = var_delta;
        tmp_args_element_value_49 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_16 = mod_consts[121];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_16 = var_delta;
        tmp_args_element_value_50 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_18 = var_triangles;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[117]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_17 = mod_consts[120];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_17 = var_delta;
        tmp_args_element_value_51 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_18 = mod_consts[121];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_18 = var_delta;
        tmp_args_element_value_52 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_19 = mod_consts[122];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_19 = var_delta;
        tmp_args_element_value_53 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_19 = var_triangles;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[117]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_20 = mod_consts[122];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_20 = var_delta;
        tmp_args_element_value_54 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_21 = mod_consts[121];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_21 = var_delta;
        tmp_args_element_value_55 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_54);

            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_22 = mod_consts[123];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_22 = var_delta;
        tmp_args_element_value_56 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_20 = var_triangles;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[117]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_23 = mod_consts[122];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_23 = var_delta;
        tmp_args_element_value_57 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_23, tmp_add_expr_right_23);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_24 = mod_consts[123];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_24 = var_delta;
        tmp_args_element_value_58 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_57);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_25 = mod_consts[0];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_25 = var_delta;
        tmp_args_element_value_59 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = var_triangles;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[117]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_26 = mod_consts[0];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_26 = var_delta;
        tmp_args_element_value_60 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_27 = mod_consts[123];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_27 = var_delta;
        tmp_args_element_value_61 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_60);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_28 = mod_consts[118];
        CHECK_OBJECT(var_delta);
        tmp_add_expr_right_28 = var_delta;
        tmp_args_element_value_62 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_60);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_16);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 253;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_17;
        if (var_triangles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_triangles;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 263;
        tmp_call_result_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[124]);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vdata);
        tmp_args_element_value_63 = var_vdata;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 265;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_63);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geom == NULL);
        var_geom = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_64;
        CHECK_OBJECT(var_geom);
        tmp_expression_value_22 = var_geom;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[125]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_triangles == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_64 = var_triangles;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 266;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 267;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[127]);

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geomnode == NULL);
        var_geomnode = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_65;
        CHECK_OBJECT(var_geomnode);
        tmp_called_instance_7 = var_geomnode;
        CHECK_OBJECT(var_geom);
        tmp_args_element_value_65 = var_geom;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 268;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[128], tmp_args_element_value_65);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_geomnode);
        tmp_args_element_value_66 = var_geomnode;
        frame_2b55d26834996723cd8191f5db0a0060->m_frame.f_lineno = 269;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_66);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2b55d26834996723cd8191f5db0a0060, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b55d26834996723cd8191f5db0a0060->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b55d26834996723cd8191f5db0a0060, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b55d26834996723cd8191f5db0a0060,
        type_description_1,
        par_self,
        par_sizex,
        par_sizey,
        var_format,
        var_vdata,
        var_vwriter,
        var_cwriter,
        var_ringoffset,
        var_ringbright,
        var_ring,
        var_offsetx,
        var_offsety,
        var_bright,
        var_triangles,
        var_i,
        var_delta,
        var_geom,
        var_geomnode
    );


    // Release cached frame if used for exception.
    if (frame_2b55d26834996723cd8191f5db0a0060 == cache_frame_2b55d26834996723cd8191f5db0a0060) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b55d26834996723cd8191f5db0a0060);
        cache_frame_2b55d26834996723cd8191f5db0a0060 = NULL;
    }

    assertFrameObject(frame_2b55d26834996723cd8191f5db0a0060);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_format);
    Py_DECREF(var_format);
    var_format = NULL;
    CHECK_OBJECT(var_vdata);
    Py_DECREF(var_vdata);
    var_vdata = NULL;
    Py_XDECREF(var_vwriter);
    var_vwriter = NULL;
    Py_XDECREF(var_cwriter);
    var_cwriter = NULL;
    CHECK_OBJECT(var_ringoffset);
    Py_DECREF(var_ringoffset);
    var_ringoffset = NULL;
    CHECK_OBJECT(var_ringbright);
    Py_DECREF(var_ringbright);
    var_ringbright = NULL;
    Py_XDECREF(var_ring);
    var_ring = NULL;
    Py_XDECREF(var_offsetx);
    var_offsetx = NULL;
    Py_XDECREF(var_offsety);
    var_offsety = NULL;
    Py_XDECREF(var_bright);
    var_bright = NULL;
    Py_XDECREF(var_triangles);
    var_triangles = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
    CHECK_OBJECT(var_geom);
    Py_DECREF(var_geom);
    var_geom = NULL;
    CHECK_OBJECT(var_geomnode);
    Py_DECREF(var_geomnode);
    var_geomnode = NULL;
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

    Py_XDECREF(var_format);
    var_format = NULL;
    Py_XDECREF(var_vdata);
    var_vdata = NULL;
    Py_XDECREF(var_vwriter);
    var_vwriter = NULL;
    Py_XDECREF(var_cwriter);
    var_cwriter = NULL;
    Py_XDECREF(var_ringoffset);
    var_ringoffset = NULL;
    Py_XDECREF(var_ringbright);
    var_ringbright = NULL;
    Py_XDECREF(var_ring);
    var_ring = NULL;
    Py_XDECREF(var_offsetx);
    var_offsetx = NULL;
    Py_XDECREF(var_offsety);
    var_offsety = NULL;
    Py_XDECREF(var_bright);
    var_bright = NULL;
    Py_XDECREF(var_triangles);
    var_triangles = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
    Py_XDECREF(var_geom);
    var_geom = NULL;
    Py_XDECREF(var_geomnode);
    var_geomnode = NULL;
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
    CHECK_OBJECT(par_sizex);
    Py_DECREF(par_sizex);
    CHECK_OBJECT(par_sizey);
    Py_DECREF(par_sizey);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sizex);
    Py_DECREF(par_sizex);
    CHECK_OBJECT(par_sizey);
    Py_DECREF(par_sizey);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$showbase$BufferViewer$$$function__18_maintainReadout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_task = python_pars[1];
    PyObject *var_card = NULL;
    PyObject *var_exclude = NULL;
    PyObject *var_include = NULL;
    PyObject *var_sampler = NULL;
    PyObject *var_cards = NULL;
    PyObject *var_wins = NULL;
    PyObject *var_iwin = NULL;
    PyObject *var_win = NULL;
    PyObject *var_itex = NULL;
    PyObject *var_tex = NULL;
    PyObject *var_face = NULL;
    PyObject *var_layer = NULL;
    PyObject *var_ncards = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_cols = NULL;
    PyObject *var_aspectx = NULL;
    PyObject *var_aspecty = NULL;
    PyObject *var_bordersize = NULL;
    PyObject *var_sizey = NULL;
    PyObject *var_sizex = NULL;
    PyObject *var_v_sizey = NULL;
    PyObject *var_v_sizex = NULL;
    PyObject *var_h_sizex = NULL;
    PyObject *var_h_sizey = NULL;
    PyObject *var_fsizex = NULL;
    PyObject *var_fsizey = NULL;
    PyObject *var_fpixelx = NULL;
    PyObject *var_fpixely = NULL;
    PyObject *var_dirx = NULL;
    PyObject *var_diry = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_r = NULL;
    PyObject *var_c = NULL;
    PyObject *var_index = NULL;
    PyObject *var_posx = NULL;
    PyObject *var_posy = NULL;
    PyObject *var_placer = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a2854fa12ae6d3f72cbaad7493c71741;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_a2854fa12ae6d3f72cbaad7493c71741 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a2854fa12ae6d3f72cbaad7493c71741)) {
        Py_XDECREF(cache_frame_a2854fa12ae6d3f72cbaad7493c71741);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2854fa12ae6d3f72cbaad7493c71741 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2854fa12ae6d3f72cbaad7493c71741 = MAKE_FUNCTION_FRAME(tstate, codeobj_a2854fa12ae6d3f72cbaad7493c71741, module_direct$showbase$BufferViewer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2854fa12ae6d3f72cbaad7493c71741->m_type_description == NULL);
    frame_a2854fa12ae6d3f72cbaad7493c71741 = cache_frame_a2854fa12ae6d3f72cbaad7493c71741;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a2854fa12ae6d3f72cbaad7493c71741);
    assert(Py_REFCNT(frame_a2854fa12ae6d3f72cbaad7493c71741) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
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
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[132]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[26]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 283;
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
            PyObject *old = var_card;
            var_card = tmp_assign_source_3;
            Py_INCREF(var_card);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_card);
        tmp_called_instance_1 = var_card;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 284;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[133]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 283;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[26], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[0];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
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
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[134]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(var_exclude == NULL);
        var_exclude = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(var_include == NULL);
        var_include = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[16]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_exclude);
        tmp_args_element_value_2 = var_exclude;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[83]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[14]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_include);
        tmp_args_element_value_4 = var_include;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 300;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sampler == NULL);
        var_sampler = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_sampler);
        tmp_expression_value_10 = var_sampler;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[136]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[137]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 301;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_sampler);
        tmp_expression_value_12 = var_sampler;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[138]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[137]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 302;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_sampler);
        tmp_expression_value_14 = var_sampler;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[139]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[137]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 303;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_sampler);
        tmp_expression_value_16 = var_sampler;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[140]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[141]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 304;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_sampler);
        tmp_expression_value_18 = var_sampler;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[142]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[143]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 305;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        assert(var_cards == NULL);
        var_cards = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
        assert(var_wins == NULL);
        var_wins = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_20;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[24]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 310;
        tmp_args_element_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[89]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 310;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 310;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_iwin;
            var_iwin = tmp_assign_source_11;
            Py_INCREF(var_iwin);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[24]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_iwin);
        tmp_args_element_value_11 = var_iwin;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 311;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[90], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_win;
            var_win = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_win);
        tmp_called_instance_4 = var_win;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 312;
        tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[86]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 312;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 312;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_15 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_itex;
            var_itex = tmp_assign_source_15;
            Py_INCREF(var_itex);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_13;
        if (var_win == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_5 = var_win;
        CHECK_OBJECT(var_itex);
        tmp_args_element_value_13 = var_itex;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 313;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[88], tmp_args_element_value_13);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_tex;
            var_tex = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_tex);
        tmp_key_value_1 = var_tex;
        CHECK_OBJECT(var_include);
        tmp_dict_arg_value_1 = var_include;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_tex);
        tmp_cmp_expr_left_3 = var_tex;
        if (var_exclude == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_cmp_expr_right_3 = var_exclude;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_tex);
        tmp_called_instance_6 = var_tex;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 315;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[144]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[145]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 316;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[146]);

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 316;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_19 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_face;
            var_face = tmp_assign_source_19;
            Py_INCREF(var_face);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_23 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[30]);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_face);
        tmp_args_element_value_14 = var_face;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 317;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[147], tmp_args_element_value_14);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_24;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_24 = par_self;
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[30]);
        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 318;
        tmp_args_element_value_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[148]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 318;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_card;
            var_card = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_card);
        tmp_expression_value_25 = var_card;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[149]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_tex == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_16 = var_tex;
        if (var_sampler == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_17 = var_sampler;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_18;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_26 = var_cards;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[152]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_card);
        tmp_args_element_value_18 = var_card;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 320;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_11);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_tex);
        tmp_called_instance_9 = var_tex;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 321;
        tmp_cmp_expr_left_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[144]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[153]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_10;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tex);
        tmp_called_instance_10 = var_tex;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 322;
        tmp_args_element_value_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[154]);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 322;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 322;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_23 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_layer;
            var_layer = tmp_assign_source_23;
            Py_INCREF(var_layer);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_tuple_element_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_28 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[30]);
        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_20 = mod_consts[156];
        tmp_args_element_value_21 = mod_consts[157];
        CHECK_OBJECT(var_layer);
        tmp_tuple_element_1 = var_layer;
        tmp_args_element_value_22 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_layer);
        tmp_tuple_element_1 = var_layer;
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_layer);
        tmp_tuple_element_1 = var_layer;
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_layer);
        tmp_tuple_element_1 = var_layer;
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 3, tmp_tuple_element_1);
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_12 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_11,
                mod_consts[155],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_11);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_29;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_29 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[30]);
        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 325;
        tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[148]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 325;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_card;
            var_card = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_card);
        tmp_called_instance_13 = var_card;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 329;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[158]);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(var_card);
        tmp_expression_value_30 = var_card;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[149]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_tex == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_24 = var_tex;
        if (var_sampler == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_25 = var_sampler;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_26;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_31 = var_cards;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[152]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_card);
        tmp_args_element_value_26 = var_card;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 331;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_15);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 322;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_14;
        if (var_win == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_14 = var_win;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 333;
        tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[159]);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_card;
            var_card = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(var_card);
        tmp_expression_value_32 = var_card;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[149]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tex);
        tmp_args_element_value_27 = var_tex;
        if (var_sampler == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_28 = var_sampler;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_29;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_33 = var_cards;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[152]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_card);
        tmp_args_element_value_29 = var_card;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 335;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_30;
        if (var_wins == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_34 = var_wins;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[152]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_win == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_30 = var_win;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 336;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[5];
        if (var_exclude == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = var_exclude;
        if (var_tex == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscript_1 = var_tex;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 312;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 310;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = var_cards;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[26], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = var_cards;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 339;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_31);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[0];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[0];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[33], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[134]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = var_cards;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 342;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_32);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ncards == NULL);
        var_ncards = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_36;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = par_self;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[12]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[162];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[5];
        assert(var_rows == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_rows = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(var_ncards);
        tmp_assign_source_28 = var_ncards;
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_cols = tmp_assign_source_28;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_37;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = par_self;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[12]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[163];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(var_ncards);
        tmp_assign_source_29 = var_ncards;
        assert(var_rows == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_rows = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[5];
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_cols = tmp_assign_source_30;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_38;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_self;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[12]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[164];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_args_element_value_34 = var_ncards;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 352;
        tmp_args_element_value_33 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts[167], tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 352;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rows == NULL);
        var_rows = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(var_rows);
        tmp_assign_source_32 = var_rows;
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_cols = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_rows);
        tmp_mult_expr_left_1 = var_rows;
        CHECK_OBJECT(var_cols);
        tmp_mult_expr_right_1 = var_cols;
        tmp_cmp_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_cmp_expr_right_10 = var_ncards;
        tmp_condition_result_10 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_cols);
        tmp_iadd_expr_left_1 = var_cols;
        tmp_iadd_expr_right_1 = mod_consts[5];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = tmp_iadd_expr_left_1;
        var_cols = tmp_assign_source_33;

    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_rows);
        tmp_mult_expr_left_2 = var_rows;
        if (var_cols == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_2 = var_cols;
        tmp_cmp_expr_left_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_cmp_expr_right_11 = var_ncards;
        tmp_condition_result_11 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_rows);
        tmp_iadd_expr_left_2 = var_rows;
        tmp_iadd_expr_right_2 = mod_consts[5];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = tmp_iadd_expr_left_2;
        var_rows = tmp_assign_source_34;

    }
    branch_no_11:;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_39;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = par_self;
        tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[12]);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = mod_consts[169];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_args_element_value_36 = var_ncards;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 357;
        tmp_args_element_value_35 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts[167], tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 357;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rows == NULL);
        var_rows = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(var_rows);
        tmp_assign_source_36 = var_rows;
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_cols = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_rows);
        tmp_mult_expr_left_3 = var_rows;
        CHECK_OBJECT(var_cols);
        tmp_mult_expr_right_3 = var_cols;
        tmp_cmp_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_cmp_expr_right_13 = var_ncards;
        tmp_condition_result_13 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_rows);
        tmp_iadd_expr_left_3 = var_rows;
        tmp_iadd_expr_right_3 = mod_consts[5];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = tmp_iadd_expr_left_3;
        var_rows = tmp_assign_source_37;

    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        if (var_rows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_4 = var_rows;
        CHECK_OBJECT(var_cols);
        tmp_mult_expr_right_4 = var_cols;
        tmp_cmp_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ncards);
        tmp_cmp_expr_right_14 = var_ncards;
        tmp_condition_result_14 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_cols);
        tmp_iadd_expr_left_4 = var_cols;
        tmp_iadd_expr_right_4 = mod_consts[5];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = tmp_iadd_expr_left_4;
        var_cols = tmp_assign_source_38;

    }
    branch_no_14:;
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_40;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = par_self;
        tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[12]);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = mod_consts[171];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[5];
        assert(var_rows == NULL);
        Py_INCREF(tmp_assign_source_39);
        var_rows = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[5];
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_cols = tmp_assign_source_40;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_19;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[53]);
        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 365;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_17,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[172], 0)
        );

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_end_15:;
    branch_end_12:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_1;
        if (var_wins == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = var_wins;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_called_instance_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_1, 0);
        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 372;
        tmp_assign_source_41 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[173]);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_aspectx == NULL);
        var_aspectx = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_2;
        if (var_wins == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = var_wins;
        tmp_subscript_value_2 = mod_consts[0];
        tmp_called_instance_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_2, 0);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 373;
        tmp_assign_source_42 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[174]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_aspecty == NULL);
        var_aspecty = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_6;
        if (var_wins == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_6 = var_wins;
        tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_43;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_44 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 374;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_45 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_win;
            var_win = tmp_assign_source_45;
            Py_INCREF(var_win);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(var_win);
        tmp_called_instance_20 = var_win;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 375;
        tmp_mult_expr_left_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[173]);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_aspecty == NULL) {
            Py_DECREF(tmp_mult_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_mult_expr_right_5 = var_aspecty;
        tmp_cmp_expr_left_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_win);
        tmp_called_instance_21 = var_win;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 375;
        tmp_mult_expr_left_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[174]);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_16);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_aspectx == NULL) {
            Py_DECREF(tmp_cmp_expr_left_16);
            Py_DECREF(tmp_mult_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_mult_expr_right_6 = var_aspectx;
        tmp_cmp_expr_right_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_16);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[5];
        {
            PyObject *old = var_aspectx;
            var_aspectx = tmp_assign_source_46;
            Py_INCREF(var_aspectx);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[5];
        {
            PyObject *old = var_aspecty;
            var_aspecty = tmp_assign_source_47;
            Py_INCREF(var_aspecty);
            Py_XDECREF(old);
        }

    }
    branch_no_16:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[177];
        assert(var_bordersize == NULL);
        Py_INCREF(tmp_assign_source_48);
        var_bordersize = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_45;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = par_self;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[4]);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 388;
        tmp_cmp_expr_left_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = mod_consts[178];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = par_self;
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[6]);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 388;
        tmp_cmp_expr_left_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_18 = mod_consts[178];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_17 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_46;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_7 = mod_consts[179];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = par_self;
        tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[21]);
        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 389;
        tmp_mult_expr_right_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[174]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 389;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizey == NULL);
        var_sizey = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        CHECK_OBJECT(var_sizey);
        tmp_mult_expr_left_8 = var_sizey;
        if (var_aspectx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_8 = var_aspectx;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_aspecty == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_1 = var_aspecty;
        tmp_assign_source_50 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizex == NULL);
        var_sizex = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_47 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[21]);
        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 391;
        tmp_sub_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[174]);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rows == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_3 = var_rows;
        tmp_sub_expr_right_3 = mod_consts[5];
        tmp_sub_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rows == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_9 = var_rows;
        tmp_mult_expr_right_9 = mod_consts[120];
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rows == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_2 = var_rows;
        tmp_assign_source_51 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v_sizey == NULL);
        var_v_sizey = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        CHECK_OBJECT(var_v_sizey);
        tmp_mult_expr_left_10 = var_v_sizey;
        if (var_aspectx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_10 = var_aspectx;
        tmp_floordiv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_aspecty == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_3 = var_aspecty;
        tmp_assign_source_52 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v_sizex == NULL);
        var_v_sizex = tmp_assign_source_52;
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(var_v_sizey);
        tmp_cmp_expr_left_19 = var_v_sizey;
        CHECK_OBJECT(var_sizey);
        tmp_cmp_expr_right_19 = var_sizey;
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_v_sizex);
        tmp_cmp_expr_left_20 = var_v_sizex;
        CHECK_OBJECT(var_sizex);
        tmp_cmp_expr_right_20 = var_sizex;
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_18 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(var_v_sizey);
        tmp_assign_source_53 = var_v_sizey;
        {
            PyObject *old = var_sizey;
            assert(old != NULL);
            var_sizey = tmp_assign_source_53;
            Py_INCREF(var_sizey);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(var_v_sizex);
        tmp_assign_source_54 = var_v_sizex;
        {
            PyObject *old = var_sizex;
            assert(old != NULL);
            var_sizex = tmp_assign_source_54;
            Py_INCREF(var_sizex);
            Py_DECREF(old);
        }

    }
    branch_no_18:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_48 = par_self;
        tmp_called_instance_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[21]);
        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 398;
        tmp_sub_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[173]);
        Py_DECREF(tmp_called_instance_24);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = mod_consts[120];
        tmp_args_element_value_40 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 398;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_40);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_cols == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_41 = var_cols;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 398;
        tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_41);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h_sizex == NULL);
        var_h_sizex = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(var_h_sizex);
        tmp_isub_expr_left_1 = var_h_sizex;
        CHECK_OBJECT(var_bordersize);
        tmp_isub_expr_right_1 = var_bordersize;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_FLOAT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = tmp_isub_expr_left_1;
        var_h_sizex = tmp_assign_source_56;

    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(var_h_sizex);
        tmp_cmp_expr_left_21 = var_h_sizex;
        tmp_cmp_expr_right_21 = mod_consts[180];
        tmp_condition_result_19 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[180];
        {
            PyObject *old = var_h_sizex;
            assert(old != NULL);
            var_h_sizex = tmp_assign_source_57;
            Py_INCREF(var_h_sizex);
            Py_DECREF(old);
        }

    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        CHECK_OBJECT(var_h_sizex);
        tmp_mult_expr_left_11 = var_h_sizex;
        if (var_aspecty == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_11 = var_aspecty;
        tmp_floordiv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        if (tmp_floordiv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_aspectx == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_4 = var_aspectx;
        tmp_assign_source_58 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        Py_DECREF(tmp_floordiv_expr_left_4);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h_sizey == NULL);
        var_h_sizey = tmp_assign_source_58;
    }
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_h_sizey);
        tmp_cmp_expr_left_22 = var_h_sizey;
        if (var_sizey == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_22 = var_sizey;
        tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_h_sizex);
        tmp_cmp_expr_left_23 = var_h_sizex;
        CHECK_OBJECT(var_sizex);
        tmp_cmp_expr_right_23 = var_sizex;
        tmp_or_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_20 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(var_h_sizey);
        tmp_assign_source_59 = var_h_sizey;
        {
            PyObject *old = var_sizey;
            var_sizey = tmp_assign_source_59;
            Py_INCREF(var_sizey);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(var_h_sizex);
        tmp_assign_source_60 = var_h_sizex;
        {
            PyObject *old = var_sizex;
            assert(old != NULL);
            var_sizex = tmp_assign_source_60;
            Py_INCREF(var_sizex);
            Py_DECREF(old);
        }

    }
    branch_no_20:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        PyObject *tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_value_50;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_49 = par_self;
        tmp_mult_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[4]);
        if (tmp_mult_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_13 = mod_consts[181];
        tmp_mult_expr_left_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
        Py_DECREF(tmp_mult_expr_left_13);
        if (tmp_mult_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_mult_expr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_50 = par_self;
        tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[21]);
        if (tmp_called_instance_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_12);

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 409;
        tmp_mult_expr_right_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[173]);
        Py_DECREF(tmp_called_instance_25);
        if (tmp_mult_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_12);

            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
        Py_DECREF(tmp_mult_expr_left_12);
        Py_DECREF(tmp_mult_expr_right_12);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 409;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizex == NULL);
        var_sizex = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        PyObject *tmp_mult_expr_left_15;
        PyObject *tmp_mult_expr_right_15;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_value_52;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_51 = par_self;
        tmp_mult_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[6]);
        if (tmp_mult_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_15 = mod_consts[181];
        tmp_mult_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
        Py_DECREF(tmp_mult_expr_left_15);
        if (tmp_mult_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_mult_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = par_self;
        tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[21]);
        if (tmp_called_instance_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_14);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 410;
        tmp_mult_expr_right_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[174]);
        Py_DECREF(tmp_called_instance_26);
        if (tmp_mult_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_14);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
        Py_DECREF(tmp_mult_expr_left_14);
        Py_DECREF(tmp_mult_expr_right_14);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 410;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizey == NULL);
        var_sizey = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(var_sizex);
        tmp_cmp_expr_left_24 = var_sizex;
        tmp_cmp_expr_right_24 = mod_consts[0];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_floordiv_expr_left_5;
        PyObject *tmp_floordiv_expr_right_5;
        PyObject *tmp_mult_expr_left_16;
        PyObject *tmp_mult_expr_right_16;
        CHECK_OBJECT(var_sizey);
        tmp_mult_expr_left_16 = var_sizey;
        if (var_aspectx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_16 = var_aspectx;
        tmp_floordiv_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
        if (tmp_floordiv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_aspecty == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_5 = var_aspecty;
        tmp_assign_source_63 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
        Py_DECREF(tmp_floordiv_expr_left_5);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizex;
            assert(old != NULL);
            var_sizex = tmp_assign_source_63;
            Py_DECREF(old);
        }

    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        if (var_sizey == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_25 = var_sizey;
        tmp_cmp_expr_right_25 = mod_consts[0];
        tmp_condition_result_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_floordiv_expr_left_6;
        PyObject *tmp_floordiv_expr_right_6;
        PyObject *tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        CHECK_OBJECT(var_sizex);
        tmp_mult_expr_left_17 = var_sizex;
        if (var_aspecty == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_17 = var_aspecty;
        tmp_floordiv_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_17, tmp_mult_expr_right_17);
        if (tmp_floordiv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_aspectx == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_floordiv_expr_right_6 = var_aspectx;
        tmp_assign_source_64 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
        Py_DECREF(tmp_floordiv_expr_left_6);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizey;
            var_sizey = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    branch_no_22:;
    branch_end_17:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_18;
        PyObject *tmp_mult_expr_right_18;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_value_53;
        tmp_mult_expr_left_18 = mod_consts[104];
        if (var_sizex == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_18 = var_sizex;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_truediv_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_53 = par_self;
        tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[21]);
        if (tmp_called_instance_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 415;
        tmp_args_element_value_44 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[173]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 415;
        tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fsizex == NULL);
        var_fsizex = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_19;
        PyObject *tmp_mult_expr_right_19;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_expression_value_54;
        tmp_mult_expr_left_19 = mod_consts[104];
        if (var_sizey == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_19 = var_sizey;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_54 = par_self;
        tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[21]);
        if (tmp_called_instance_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 416;
        tmp_args_element_value_45 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_28, mod_consts[174]);
        Py_DECREF(tmp_called_instance_28);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 416;
        tmp_truediv_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fsizey == NULL);
        var_fsizey = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_expression_value_55;
        tmp_truediv_expr_left_4 = mod_consts[104];
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_55 = par_self;
        tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[21]);
        if (tmp_called_instance_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 417;
        tmp_args_element_value_46 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_29, mod_consts[173]);
        Py_DECREF(tmp_called_instance_29);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 417;
        tmp_truediv_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fpixelx == NULL);
        var_fpixelx = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_expression_value_56;
        tmp_truediv_expr_left_5 = mod_consts[104];
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = par_self;
        tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[21]);
        if (tmp_called_instance_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 418;
        tmp_args_element_value_47 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[174]);
        Py_DECREF(tmp_called_instance_30);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 418;
        tmp_truediv_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_truediv_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_right_5);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fpixely == NULL);
        var_fpixely = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_expression_value_57;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = par_self;
        tmp_cmp_expr_left_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[10]);
        if (tmp_cmp_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_26 = mod_consts[182];
        tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        Py_DECREF(tmp_cmp_expr_left_26);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[183];
        assert(var_dirx == NULL);
        Py_INCREF(tmp_assign_source_69);
        var_dirx = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[183];
        assert(var_diry == NULL);
        Py_INCREF(tmp_assign_source_70);
        var_diry = tmp_assign_source_70;
    }
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        PyObject *tmp_expression_value_58;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_58 = par_self;
        tmp_cmp_expr_left_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[10]);
        if (tmp_cmp_expr_left_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_27 = mod_consts[184];
        tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        Py_DECREF(tmp_cmp_expr_left_27);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[180];
        assert(var_dirx == NULL);
        Py_INCREF(tmp_assign_source_71);
        var_dirx = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[183];
        assert(var_diry == NULL);
        Py_INCREF(tmp_assign_source_72);
        var_diry = tmp_assign_source_72;
    }
    goto branch_end_24;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        PyObject *tmp_expression_value_59;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = par_self;
        tmp_cmp_expr_left_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[10]);
        if (tmp_cmp_expr_left_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_28 = mod_consts[185];
        tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        Py_DECREF(tmp_cmp_expr_left_28);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[183];
        assert(var_dirx == NULL);
        Py_INCREF(tmp_assign_source_73);
        var_dirx = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[180];
        assert(var_diry == NULL);
        Py_INCREF(tmp_assign_source_74);
        var_diry = tmp_assign_source_74;
    }
    goto branch_end_25;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        PyObject *tmp_expression_value_60;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_60 = par_self;
        tmp_cmp_expr_left_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[10]);
        if (tmp_cmp_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_29 = mod_consts[186];
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        Py_DECREF(tmp_cmp_expr_left_29);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[180];
        assert(var_dirx == NULL);
        Py_INCREF(tmp_assign_source_75);
        var_dirx = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[180];
        assert(var_diry == NULL);
        Py_INCREF(tmp_assign_source_76);
        var_diry = tmp_assign_source_76;
    }
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_20;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[53]);
        if (tmp_called_instance_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 434;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_31,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[187], 0)
        );

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_end_26:;
    branch_end_25:;
    branch_end_24:;
    branch_end_23:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_62 = par_self;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[188]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizex == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_48 = var_sizex;
        if (var_sizey == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_49 = var_sizey;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_50 = var_rows;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 442;
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_50);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_78 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_78;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_79 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_79 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 442;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_80 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_80;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_cols == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_51 = var_cols;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 443;
        tmp_iter_arg_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_51);
        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_81 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_82 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_82 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
                exception_lineno = 443;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_83 = tmp_for_loop_8__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_83;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_20;
        PyObject *tmp_mult_expr_right_20;
        CHECK_OBJECT(var_c);
        tmp_add_expr_left_1 = var_c;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_20 = var_r;
        if (var_cols == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_right_20 = var_cols;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_84 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        CHECK_OBJECT(var_index);
        tmp_cmp_expr_left_30 = var_index;
        if (var_ncards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[190]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_cmp_expr_right_30 = var_ncards;
        tmp_condition_result_27 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_52;
        CHECK_OBJECT(var_index);
        tmp_add_expr_left_2 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_63 = par_self;
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[27]);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_cards == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_52 = var_cards;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 446;
        tmp_mod_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_52);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_85 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_index;
            assert(old != NULL);
            var_index = tmp_assign_source_85;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_mult_expr_left_21;
        PyObject *tmp_mult_expr_right_21;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_mult_expr_left_22;
        PyObject *tmp_mult_expr_right_22;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_23;
        PyObject *tmp_mult_expr_right_23;
        PyObject *tmp_mult_expr_left_24;
        PyObject *tmp_mult_expr_right_24;
        if (var_dirx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[191]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_21 = var_dirx;
        tmp_sub_expr_left_6 = mod_consts[180];
        CHECK_OBJECT(var_c);
        tmp_add_expr_left_3 = var_c;
        tmp_add_expr_right_3 = mod_consts[181];
        tmp_mult_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_mult_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_fsizex == NULL) {
            Py_DECREF(tmp_mult_expr_left_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[192]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_add_expr_left_4 = var_fsizex;
        if (var_fpixelx == NULL) {
            Py_DECREF(tmp_mult_expr_left_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_23 = var_fpixelx;
        if (var_bordersize == NULL) {
            Py_DECREF(tmp_mult_expr_left_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[194]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_right_23 = var_bordersize;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_22);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_mult_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_22);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_sub_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
        Py_DECREF(tmp_mult_expr_left_22);
        Py_DECREF(tmp_mult_expr_right_22);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_21 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_mult_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_sub_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
        Py_DECREF(tmp_mult_expr_right_21);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_fpixelx == NULL) {
            Py_DECREF(tmp_sub_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_24 = var_fpixelx;
        if (var_dirx == NULL) {
            Py_DECREF(tmp_sub_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[191]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_right_24 = var_dirx;
        tmp_sub_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_86 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_posx;
            var_posx = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_mult_expr_left_25;
        PyObject *tmp_mult_expr_right_25;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_mult_expr_left_26;
        PyObject *tmp_mult_expr_right_26;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_27;
        PyObject *tmp_mult_expr_right_27;
        PyObject *tmp_mult_expr_left_28;
        PyObject *tmp_mult_expr_right_28;
        if (var_diry == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_25 = var_diry;
        tmp_sub_expr_left_8 = mod_consts[180];
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_add_expr_left_5 = var_r;
        tmp_add_expr_right_5 = mod_consts[181];
        tmp_mult_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_mult_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_fsizey == NULL) {
            Py_DECREF(tmp_mult_expr_left_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[196]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_add_expr_left_6 = var_fsizey;
        if (var_fpixely == NULL) {
            Py_DECREF(tmp_mult_expr_left_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[197]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_27 = var_fpixely;
        if (var_bordersize == NULL) {
            Py_DECREF(tmp_mult_expr_left_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[194]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_right_27 = var_bordersize;
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_27, tmp_mult_expr_right_27);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_26);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_mult_expr_right_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_26);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_sub_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_26, tmp_mult_expr_right_26);
        Py_DECREF(tmp_mult_expr_left_26);
        Py_DECREF(tmp_mult_expr_right_26);
        if (tmp_sub_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_mult_expr_right_25 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_right_8);
        if (tmp_mult_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_sub_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
        Py_DECREF(tmp_mult_expr_right_25);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_fpixely == NULL) {
            Py_DECREF(tmp_sub_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[197]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_28 = var_fpixely;
        if (var_diry == NULL) {
            Py_DECREF(tmp_sub_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[195]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_right_28 = var_diry;
        tmp_sub_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_28, tmp_mult_expr_right_28);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_87 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_posy;
            var_posy = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 450;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[198]);

        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_placer;
            var_placer = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        CHECK_OBJECT(var_placer);
        tmp_expression_value_64 = var_placer;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[199]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_posx);
        tmp_args_element_value_54 = var_posx;
        tmp_args_element_value_55 = mod_consts[0];
        CHECK_OBJECT(var_posy);
        tmp_args_element_value_56 = var_posy;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_args_element_value_53 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_32,
                mod_consts[109],
                call_args
            );
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 451;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_mult_expr_left_29;
        PyObject *tmp_mult_expr_right_29;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_mult_expr_left_30;
        PyObject *tmp_mult_expr_right_30;
        CHECK_OBJECT(var_placer);
        tmp_expression_value_65 = var_placer;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[201]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[109]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_fsizex == NULL) {
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[192]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_29 = var_fsizex;
        tmp_mult_expr_right_29 = mod_consts[181];
        tmp_args_element_value_58 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_29, tmp_mult_expr_right_29);
        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_value_59 = mod_consts[180];
        if (var_fsizey == NULL) {
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[196]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_mult_expr_left_30 = var_fsizey;
        tmp_mult_expr_right_30 = mod_consts[181];
        tmp_args_element_value_60 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_30, tmp_mult_expr_right_30);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_args_element_value_57 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 452;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(var_placer);
        tmp_expression_value_67 = var_placer;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[203]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_68 = par_self;
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[18]);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_69 = par_self;
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[20]);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
        }

        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(var_placer);
        tmp_expression_value_70 = var_placer;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[204]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_71 = par_self;
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[25]);
        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 454;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_64;
        if (var_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[205]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_33 = var_frame;
        CHECK_OBJECT(var_placer);
        tmp_args_element_value_64 = var_placer;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 455;
        tmp_call_result_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_33, mod_consts[206], tmp_args_element_value_64);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_65;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_72 = var_cards;
        CHECK_OBJECT(var_index);
        tmp_subscript_value_3 = var_index;
        tmp_called_instance_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_3);
        if (tmp_called_instance_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_placer);
        tmp_args_element_value_65 = var_placer;
        frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame.f_lineno = 456;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_34, mod_consts[204], tmp_args_element_value_65);
        Py_DECREF(tmp_called_instance_34);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_placer);
        tmp_ass_subvalue_2 = var_placer;
        if (var_cards == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_ass_subscribed_2 = var_cards;
        CHECK_OBJECT(var_index);
        tmp_ass_subscript_2 = var_index;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    branch_no_27:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 443;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_7;
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

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 442;
        type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_expression_value_73;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[132]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooNooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_a2854fa12ae6d3f72cbaad7493c71741, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2854fa12ae6d3f72cbaad7493c71741->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2854fa12ae6d3f72cbaad7493c71741, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2854fa12ae6d3f72cbaad7493c71741,
        type_description_1,
        par_self,
        par_task,
        var_card,
        var_exclude,
        var_include,
        var_sampler,
        var_cards,
        var_wins,
        var_iwin,
        var_win,
        var_itex,
        var_tex,
        var_face,
        var_layer,
        var_ncards,
        var_rows,
        var_cols,
        var_aspectx,
        var_aspecty,
        var_bordersize,
        var_sizey,
        var_sizex,
        var_v_sizey,
        var_v_sizex,
        NULL,
        var_h_sizex,
        var_h_sizey,
        var_fsizex,
        var_fsizey,
        var_fpixelx,
        var_fpixely,
        var_dirx,
        var_diry,
        var_frame,
        var_r,
        var_c,
        var_index,
        var_posx,
        var_posy,
        var_placer
    );


    // Release cached frame if used for exception.
    if (frame_a2854fa12ae6d3f72cbaad7493c71741 == cache_frame_a2854fa12ae6d3f72cbaad7493c71741) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2854fa12ae6d3f72cbaad7493c71741);
        cache_frame_a2854fa12ae6d3f72cbaad7493c71741 = NULL;
    }

    assertFrameObject(frame_a2854fa12ae6d3f72cbaad7493c71741);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_card);
    var_card = NULL;
    Py_XDECREF(var_exclude);
    var_exclude = NULL;
    Py_XDECREF(var_include);
    var_include = NULL;
    Py_XDECREF(var_sampler);
    var_sampler = NULL;
    Py_XDECREF(var_cards);
    var_cards = NULL;
    Py_XDECREF(var_wins);
    var_wins = NULL;
    Py_XDECREF(var_iwin);
    var_iwin = NULL;
    Py_XDECREF(var_win);
    var_win = NULL;
    Py_XDECREF(var_itex);
    var_itex = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
    Py_XDECREF(var_face);
    var_face = NULL;
    Py_XDECREF(var_layer);
    var_layer = NULL;
    Py_XDECREF(var_ncards);
    var_ncards = NULL;
    Py_XDECREF(var_rows);
    var_rows = NULL;
    Py_XDECREF(var_cols);
    var_cols = NULL;
    Py_XDECREF(var_aspectx);
    var_aspectx = NULL;
    Py_XDECREF(var_aspecty);
    var_aspecty = NULL;
    Py_XDECREF(var_bordersize);
    var_bordersize = NULL;
    Py_XDECREF(var_sizey);
    var_sizey = NULL;
    Py_XDECREF(var_sizex);
    var_sizex = NULL;
    Py_XDECREF(var_v_sizey);
    var_v_sizey = NULL;
    Py_XDECREF(var_v_sizex);
    var_v_sizex = NULL;
    Py_XDECREF(var_h_sizex);
    var_h_sizex = NULL;
    Py_XDECREF(var_h_sizey);
    var_h_sizey = NULL;
    Py_XDECREF(var_fsizex);
    var_fsizex = NULL;
    Py_XDECREF(var_fsizey);
    var_fsizey = NULL;
    Py_XDECREF(var_fpixelx);
    var_fpixelx = NULL;
    Py_XDECREF(var_fpixely);
    var_fpixely = NULL;
    Py_XDECREF(var_dirx);
    var_dirx = NULL;
    Py_XDECREF(var_diry);
    var_diry = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_posx);
    var_posx = NULL;
    Py_XDECREF(var_posy);
    var_posy = NULL;
    Py_XDECREF(var_placer);
    var_placer = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_card);
    var_card = NULL;
    Py_XDECREF(var_exclude);
    var_exclude = NULL;
    Py_XDECREF(var_include);
    var_include = NULL;
    Py_XDECREF(var_sampler);
    var_sampler = NULL;
    Py_XDECREF(var_cards);
    var_cards = NULL;
    Py_XDECREF(var_wins);
    var_wins = NULL;
    Py_XDECREF(var_iwin);
    var_iwin = NULL;
    Py_XDECREF(var_win);
    var_win = NULL;
    Py_XDECREF(var_itex);
    var_itex = NULL;
    Py_XDECREF(var_tex);
    var_tex = NULL;
    Py_XDECREF(var_face);
    var_face = NULL;
    Py_XDECREF(var_layer);
    var_layer = NULL;
    Py_XDECREF(var_ncards);
    var_ncards = NULL;
    Py_XDECREF(var_rows);
    var_rows = NULL;
    Py_XDECREF(var_cols);
    var_cols = NULL;
    Py_XDECREF(var_aspectx);
    var_aspectx = NULL;
    Py_XDECREF(var_aspecty);
    var_aspecty = NULL;
    Py_XDECREF(var_bordersize);
    var_bordersize = NULL;
    Py_XDECREF(var_sizey);
    var_sizey = NULL;
    Py_XDECREF(var_sizex);
    var_sizex = NULL;
    Py_XDECREF(var_v_sizey);
    var_v_sizey = NULL;
    Py_XDECREF(var_v_sizex);
    var_v_sizex = NULL;
    Py_XDECREF(var_h_sizex);
    var_h_sizex = NULL;
    Py_XDECREF(var_h_sizey);
    var_h_sizey = NULL;
    Py_XDECREF(var_fsizex);
    var_fsizex = NULL;
    Py_XDECREF(var_fsizey);
    var_fsizey = NULL;
    Py_XDECREF(var_fpixelx);
    var_fpixelx = NULL;
    Py_XDECREF(var_fpixely);
    var_fpixely = NULL;
    Py_XDECREF(var_dirx);
    var_dirx = NULL;
    Py_XDECREF(var_diry);
    var_diry = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_posx);
    var_posx = NULL;
    Py_XDECREF(var_posy);
    var_posy = NULL;
    Py_XDECREF(var_placer);
    var_placer = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_task);
    Py_DECREF(par_task);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_task);
    Py_DECREF(par_task);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__10_selectCard() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__10_selectCard,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_07cddd3113c02fe013104d779c960cc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__11_advanceCard() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__11_advanceCard,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_7970a1c5afabcf3405c9a7fcb6367311,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__12_setInclude() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__12_setInclude,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_31446994496a8bd2f12f79378924013a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__13_setExclude() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__13_setExclude,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_e8016caf446410418489734537cce245,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__14_setSort() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__14_setSort,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_41934a736153ef371be66015880b4a22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__15_setRenderParent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__15_setRenderParent,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_139ba77e0d05e5409778bb915a8049e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_e49dec1d230739461ec7f6651db47db9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__17_makeFrame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__17_makeFrame,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_2b55d26834996723cd8191f5db0a0060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[130],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__18_maintainReadout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__18_maintainReadout,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_a2854fa12ae6d3f72cbaad7493c71741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[207],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__1___init__,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_044aac93fd8d54bd5cd669226a7ddc67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__2_refreshReadout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__2_refreshReadout,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_457875e24774c4ab227e9fbdaa5fda34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__3_isValidTextureSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__3_isValidTextureSet,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_5e6dec336e7f7f5e4076741a7654c362,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__4_isEnabled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__4_isEnabled,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_129a08c08295d07881e0fc9442fd61e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__5_enable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__5_enable,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_83f331536cba7d96a7ea08b683bcf4c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__6_toggleEnable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__6_toggleEnable,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_9d0700ae72965a8fbf104d05668a7d8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__7_setCardSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__7_setCardSize,
        mod_consts[246],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_7762e9287c1fd0e6dd79cebd6de74698,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__8_setPosition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__8_setPosition,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_70c07bff6da013109229133f15f811be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__9_setLayout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$BufferViewer$$$function__9_setLayout,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_e2b8cc08a3333c0b02f92f8b4b31cd7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$showbase$BufferViewer,
        mod_consts[74],
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

function_impl_code functable_direct$showbase$BufferViewer[] = {
    impl_direct$showbase$BufferViewer$$$function__1___init__,
    impl_direct$showbase$BufferViewer$$$function__2_refreshReadout,
    impl_direct$showbase$BufferViewer$$$function__3_isValidTextureSet,
    impl_direct$showbase$BufferViewer$$$function__4_isEnabled,
    impl_direct$showbase$BufferViewer$$$function__5_enable,
    impl_direct$showbase$BufferViewer$$$function__6_toggleEnable,
    impl_direct$showbase$BufferViewer$$$function__7_setCardSize,
    impl_direct$showbase$BufferViewer$$$function__8_setPosition,
    impl_direct$showbase$BufferViewer$$$function__9_setLayout,
    impl_direct$showbase$BufferViewer$$$function__10_selectCard,
    impl_direct$showbase$BufferViewer$$$function__11_advanceCard,
    impl_direct$showbase$BufferViewer$$$function__12_setInclude,
    impl_direct$showbase$BufferViewer$$$function__13_setExclude,
    impl_direct$showbase$BufferViewer$$$function__14_setSort,
    impl_direct$showbase$BufferViewer$$$function__15_setRenderParent,
    impl_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet,
    impl_direct$showbase$BufferViewer$$$function__17_makeFrame,
    impl_direct$showbase$BufferViewer$$$function__18_maintainReadout,
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

    function_impl_code *current = functable_direct$showbase$BufferViewer;
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

    if (offset > sizeof(functable_direct$showbase$BufferViewer) || offset < 0) {
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
        functable_direct$showbase$BufferViewer[offset],
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
        module_direct$showbase$BufferViewer,
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
PyObject *modulecode_direct$showbase$BufferViewer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.showbase.BufferViewer");

    // Store the module for future use.
    module_direct$showbase$BufferViewer = module;

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
        PRINT_STRING("direct.showbase.BufferViewer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.showbase.BufferViewer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$showbase$BufferViewer\n");

    moduledict_direct$showbase$BufferViewer = MODULE_DICT(module_direct$showbase$BufferViewer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$showbase$BufferViewer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$showbase$BufferViewer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[284]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$showbase$BufferViewer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$showbase$BufferViewer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$showbase$BufferViewer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$showbase$BufferViewer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$showbase$BufferViewer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_fc02a513e6b44d77efe7ecc14afbb414;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bb3756ef5322fe4dd72a7ac719735ea8_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_2);
    }
    frame_fc02a513e6b44d77efe7ecc14afbb414 = MAKE_MODULE_FRAME(codeobj_fc02a513e6b44d77efe7ecc14afbb414, module_direct$showbase$BufferViewer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fc02a513e6b44d77efe7ecc14afbb414);
    assert(Py_REFCNT(frame_fc02a513e6b44d77efe7ecc14afbb414) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[212], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[213], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST1(mod_consts[52]);
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[216];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_fromlist_value_1 = mod_consts[217];
        tmp_level_value_1 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 17;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$showbase$BufferViewer, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

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
        tmp_name_value_2 = mod_consts[218];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[219];
        tmp_level_value_2 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$showbase$BufferViewer,
                mod_consts[131],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[220];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[221];
        tmp_level_value_3 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 19;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$showbase$BufferViewer,
                mod_consts[56],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_6);
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[222];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_fromlist_value_4 = mod_consts[217];
        tmp_level_value_4 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 20;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$showbase$BufferViewer, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[223];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[224];
        tmp_level_value_5 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 21;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$showbase$BufferViewer,
                mod_consts[225],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[225]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[166];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_direct$showbase$BufferViewer;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[0];
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 22;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    // Tried code:
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


            exception_lineno = 25;

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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[226]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[226]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 25;
        tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[227]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[228];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[229];
        tmp_default_value_1 = mod_consts[230];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[229]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 25;
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
            locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[231];
        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[232], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[233], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        frame_bb3756ef5322fe4dd72a7ac719735ea8_2 = MAKE_CLASS_FRAME(tstate, codeobj_bb3756ef5322fe4dd72a7ac719735ea8, module_direct$showbase$BufferViewer, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bb3756ef5322fe4dd72a7ac719735ea8_2);
        assert(Py_REFCNT(frame_bb3756ef5322fe4dd72a7ac719735ea8_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[234]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[234]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_bb3756ef5322fe4dd72a7ac719735ea8_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[235],
                PyTuple_GET_ITEM(mod_consts[236], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__2_refreshReadout();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__3_isValidTextureSet();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__4_isEnabled();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[241], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__5_enable();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__6_toggleEnable();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[244], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__7_setCardSize();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[246], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__8_setPosition();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[248], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__9_setLayout();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[250], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__10_selectCard();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[252], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__11_advanceCard();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__12_setInclude();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__13_setExclude();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[258], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__14_setSort();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[260], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__15_setRenderParent();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[262], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__16_analyzeTextureSet();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__17_makeFrame();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[188], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$showbase$BufferViewer$$$function__18_maintainReadout();

        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb3756ef5322fe4dd72a7ac719735ea8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb3756ef5322fe4dd72a7ac719735ea8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb3756ef5322fe4dd72a7ac719735ea8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb3756ef5322fe4dd72a7ac719735ea8_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bb3756ef5322fe4dd72a7ac719735ea8_2);

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


                exception_lineno = 25;

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
        tmp_res = PyObject_SetItem(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25, mod_consts[267], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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
            tmp_tuple_element_4 = mod_consts[52];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame.f_lineno = 25;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

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
        Py_DECREF(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25);
        locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25 = NULL;
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

        Py_DECREF(locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25);
        locals_direct$showbase$BufferViewer$$$class__1_BufferViewer_25 = NULL;
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
        exception_lineno = 25;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_15);
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

    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc02a513e6b44d77efe7ecc14afbb414, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc02a513e6b44d77efe7ecc14afbb414->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc02a513e6b44d77efe7ecc14afbb414, exception_lineno);
    }



    assertFrameObject(frame_fc02a513e6b44d77efe7ecc14afbb414);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.showbase.BufferViewer", false);

    Py_INCREF(module_direct$showbase$BufferViewer);
    return module_direct$showbase$BufferViewer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$showbase$BufferViewer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$showbase$BufferViewer", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
