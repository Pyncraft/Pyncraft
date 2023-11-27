/* Generated code for Python module 'direct.extensions_native.CInterval_extensions'
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

/* The "module_direct$extensions_native$CInterval_extensions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$extensions_native$CInterval_extensions;
PyDictObject *moduledict_direct$extensions_native$CInterval_extensions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[106];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[106];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.extensions_native.CInterval_extensions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 106; i++) {
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
void checkModuleConstants_direct$extensions_native$CInterval_extensions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 106; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a43b2e5bd41368949fd436f824bdc152;
static PyCodeObject *codeobj_95ce0ef60e98c249953f885962f22f19;
static PyCodeObject *codeobj_2fd5c15eed5a5d2bc07b03719816fad1;
static PyCodeObject *codeobj_528f4cc6b743b50e34033733a9270889;
static PyCodeObject *codeobj_39559d5e18b0f67a859794e1159e3843;
static PyCodeObject *codeobj_57ba3029d6488224dfba523c9dcc520e;
static PyCodeObject *codeobj_9431ba1d3077c4d500d39770feec9deb;
static PyCodeObject *codeobj_f950103d5b47e844a93729615c62afa4;
static PyCodeObject *codeobj_ede6f705d39f506838fcc6be7b8937f0;
static PyCodeObject *codeobj_20d410c5dcd92e04688b3165aac1c22e;
static PyCodeObject *codeobj_1a86e788ef3ba7f61a4cdd802b980e08;
static PyCodeObject *codeobj_dd6d77837905ea24c9ca3207dd39db71;
static PyCodeObject *codeobj_b89d380581deda94a3b2bcbdcdb4524b;
static PyCodeObject *codeobj_b194ef56f056ff8752956040cda850a6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[93]); CHECK_OBJECT(module_filename_obj);
    codeobj_a43b2e5bd41368949fd436f824bdc152 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[94], NULL, 1, 0, 0);
    codeobj_95ce0ef60e98c249953f885962f22f19 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[95], mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_2fd5c15eed5a5d2bc07b03719816fad1 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[96], NULL, 2, 0, 0);
    codeobj_528f4cc6b743b50e34033733a9270889 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[22], mod_consts[97], NULL, 2, 0, 0);
    codeobj_39559d5e18b0f67a859794e1159e3843 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[98], NULL, 3, 0, 0);
    codeobj_57ba3029d6488224dfba523c9dcc520e = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[88], mod_consts[88], mod_consts[99], NULL, 4, 0, 0);
    codeobj_9431ba1d3077c4d500d39770feec9deb = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[100], NULL, 2, 0, 0);
    codeobj_f950103d5b47e844a93729615c62afa4 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[101], NULL, 1, 0, 0);
    codeobj_ede6f705d39f506838fcc6be7b8937f0 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[102], NULL, 1, 0, 0);
    codeobj_20d410c5dcd92e04688b3165aac1c22e = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[63], mod_consts[103], NULL, 2, 0, 0);
    codeobj_1a86e788ef3ba7f61a4cdd802b980e08 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[89], mod_consts[102], NULL, 1, 0, 0);
    codeobj_dd6d77837905ea24c9ca3207dd39db71 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[94], NULL, 1, 0, 0);
    codeobj_b89d380581deda94a3b2bcbdcdb4524b = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[96], NULL, 2, 0, 0);
    codeobj_b194ef56f056ff8752956040cda850a6 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[53], mod_consts[104], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__1_setT();


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__2_play(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__3_stop();


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT();


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent();


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy(PyObject *defaults);


// The module function definitions.
static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__1_setT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_t = python_pars[1];
    struct Nuitka_FrameObject *frame_20d410c5dcd92e04688b3165aac1c22e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20d410c5dcd92e04688b3165aac1c22e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_20d410c5dcd92e04688b3165aac1c22e)) {
        Py_XDECREF(cache_frame_20d410c5dcd92e04688b3165aac1c22e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20d410c5dcd92e04688b3165aac1c22e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20d410c5dcd92e04688b3165aac1c22e = MAKE_FUNCTION_FRAME(tstate, codeobj_20d410c5dcd92e04688b3165aac1c22e, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20d410c5dcd92e04688b3165aac1c22e->m_type_description == NULL);
    frame_20d410c5dcd92e04688b3165aac1c22e = cache_frame_20d410c5dcd92e04688b3165aac1c22e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_20d410c5dcd92e04688b3165aac1c22e);
    assert(Py_REFCNT(frame_20d410c5dcd92e04688b3165aac1c22e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_1 = par_t;
        frame_20d410c5dcd92e04688b3165aac1c22e->m_frame.f_lineno = 12;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[0], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_20d410c5dcd92e04688b3165aac1c22e->m_frame.f_lineno = 13;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[1]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
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
        exception_tb = MAKE_TRACEBACK(frame_20d410c5dcd92e04688b3165aac1c22e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20d410c5dcd92e04688b3165aac1c22e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20d410c5dcd92e04688b3165aac1c22e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20d410c5dcd92e04688b3165aac1c22e,
        type_description_1,
        par_self,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_20d410c5dcd92e04688b3165aac1c22e == cache_frame_20d410c5dcd92e04688b3165aac1c22e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20d410c5dcd92e04688b3165aac1c22e);
        cache_frame_20d410c5dcd92e04688b3165aac1c22e = NULL;
    }

    assertFrameObject(frame_20d410c5dcd92e04688b3165aac1c22e);

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
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__2_play(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_t0 = python_pars[1];
    PyObject *par_duration = python_pars[2];
    PyObject *par_scale = python_pars[3];
    struct Nuitka_FrameObject *frame_57ba3029d6488224dfba523c9dcc520e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57ba3029d6488224dfba523c9dcc520e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57ba3029d6488224dfba523c9dcc520e)) {
        Py_XDECREF(cache_frame_57ba3029d6488224dfba523c9dcc520e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57ba3029d6488224dfba523c9dcc520e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57ba3029d6488224dfba523c9dcc520e = MAKE_FUNCTION_FRAME(tstate, codeobj_57ba3029d6488224dfba523c9dcc520e, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57ba3029d6488224dfba523c9dcc520e->m_type_description == NULL);
    frame_57ba3029d6488224dfba523c9dcc520e = cache_frame_57ba3029d6488224dfba523c9dcc520e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_57ba3029d6488224dfba523c9dcc520e);
    assert(Py_REFCNT(frame_57ba3029d6488224dfba523c9dcc520e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_57ba3029d6488224dfba523c9dcc520e->m_frame.f_lineno = 21;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[4], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_duration);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_duration);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t0);
        tmp_args_element_value_1 = par_t0;
        CHECK_OBJECT(par_t0);
        tmp_add_expr_left_1 = par_t0;
        CHECK_OBJECT(par_duration);
        tmp_add_expr_right_1 = par_duration;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_args_element_value_3 = par_scale;
        frame_57ba3029d6488224dfba523c9dcc520e->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_t0);
        tmp_args_element_value_4 = par_t0;
        tmp_args_element_value_5 = mod_consts[6];
        CHECK_OBJECT(par_scale);
        tmp_args_element_value_6 = par_scale;
        frame_57ba3029d6488224dfba523c9dcc520e->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_57ba3029d6488224dfba523c9dcc520e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57ba3029d6488224dfba523c9dcc520e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57ba3029d6488224dfba523c9dcc520e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57ba3029d6488224dfba523c9dcc520e,
        type_description_1,
        par_self,
        par_t0,
        par_duration,
        par_scale
    );


    // Release cached frame if used for exception.
    if (frame_57ba3029d6488224dfba523c9dcc520e == cache_frame_57ba3029d6488224dfba523c9dcc520e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57ba3029d6488224dfba523c9dcc520e);
        cache_frame_57ba3029d6488224dfba523c9dcc520e = NULL;
    }

    assertFrameObject(frame_57ba3029d6488224dfba523c9dcc520e);

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
    CHECK_OBJECT(par_t0);
    Py_DECREF(par_t0);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_t0);
    Py_DECREF(par_t0);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__3_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a86e788ef3ba7f61a4cdd802b980e08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a86e788ef3ba7f61a4cdd802b980e08 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a86e788ef3ba7f61a4cdd802b980e08)) {
        Py_XDECREF(cache_frame_1a86e788ef3ba7f61a4cdd802b980e08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a86e788ef3ba7f61a4cdd802b980e08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a86e788ef3ba7f61a4cdd802b980e08 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a86e788ef3ba7f61a4cdd802b980e08, module_direct$extensions_native$CInterval_extensions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a86e788ef3ba7f61a4cdd802b980e08->m_type_description == NULL);
    frame_1a86e788ef3ba7f61a4cdd802b980e08 = cache_frame_1a86e788ef3ba7f61a4cdd802b980e08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a86e788ef3ba7f61a4cdd802b980e08);
    assert(Py_REFCNT(frame_1a86e788ef3ba7f61a4cdd802b980e08) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1a86e788ef3ba7f61a4cdd802b980e08->m_frame.f_lineno = 32;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_1a86e788ef3ba7f61a4cdd802b980e08->m_frame.f_lineno = 33;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[8]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_1a86e788ef3ba7f61a4cdd802b980e08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a86e788ef3ba7f61a4cdd802b980e08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a86e788ef3ba7f61a4cdd802b980e08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a86e788ef3ba7f61a4cdd802b980e08,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1a86e788ef3ba7f61a4cdd802b980e08 == cache_frame_1a86e788ef3ba7f61a4cdd802b980e08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a86e788ef3ba7f61a4cdd802b980e08);
        cache_frame_1a86e788ef3ba7f61a4cdd802b980e08 = NULL;
    }

    assertFrameObject(frame_1a86e788ef3ba7f61a4cdd802b980e08);

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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ede6f705d39f506838fcc6be7b8937f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ede6f705d39f506838fcc6be7b8937f0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ede6f705d39f506838fcc6be7b8937f0)) {
        Py_XDECREF(cache_frame_ede6f705d39f506838fcc6be7b8937f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ede6f705d39f506838fcc6be7b8937f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ede6f705d39f506838fcc6be7b8937f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_ede6f705d39f506838fcc6be7b8937f0, module_direct$extensions_native$CInterval_extensions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ede6f705d39f506838fcc6be7b8937f0->m_type_description == NULL);
    frame_ede6f705d39f506838fcc6be7b8937f0 = cache_frame_ede6f705d39f506838fcc6be7b8937f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ede6f705d39f506838fcc6be7b8937f0);
    assert(Py_REFCNT(frame_ede6f705d39f506838fcc6be7b8937f0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ede6f705d39f506838fcc6be7b8937f0->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[3],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_ede6f705d39f506838fcc6be7b8937f0->m_frame.f_lineno = 41;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[8]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_ede6f705d39f506838fcc6be7b8937f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ede6f705d39f506838fcc6be7b8937f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ede6f705d39f506838fcc6be7b8937f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ede6f705d39f506838fcc6be7b8937f0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ede6f705d39f506838fcc6be7b8937f0 == cache_frame_ede6f705d39f506838fcc6be7b8937f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ede6f705d39f506838fcc6be7b8937f0);
        cache_frame_ede6f705d39f506838fcc6be7b8937f0 = NULL;
    }

    assertFrameObject(frame_ede6f705d39f506838fcc6be7b8937f0);

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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_t = NULL;
    PyObject *var_func = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f950103d5b47e844a93729615c62afa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f950103d5b47e844a93729615c62afa4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f950103d5b47e844a93729615c62afa4)) {
        Py_XDECREF(cache_frame_f950103d5b47e844a93729615c62afa4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f950103d5b47e844a93729615c62afa4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f950103d5b47e844a93729615c62afa4 = MAKE_FUNCTION_FRAME(tstate, codeobj_f950103d5b47e844a93729615c62afa4, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f950103d5b47e844a93729615c62afa4->m_type_description == NULL);
    frame_f950103d5b47e844a93729615c62afa4 = cache_frame_f950103d5b47e844a93729615c62afa4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f950103d5b47e844a93729615c62afa4);
    assert(Py_REFCNT(frame_f950103d5b47e844a93729615c62afa4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f950103d5b47e844a93729615c62afa4->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[10]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
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
                exception_lineno = 52;
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
            PyObject *old = var_func;
            var_func = tmp_assign_source_4;
            Py_INCREF(var_func);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_func);
        tmp_called_value_1 = var_func;
        if (var_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_t;
        frame_f950103d5b47e844a93729615c62afa4->m_frame.f_lineno = 53;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_f950103d5b47e844a93729615c62afa4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f950103d5b47e844a93729615c62afa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f950103d5b47e844a93729615c62afa4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f950103d5b47e844a93729615c62afa4,
        type_description_1,
        par_self,
        var_t,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_f950103d5b47e844a93729615c62afa4 == cache_frame_f950103d5b47e844a93729615c62afa4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f950103d5b47e844a93729615c62afa4);
        cache_frame_f950103d5b47e844a93729615c62afa4 = NULL;
    }

    assertFrameObject(frame_f950103d5b47e844a93729615c62afa4);

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
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
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

    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tl = python_pars[1];
    PyObject *var_math = NULL;
    PyObject *var_importlib = NULL;
    PyObject *var_sys = NULL;
    PyObject *var_EntryScale = NULL;
    PyObject *var_tkinter = NULL;
    PyObject *var_outerFrame = NULL;
    PyObject *var_entryScaleCommand = NULL;
    PyObject *var_es = NULL;
    PyObject *var_bf = NULL;
    PyObject *var_toStart = NULL;
    PyObject *var_toEnd = NULL;
    PyObject *var_jumpToStart = NULL;
    PyObject *var_doPlay = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_play = NULL;
    PyObject *var_jumpToEnd = NULL;
    PyObject *var_update = NULL;
    PyObject *var_onDestroy = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_9431ba1d3077c4d500d39770feec9deb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9431ba1d3077c4d500d39770feec9deb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$extensions_native$CInterval_extensions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_math == NULL);
        var_math = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_importlib == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_importlib = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_sys == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_sys = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9431ba1d3077c4d500d39770feec9deb)) {
        Py_XDECREF(cache_frame_9431ba1d3077c4d500d39770feec9deb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9431ba1d3077c4d500d39770feec9deb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9431ba1d3077c4d500d39770feec9deb = MAKE_FUNCTION_FRAME(tstate, codeobj_9431ba1d3077c4d500d39770feec9deb, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9431ba1d3077c4d500d39770feec9deb->m_type_description == NULL);
    frame_9431ba1d3077c4d500d39770feec9deb = cache_frame_9431ba1d3077c4d500d39770feec9deb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9431ba1d3077c4d500d39770feec9deb);
    assert(Py_REFCNT(frame_9431ba1d3077c4d500d39770feec9deb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 67;
        tmp_assign_source_4 = IMPORT_MODULE1(tstate, mod_consts[15]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_assign_source_4);
        tmp_assign_source_4 = Nuitka_GetModule(tstate, mod_consts[15]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_EntryScale == NULL);
        var_EntryScale = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 69;
        tmp_assign_source_5 = IMPORT_MODULE1(tstate, mod_consts[16]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tkinter == NULL);
        var_tkinter = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tl);
        tmp_cmp_expr_left_1 = par_tl;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_tkinter);
        tmp_called_instance_1 = var_tkinter;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 74;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[17]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_tl;
            assert(old != NULL);
            par_tl = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_tl);
        tmp_expression_value_1 = par_tl;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[19]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_tkinter;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_tl == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_tl;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 76;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outerFrame == NULL);
        var_outerFrame = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);


        tmp_assign_source_8 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand(tmp_defaults_1);

        assert(var_entryScaleCommand == NULL);
        var_entryScaleCommand = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_kw_call_dict_value_3_1;
        CHECK_OBJECT(var_EntryScale);
        tmp_expression_value_3 = var_EntryScale;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[24]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_outerFrame);
        tmp_kw_call_arg_value_0_1 = var_outerFrame;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 81;
        tmp_kw_call_dict_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[25]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[14];
        CHECK_OBJECT(var_math);
        tmp_expression_value_4 = var_math;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[26]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 82;
        tmp_mult_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[27]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = mod_consts[28];
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 82;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_right_1 = mod_consts[28];
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_entryScaleCommand);
        tmp_kw_call_dict_value_3_1 = var_entryScaleCommand;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_1 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        assert(var_es == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_es = tmp_assign_source_10;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_es);
        tmp_expression_value_5 = var_es;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 84;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[10]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[32]);
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 84;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_es);
        tmp_expression_value_6 = var_es;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[33]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_tkinter;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[35]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 85;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_tkinter;
        CHECK_OBJECT(var_outerFrame);
        tmp_args_element_value_3 = var_outerFrame;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 86;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[20], tmp_args_element_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bf == NULL);
        var_bf = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_3 = par_self;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_es);
        tmp_tuple_element_3 = var_es;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_3);


        tmp_assign_source_12 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart(tmp_defaults_2);

        assert(var_toStart == NULL);
        var_toStart = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_4 = par_self;
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_4);


        tmp_assign_source_13 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd(tmp_defaults_3);

        assert(var_toEnd == NULL);
        var_toEnd = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_tkinter;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[41]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bf);
        tmp_kw_call_arg_value_0_2 = var_bf;
        tmp_kw_call_dict_value_0_2 = mod_consts[42];
        CHECK_OBJECT(var_toStart);
        tmp_kw_call_dict_value_1_2 = var_toStart;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_jumpToStart == NULL);
        var_jumpToStart = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_5 = par_self;
        tmp_defaults_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_es);
        tmp_tuple_element_5 = var_es;
        PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_5);


        tmp_assign_source_15 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay(tmp_defaults_4);

        assert(var_doPlay == NULL);
        var_doPlay = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_6;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_tkinter;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[41]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bf);
        tmp_kw_call_arg_value_0_3 = var_bf;
        tmp_kw_call_dict_value_0_3 = mod_consts[46];
        CHECK_OBJECT(par_self);
        tmp_tuple_element_6 = par_self;
        tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_6);


        tmp_kw_call_dict_value_1_3 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda(tmp_defaults_5);

        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 99;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stop == NULL);
        var_stop = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_tkinter;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[41]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bf);
        tmp_kw_call_arg_value_0_4 = var_bf;
        tmp_kw_call_dict_value_0_4 = mod_consts[49];
        CHECK_OBJECT(var_doPlay);
        tmp_kw_call_dict_value_1_4 = var_doPlay;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 101;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_play == NULL);
        var_play = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        if (var_tkinter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_tkinter;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[41]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bf);
        tmp_kw_call_arg_value_0_5 = var_bf;
        tmp_kw_call_dict_value_0_5 = mod_consts[50];
        CHECK_OBJECT(var_toEnd);
        tmp_kw_call_dict_value_1_5 = var_toEnd;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_jumpToEnd == NULL);
        var_jumpToEnd = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_jumpToStart);
        tmp_expression_value_12 = var_jumpToStart;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[33]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_tkinter;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[51]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_tkinter;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[35]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 105;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_play);
        tmp_expression_value_15 = var_play;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[33]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_tkinter;
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[51]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_tkinter;
        tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[35]);
        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 106;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_0_3);
        Py_DECREF(tmp_kw_call_value_2_2);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_stop);
        tmp_expression_value_18 = var_stop;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[33]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = var_tkinter;
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[51]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_value_0_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_tkinter;
        tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[35]);
        if (tmp_kw_call_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 107;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_3};

            tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_value_0_4);
        Py_DECREF(tmp_kw_call_value_2_3);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(var_jumpToEnd);
        tmp_expression_value_21 = var_jumpToEnd;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[33]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = var_tkinter;
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[51]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var_tkinter;
        tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[35]);
        if (tmp_kw_call_value_2_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 108;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_4};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_14, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_0_5);
        Py_DECREF(tmp_kw_call_value_2_4);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_bf);
        tmp_expression_value_24 = var_bf;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[33]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = var_tkinter;
        tmp_kw_call_value_1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[35]);
        if (tmp_kw_call_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 109;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};

            tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_value_1_6);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_outerFrame);
        tmp_expression_value_26 = var_outerFrame;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[33]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[34];
        if (var_tkinter == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_tkinter;
        tmp_kw_call_value_1_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[35]);
        if (tmp_kw_call_value_1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 110;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_16, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_1_7);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_6;
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT(var_es);
        tmp_tuple_element_7 = var_es;
        tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_7);


        tmp_assign_source_19 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update(tmp_defaults_6);

        assert(var_update == NULL);
        var_update = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[11]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[11]);
        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[55]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_update);
        tmp_args_element_value_4 = var_update;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 116;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 117;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[56],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_7;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_8 = par_self;
        tmp_defaults_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_update);
        tmp_tuple_element_8 = var_update;
        PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_8);


        tmp_assign_source_20 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy(tmp_defaults_7);

        assert(var_onDestroy == NULL);
        var_onDestroy = tmp_assign_source_20;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_tl == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = par_tl;
        tmp_args_element_value_5 = mod_consts[61];
        CHECK_OBJECT(var_onDestroy);
        tmp_args_element_value_6 = var_onDestroy;
        frame_9431ba1d3077c4d500d39770feec9deb->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_12 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_7,
                mod_consts[60],
                call_args
            );
        }

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9431ba1d3077c4d500d39770feec9deb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9431ba1d3077c4d500d39770feec9deb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9431ba1d3077c4d500d39770feec9deb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9431ba1d3077c4d500d39770feec9deb,
        type_description_1,
        par_self,
        par_tl,
        var_math,
        var_importlib,
        var_sys,
        var_EntryScale,
        var_tkinter,
        var_outerFrame,
        var_entryScaleCommand,
        var_es,
        var_bf,
        var_toStart,
        var_toEnd,
        var_jumpToStart,
        var_doPlay,
        var_stop,
        var_play,
        var_jumpToEnd,
        var_update,
        var_onDestroy
    );


    // Release cached frame if used for exception.
    if (frame_9431ba1d3077c4d500d39770feec9deb == cache_frame_9431ba1d3077c4d500d39770feec9deb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9431ba1d3077c4d500d39770feec9deb);
        cache_frame_9431ba1d3077c4d500d39770feec9deb = NULL;
    }

    assertFrameObject(frame_9431ba1d3077c4d500d39770feec9deb);

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
    Py_XDECREF(par_tl);
    par_tl = NULL;
    CHECK_OBJECT(var_math);
    Py_DECREF(var_math);
    var_math = NULL;
    CHECK_OBJECT(var_importlib);
    Py_DECREF(var_importlib);
    var_importlib = NULL;
    CHECK_OBJECT(var_sys);
    Py_DECREF(var_sys);
    var_sys = NULL;
    CHECK_OBJECT(var_EntryScale);
    Py_DECREF(var_EntryScale);
    var_EntryScale = NULL;
    Py_XDECREF(var_tkinter);
    var_tkinter = NULL;
    CHECK_OBJECT(var_outerFrame);
    Py_DECREF(var_outerFrame);
    var_outerFrame = NULL;
    CHECK_OBJECT(var_entryScaleCommand);
    Py_DECREF(var_entryScaleCommand);
    var_entryScaleCommand = NULL;
    CHECK_OBJECT(var_es);
    Py_DECREF(var_es);
    var_es = NULL;
    CHECK_OBJECT(var_bf);
    Py_DECREF(var_bf);
    var_bf = NULL;
    CHECK_OBJECT(var_toStart);
    Py_DECREF(var_toStart);
    var_toStart = NULL;
    CHECK_OBJECT(var_toEnd);
    Py_DECREF(var_toEnd);
    var_toEnd = NULL;
    CHECK_OBJECT(var_jumpToStart);
    Py_DECREF(var_jumpToStart);
    var_jumpToStart = NULL;
    CHECK_OBJECT(var_doPlay);
    Py_DECREF(var_doPlay);
    var_doPlay = NULL;
    CHECK_OBJECT(var_stop);
    Py_DECREF(var_stop);
    var_stop = NULL;
    CHECK_OBJECT(var_play);
    Py_DECREF(var_play);
    var_play = NULL;
    CHECK_OBJECT(var_jumpToEnd);
    Py_DECREF(var_jumpToEnd);
    var_jumpToEnd = NULL;
    CHECK_OBJECT(var_update);
    Py_DECREF(var_update);
    var_update = NULL;
    CHECK_OBJECT(var_onDestroy);
    Py_DECREF(var_onDestroy);
    var_onDestroy = NULL;
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

    Py_XDECREF(par_tl);
    par_tl = NULL;
    CHECK_OBJECT(var_math);
    Py_DECREF(var_math);
    var_math = NULL;
    CHECK_OBJECT(var_importlib);
    Py_DECREF(var_importlib);
    var_importlib = NULL;
    CHECK_OBJECT(var_sys);
    Py_DECREF(var_sys);
    var_sys = NULL;
    Py_XDECREF(var_EntryScale);
    var_EntryScale = NULL;
    Py_XDECREF(var_tkinter);
    var_tkinter = NULL;
    Py_XDECREF(var_outerFrame);
    var_outerFrame = NULL;
    Py_XDECREF(var_entryScaleCommand);
    var_entryScaleCommand = NULL;
    Py_XDECREF(var_es);
    var_es = NULL;
    Py_XDECREF(var_bf);
    var_bf = NULL;
    Py_XDECREF(var_toStart);
    var_toStart = NULL;
    Py_XDECREF(var_toEnd);
    var_toEnd = NULL;
    Py_XDECREF(var_jumpToStart);
    var_jumpToStart = NULL;
    Py_XDECREF(var_doPlay);
    var_doPlay = NULL;
    Py_XDECREF(var_stop);
    var_stop = NULL;
    Py_XDECREF(var_play);
    var_play = NULL;
    Py_XDECREF(var_jumpToEnd);
    var_jumpToEnd = NULL;
    Py_XDECREF(var_update);
    var_update = NULL;
    Py_XDECREF(var_onDestroy);
    var_onDestroy = NULL;
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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    PyObject *par_s = python_pars[1];
    struct Nuitka_FrameObject *frame_528f4cc6b743b50e34033733a9270889;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_528f4cc6b743b50e34033733a9270889 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_528f4cc6b743b50e34033733a9270889)) {
        Py_XDECREF(cache_frame_528f4cc6b743b50e34033733a9270889);

#if _DEBUG_REFCOUNTS
        if (cache_frame_528f4cc6b743b50e34033733a9270889 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_528f4cc6b743b50e34033733a9270889 = MAKE_FUNCTION_FRAME(tstate, codeobj_528f4cc6b743b50e34033733a9270889, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_528f4cc6b743b50e34033733a9270889->m_type_description == NULL);
    frame_528f4cc6b743b50e34033733a9270889 = cache_frame_528f4cc6b743b50e34033733a9270889;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_528f4cc6b743b50e34033733a9270889);
    assert(Py_REFCNT(frame_528f4cc6b743b50e34033733a9270889) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_t);
        tmp_args_element_value_1 = par_t;
        frame_528f4cc6b743b50e34033733a9270889->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_s);
        tmp_called_instance_2 = par_s;
        frame_528f4cc6b743b50e34033733a9270889->m_frame.f_lineno = 79;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[64]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_528f4cc6b743b50e34033733a9270889, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_528f4cc6b743b50e34033733a9270889->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_528f4cc6b743b50e34033733a9270889, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_528f4cc6b743b50e34033733a9270889,
        type_description_1,
        par_t,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_528f4cc6b743b50e34033733a9270889 == cache_frame_528f4cc6b743b50e34033733a9270889) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_528f4cc6b743b50e34033733a9270889);
        cache_frame_528f4cc6b743b50e34033733a9270889 = NULL;
    }

    assertFrameObject(frame_528f4cc6b743b50e34033733a9270889);

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
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_es = python_pars[1];
    struct Nuitka_FrameObject *frame_b89d380581deda94a3b2bcbdcdb4524b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b89d380581deda94a3b2bcbdcdb4524b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b89d380581deda94a3b2bcbdcdb4524b)) {
        Py_XDECREF(cache_frame_b89d380581deda94a3b2bcbdcdb4524b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b89d380581deda94a3b2bcbdcdb4524b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b89d380581deda94a3b2bcbdcdb4524b = MAKE_FUNCTION_FRAME(tstate, codeobj_b89d380581deda94a3b2bcbdcdb4524b, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b89d380581deda94a3b2bcbdcdb4524b->m_type_description == NULL);
    frame_b89d380581deda94a3b2bcbdcdb4524b = cache_frame_b89d380581deda94a3b2bcbdcdb4524b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b89d380581deda94a3b2bcbdcdb4524b);
    assert(Py_REFCNT(frame_b89d380581deda94a3b2bcbdcdb4524b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_b89d380581deda94a3b2bcbdcdb4524b->m_frame.f_lineno = 89;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[63],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_s);
        tmp_called_instance_2 = par_s;
        frame_b89d380581deda94a3b2bcbdcdb4524b->m_frame.f_lineno = 90;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[64]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_b89d380581deda94a3b2bcbdcdb4524b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b89d380581deda94a3b2bcbdcdb4524b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b89d380581deda94a3b2bcbdcdb4524b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b89d380581deda94a3b2bcbdcdb4524b,
        type_description_1,
        par_s,
        par_es
    );


    // Release cached frame if used for exception.
    if (frame_b89d380581deda94a3b2bcbdcdb4524b == cache_frame_b89d380581deda94a3b2bcbdcdb4524b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b89d380581deda94a3b2bcbdcdb4524b);
        cache_frame_b89d380581deda94a3b2bcbdcdb4524b = NULL;
    }

    assertFrameObject(frame_b89d380581deda94a3b2bcbdcdb4524b);

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
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_dd6d77837905ea24c9ca3207dd39db71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd6d77837905ea24c9ca3207dd39db71 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd6d77837905ea24c9ca3207dd39db71)) {
        Py_XDECREF(cache_frame_dd6d77837905ea24c9ca3207dd39db71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd6d77837905ea24c9ca3207dd39db71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd6d77837905ea24c9ca3207dd39db71 = MAKE_FUNCTION_FRAME(tstate, codeobj_dd6d77837905ea24c9ca3207dd39db71, module_direct$extensions_native$CInterval_extensions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd6d77837905ea24c9ca3207dd39db71->m_type_description == NULL);
    frame_dd6d77837905ea24c9ca3207dd39db71 = cache_frame_dd6d77837905ea24c9ca3207dd39db71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd6d77837905ea24c9ca3207dd39db71);
    assert(Py_REFCNT(frame_dd6d77837905ea24c9ca3207dd39db71) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[63]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_dd6d77837905ea24c9ca3207dd39db71->m_frame.f_lineno = 92;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd6d77837905ea24c9ca3207dd39db71->m_frame.f_lineno = 92;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_s);
        tmp_called_instance_2 = par_s;
        frame_dd6d77837905ea24c9ca3207dd39db71->m_frame.f_lineno = 93;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[64]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_dd6d77837905ea24c9ca3207dd39db71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd6d77837905ea24c9ca3207dd39db71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd6d77837905ea24c9ca3207dd39db71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd6d77837905ea24c9ca3207dd39db71,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_dd6d77837905ea24c9ca3207dd39db71 == cache_frame_dd6d77837905ea24c9ca3207dd39db71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd6d77837905ea24c9ca3207dd39db71);
        cache_frame_dd6d77837905ea24c9ca3207dd39db71 = NULL;
    }

    assertFrameObject(frame_dd6d77837905ea24c9ca3207dd39db71);

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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_es = python_pars[1];
    struct Nuitka_FrameObject *frame_2fd5c15eed5a5d2bc07b03719816fad1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fd5c15eed5a5d2bc07b03719816fad1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fd5c15eed5a5d2bc07b03719816fad1)) {
        Py_XDECREF(cache_frame_2fd5c15eed5a5d2bc07b03719816fad1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fd5c15eed5a5d2bc07b03719816fad1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fd5c15eed5a5d2bc07b03719816fad1 = MAKE_FUNCTION_FRAME(tstate, codeobj_2fd5c15eed5a5d2bc07b03719816fad1, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fd5c15eed5a5d2bc07b03719816fad1->m_type_description == NULL);
    frame_2fd5c15eed5a5d2bc07b03719816fad1 = cache_frame_2fd5c15eed5a5d2bc07b03719816fad1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2fd5c15eed5a5d2bc07b03719816fad1);
    assert(Py_REFCNT(frame_2fd5c15eed5a5d2bc07b03719816fad1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_es);
        tmp_expression_value_2 = par_es;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[67]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2fd5c15eed5a5d2bc07b03719816fad1->m_frame.f_lineno = 97;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2fd5c15eed5a5d2bc07b03719816fad1->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_2fd5c15eed5a5d2bc07b03719816fad1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fd5c15eed5a5d2bc07b03719816fad1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fd5c15eed5a5d2bc07b03719816fad1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fd5c15eed5a5d2bc07b03719816fad1,
        type_description_1,
        par_s,
        par_es
    );


    // Release cached frame if used for exception.
    if (frame_2fd5c15eed5a5d2bc07b03719816fad1 == cache_frame_2fd5c15eed5a5d2bc07b03719816fad1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fd5c15eed5a5d2bc07b03719816fad1);
        cache_frame_2fd5c15eed5a5d2bc07b03719816fad1 = NULL;
    }

    assertFrameObject(frame_2fd5c15eed5a5d2bc07b03719816fad1);

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
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_a43b2e5bd41368949fd436f824bdc152;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a43b2e5bd41368949fd436f824bdc152 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a43b2e5bd41368949fd436f824bdc152)) {
        Py_XDECREF(cache_frame_a43b2e5bd41368949fd436f824bdc152);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a43b2e5bd41368949fd436f824bdc152 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a43b2e5bd41368949fd436f824bdc152 = MAKE_FUNCTION_FRAME(tstate, codeobj_a43b2e5bd41368949fd436f824bdc152, module_direct$extensions_native$CInterval_extensions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a43b2e5bd41368949fd436f824bdc152->m_type_description == NULL);
    frame_a43b2e5bd41368949fd436f824bdc152 = cache_frame_a43b2e5bd41368949fd436f824bdc152;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a43b2e5bd41368949fd436f824bdc152);
    assert(Py_REFCNT(frame_a43b2e5bd41368949fd436f824bdc152) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_a43b2e5bd41368949fd436f824bdc152->m_frame.f_lineno = 100;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[64]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_a43b2e5bd41368949fd436f824bdc152, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a43b2e5bd41368949fd436f824bdc152->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a43b2e5bd41368949fd436f824bdc152, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a43b2e5bd41368949fd436f824bdc152,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_a43b2e5bd41368949fd436f824bdc152 == cache_frame_a43b2e5bd41368949fd436f824bdc152) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a43b2e5bd41368949fd436f824bdc152);
        cache_frame_a43b2e5bd41368949fd436f824bdc152 = NULL;
    }

    assertFrameObject(frame_a43b2e5bd41368949fd436f824bdc152);

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


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    PyObject *par_es = python_pars[1];
    struct Nuitka_FrameObject *frame_b194ef56f056ff8752956040cda850a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b194ef56f056ff8752956040cda850a6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b194ef56f056ff8752956040cda850a6)) {
        Py_XDECREF(cache_frame_b194ef56f056ff8752956040cda850a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b194ef56f056ff8752956040cda850a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b194ef56f056ff8752956040cda850a6 = MAKE_FUNCTION_FRAME(tstate, codeobj_b194ef56f056ff8752956040cda850a6, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b194ef56f056ff8752956040cda850a6->m_type_description == NULL);
    frame_b194ef56f056ff8752956040cda850a6 = cache_frame_b194ef56f056ff8752956040cda850a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b194ef56f056ff8752956040cda850a6);
    assert(Py_REFCNT(frame_b194ef56f056ff8752956040cda850a6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_es);
        tmp_expression_value_1 = par_es;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_tuple_element_1 = par_t;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[32]);
        frame_b194ef56f056ff8752956040cda850a6->m_frame.f_lineno = 113;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_b194ef56f056ff8752956040cda850a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b194ef56f056ff8752956040cda850a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b194ef56f056ff8752956040cda850a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b194ef56f056ff8752956040cda850a6,
        type_description_1,
        par_t,
        par_es
    );


    // Release cached frame if used for exception.
    if (frame_b194ef56f056ff8752956040cda850a6 == cache_frame_b194ef56f056ff8752956040cda850a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b194ef56f056ff8752956040cda850a6);
        cache_frame_b194ef56f056ff8752956040cda850a6 = NULL;
    }

    assertFrameObject(frame_b194ef56f056ff8752956040cda850a6);

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
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_es);
    Py_DECREF(par_es);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_u = python_pars[2];
    struct Nuitka_FrameObject *frame_39559d5e18b0f67a859794e1159e3843;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_39559d5e18b0f67a859794e1159e3843 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39559d5e18b0f67a859794e1159e3843)) {
        Py_XDECREF(cache_frame_39559d5e18b0f67a859794e1159e3843);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39559d5e18b0f67a859794e1159e3843 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39559d5e18b0f67a859794e1159e3843 = MAKE_FUNCTION_FRAME(tstate, codeobj_39559d5e18b0f67a859794e1159e3843, module_direct$extensions_native$CInterval_extensions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39559d5e18b0f67a859794e1159e3843->m_type_description == NULL);
    frame_39559d5e18b0f67a859794e1159e3843 = cache_frame_39559d5e18b0f67a859794e1159e3843;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_39559d5e18b0f67a859794e1159e3843);
    assert(Py_REFCNT(frame_39559d5e18b0f67a859794e1159e3843) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_u);
        tmp_cmp_expr_left_1 = par_u;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_3 = par_s;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[68]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_u);
        tmp_args_element_value_1 = par_u;
        frame_39559d5e18b0f67a859794e1159e3843->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_39559d5e18b0f67a859794e1159e3843, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39559d5e18b0f67a859794e1159e3843->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39559d5e18b0f67a859794e1159e3843, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39559d5e18b0f67a859794e1159e3843,
        type_description_1,
        par_e,
        par_s,
        par_u
    );


    // Release cached frame if used for exception.
    if (frame_39559d5e18b0f67a859794e1159e3843 == cache_frame_39559d5e18b0f67a859794e1159e3843) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39559d5e18b0f67a859794e1159e3843);
        cache_frame_39559d5e18b0f67a859794e1159e3843 = NULL;
    }

    assertFrameObject(frame_39559d5e18b0f67a859794e1159e3843);

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
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_u);
    Py_DECREF(par_u);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_u);
    Py_DECREF(par_u);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__1_setT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__1_setT,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20d410c5dcd92e04688b3165aac1c22e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__2_play(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__2_play,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57ba3029d6488224dfba523c9dcc520e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__3_stop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__3_stop,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a86e788ef3ba7f61a4cdd802b980e08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ede6f705d39f506838fcc6be7b8937f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f950103d5b47e844a93729615c62afa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9431ba1d3077c4d500d39770feec9deb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[23],
#endif
        codeobj_528f4cc6b743b50e34033733a9270889,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_b89d380581deda94a3b2bcbdcdb4524b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_dd6d77837905ea24c9ca3207dd39db71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_2fd5c15eed5a5d2bc07b03719816fad1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_a43b2e5bd41368949fd436f824bdc152,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_b194ef56f056ff8752956040cda850a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_39559d5e18b0f67a859794e1159e3843,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$extensions_native$CInterval_extensions,
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

function_impl_code functable_direct$extensions_native$CInterval_extensions[] = {
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__1_entryScaleCommand,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__2_toStart,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__3_toEnd,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__4_doPlay,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__5_lambda,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__6_update,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls$$$function__7_onDestroy,
    impl_direct$extensions_native$CInterval_extensions$$$function__1_setT,
    impl_direct$extensions_native$CInterval_extensions$$$function__2_play,
    impl_direct$extensions_native$CInterval_extensions$$$function__3_stop,
    impl_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT,
    impl_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent,
    impl_direct$extensions_native$CInterval_extensions$$$function__6_popupControls,
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

    function_impl_code *current = functable_direct$extensions_native$CInterval_extensions;
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

    if (offset > sizeof(functable_direct$extensions_native$CInterval_extensions) || offset < 0) {
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
        functable_direct$extensions_native$CInterval_extensions[offset],
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
        module_direct$extensions_native$CInterval_extensions,
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
PyObject *modulecode_direct$extensions_native$CInterval_extensions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.extensions_native.CInterval_extensions");

    // Store the module for future use.
    module_direct$extensions_native$CInterval_extensions = module;

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
        PRINT_STRING("direct.extensions_native.CInterval_extensions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.extensions_native.CInterval_extensions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$extensions_native$CInterval_extensions\n");

    moduledict_direct$extensions_native$CInterval_extensions = MODULE_DICT(module_direct$extensions_native$CInterval_extensions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$extensions_native$CInterval_extensions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$extensions_native$CInterval_extensions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[105]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$extensions_native$CInterval_extensions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$extensions_native$CInterval_extensions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$extensions_native$CInterval_extensions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$extensions_native$CInterval_extensions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$extensions_native$CInterval_extensions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_95ce0ef60e98c249953f885962f22f19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_2);
    }
    frame_95ce0ef60e98c249953f885962f22f19 = MAKE_MODULE_FRAME(codeobj_95ce0ef60e98c249953f885962f22f19, module_direct$extensions_native$CInterval_extensions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_95ce0ef60e98c249953f885962f22f19);
    assert(Py_REFCNT(frame_95ce0ef60e98c249953f885962f22f19) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[72], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[73], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[75];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$extensions_native$CInterval_extensions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[76];
        tmp_level_value_1 = mod_consts[14];
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$extensions_native$CInterval_extensions,
                mod_consts[77],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[78];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$extensions_native$CInterval_extensions;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[79];
        tmp_level_value_2 = mod_consts[34];
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$extensions_native$CInterval_extensions,
                mod_consts[80],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[81];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$extensions_native$CInterval_extensions;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[82];
        tmp_level_value_3 = mod_consts[14];
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$extensions_native$CInterval_extensions,
                mod_consts[83],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_6);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 5;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[84],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[86]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__1_setT();

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[63]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[86]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[0];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[63]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[63]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 17;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[87];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_8 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__2_play(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_8);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[88]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[88]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__3_stop();

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_9);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        assert(!(tmp_args_element_value_5 == NULL));
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[89]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__4_setFinalT();

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_10);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        assert(!(tmp_args_element_value_7 == NULL));
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[90]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[90]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__5_privPostEvent();

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        assert(!(tmp_args_element_value_9 == NULL));
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[1]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[1]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[91];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_12 = MAKE_FUNCTION_direct$extensions_native$CInterval_extensions$$$function__6_popupControls(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_12);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        assert(!(tmp_args_element_value_11 == NULL));
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_95ce0ef60e98c249953f885962f22f19->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_direct$extensions_native$CInterval_extensions, mod_consts[92]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[92]);
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }



    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95ce0ef60e98c249953f885962f22f19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95ce0ef60e98c249953f885962f22f19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95ce0ef60e98c249953f885962f22f19, exception_lineno);
    }



    assertFrameObject(frame_95ce0ef60e98c249953f885962f22f19);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.extensions_native.CInterval_extensions", false);

    Py_INCREF(module_direct$extensions_native$CInterval_extensions);
    return module_direct$extensions_native$CInterval_extensions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$extensions_native$CInterval_extensions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$extensions_native$CInterval_extensions", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
