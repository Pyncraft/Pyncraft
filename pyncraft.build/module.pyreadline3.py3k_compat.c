/* Generated code for Python module 'pyreadline3.py3k_compat'
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

/* The "module_pyreadline3$py3k_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline3$py3k_compat;
PyDictObject *moduledict_pyreadline3$py3k_compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[31];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[31];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyreadline3.py3k_compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 31; i++) {
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
void checkModuleConstants_pyreadline3$py3k_compat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 31; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6f444e2c68473e4c35e7b3832af0fd22;
static PyCodeObject *codeobj_f7aff556623b3ddfceeb4c48a2afe152;
static PyCodeObject *codeobj_055c9f4e46a5f6604d799158236e04a2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[26]); CHECK_OBJECT(module_filename_obj);
    codeobj_6f444e2c68473e4c35e7b3832af0fd22 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_UNICODE_LITERALS, mod_consts[27], mod_consts[27], NULL, NULL, 0, 0, 0);
    codeobj_f7aff556623b3ddfceeb4c48a2afe152 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[25], mod_consts[25], mod_consts[28], NULL, 3, 0, 0);
    codeobj_055c9f4e46a5f6604d799158236e04a2 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts[23], mod_consts[23], mod_consts[29], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__1_is_callable();


static PyObject *MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__2_execfile(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pyreadline3$py3k_compat$$$function__1_is_callable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_055c9f4e46a5f6604d799158236e04a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_055c9f4e46a5f6604d799158236e04a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_055c9f4e46a5f6604d799158236e04a2)) {
        Py_XDECREF(cache_frame_055c9f4e46a5f6604d799158236e04a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_055c9f4e46a5f6604d799158236e04a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_055c9f4e46a5f6604d799158236e04a2 = MAKE_FUNCTION_FRAME(tstate, codeobj_055c9f4e46a5f6604d799158236e04a2, module_pyreadline3$py3k_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_055c9f4e46a5f6604d799158236e04a2->m_type_description == NULL);
    frame_055c9f4e46a5f6604d799158236e04a2 = cache_frame_055c9f4e46a5f6604d799158236e04a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_055c9f4e46a5f6604d799158236e04a2);
    assert(Py_REFCNT(frame_055c9f4e46a5f6604d799158236e04a2) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_055c9f4e46a5f6604d799158236e04a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055c9f4e46a5f6604d799158236e04a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055c9f4e46a5f6604d799158236e04a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_055c9f4e46a5f6604d799158236e04a2,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_055c9f4e46a5f6604d799158236e04a2 == cache_frame_055c9f4e46a5f6604d799158236e04a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_055c9f4e46a5f6604d799158236e04a2);
        cache_frame_055c9f4e46a5f6604d799158236e04a2 = NULL;
    }

    assertFrameObject(frame_055c9f4e46a5f6604d799158236e04a2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$py3k_compat$$$function__2_execfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_fname = python_pars[0];
    PyObject *par_glob = python_pars[1];
    PyObject *par_loc = python_pars[2];
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_f7aff556623b3ddfceeb4c48a2afe152;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_pyreadline3$py3k_compat$$$function__2_execfile = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f7aff556623b3ddfceeb4c48a2afe152 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_loc);
        tmp_cmp_expr_left_1 = par_loc;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_loc);
        tmp_assign_source_1 = par_loc;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_glob);
        tmp_assign_source_1 = par_glob;
        condexpr_end_1:;
        {
            PyObject *old = par_loc;
            assert(old != NULL);
            par_loc = tmp_assign_source_1;
            Py_INCREF(par_loc);
            Py_DECREF(old);
        }

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f7aff556623b3ddfceeb4c48a2afe152)) {
        Py_XDECREF(cache_frame_f7aff556623b3ddfceeb4c48a2afe152);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7aff556623b3ddfceeb4c48a2afe152 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7aff556623b3ddfceeb4c48a2afe152 = MAKE_FUNCTION_FRAME(tstate, codeobj_f7aff556623b3ddfceeb4c48a2afe152, module_pyreadline3$py3k_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7aff556623b3ddfceeb4c48a2afe152->m_type_description == NULL);
    frame_f7aff556623b3ddfceeb4c48a2afe152 = cache_frame_f7aff556623b3ddfceeb4c48a2afe152;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7aff556623b3ddfceeb4c48a2afe152);
    assert(Py_REFCNT(frame_f7aff556623b3ddfceeb4c48a2afe152) == 2);

    // Framed code:
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT(par_glob);
            tmp_assign_source_2 = par_glob;
            assert(tmp_exec_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_2);
            tmp_exec_call_1__globals = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(par_loc);
            tmp_assign_source_3 = par_loc;
            assert(tmp_exec_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_3);
            tmp_exec_call_1__locals = tmp_assign_source_3;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_cmp_expr_left_2 = tmp_exec_call_1__locals;
            tmp_cmp_expr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_4;
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_cmp_expr_left_3 = tmp_exec_call_1__globals;
            tmp_cmp_expr_right_3 = Py_None;
            tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            if (locals_pyreadline3$py3k_compat$$$function__2_execfile == NULL) locals_pyreadline3$py3k_compat$$$function__2_execfile = MAKE_DICT_EMPTY();
            tmp_assign_source_4 = locals_pyreadline3$py3k_compat$$$function__2_execfile;
            Py_INCREF(tmp_assign_source_4);
            if (par_fname != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_fname);
                value = par_fname;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_4, (Nuitka_StringObject *)mod_consts[1], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_4, mod_consts[1]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_glob != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_glob);
                value = par_glob;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_4, (Nuitka_StringObject *)mod_consts[2], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_4, mod_consts[2]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_loc != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_loc);
                value = par_loc;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_4, (Nuitka_StringObject *)mod_consts[3], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_4, mod_consts[3]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_assign_source_4 = tmp_exec_call_1__globals;
            Py_INCREF(tmp_assign_source_4);
            condexpr_end_2:;
            {
                PyObject *old = tmp_exec_call_1__locals;
                assert(old != NULL);
                tmp_exec_call_1__locals = tmp_assign_source_4;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
        {
            bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_cmp_expr_left_4 = tmp_exec_call_1__globals;
            tmp_cmp_expr_right_4 = Py_None;
            tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
            if (tmp_condition_result_4 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = (PyObject *)moduledict_pyreadline3$py3k_compat;
            {
                PyObject *old = tmp_exec_call_1__globals;
                assert(old != NULL);
                tmp_exec_call_1__globals = tmp_assign_source_5;
                Py_INCREF(tmp_exec_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_compile_source_1;
            PyObject *tmp_compile_filename_1;
            PyObject *tmp_compile_mode_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_open_filename_1;
            PyObject *tmp_open_mode_1;
            PyObject *tmp_open_encoding_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT(par_fname);
            tmp_open_filename_1 = par_fname;
            tmp_open_mode_1 = mod_consts[4];
            tmp_open_encoding_1 = mod_consts[5];
            tmp_called_instance_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_f7aff556623b3ddfceeb4c48a2afe152->m_frame.f_lineno = 18;
            tmp_compile_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[6]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_compile_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_fname);
            tmp_compile_filename_1 = par_fname;
            tmp_compile_mode_1 = mod_consts[7];
            tmp_eval_source_1 = COMPILE_CODE(tstate, tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL);
            Py_DECREF(tmp_compile_source_1);
            if (tmp_eval_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_eval_globals_1 = tmp_exec_call_1__globals;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_eval_locals_1 = tmp_exec_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tstate, tmp_eval_source_1, mod_consts[8], mod_consts[7], NULL, NULL, NULL);
            Py_DECREF(tmp_eval_source_1);
            if (tmp_eval_compiled_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_outline_return_value_1 = EVAL_CODE(tstate, tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1, NULL);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_outline_return_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        Py_DECREF(tmp_outline_return_value_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7aff556623b3ddfceeb4c48a2afe152, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7aff556623b3ddfceeb4c48a2afe152->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7aff556623b3ddfceeb4c48a2afe152, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7aff556623b3ddfceeb4c48a2afe152,
        type_description_1,
        par_fname,
        par_glob,
        par_loc
    );


    // Release cached frame if used for exception.
    if (frame_f7aff556623b3ddfceeb4c48a2afe152 == cache_frame_f7aff556623b3ddfceeb4c48a2afe152) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7aff556623b3ddfceeb4c48a2afe152);
        cache_frame_f7aff556623b3ddfceeb4c48a2afe152 = NULL;
    }

    assertFrameObject(frame_f7aff556623b3ddfceeb4c48a2afe152);

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
    CHECK_OBJECT(par_loc);
    Py_DECREF(par_loc);
    par_loc = NULL;
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

    CHECK_OBJECT(par_loc);
    Py_DECREF(par_loc);
    par_loc = NULL;
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
    Py_XDECREF(locals_pyreadline3$py3k_compat$$$function__2_execfile);

    CHECK_OBJECT(par_fname);
    Py_DECREF(par_fname);
    CHECK_OBJECT(par_glob);
    Py_DECREF(par_glob);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_pyreadline3$py3k_compat$$$function__2_execfile);

    CHECK_OBJECT(par_fname);
    Py_DECREF(par_fname);
    CHECK_OBJECT(par_glob);
    Py_DECREF(par_glob);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__1_is_callable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$py3k_compat$$$function__1_is_callable,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_055c9f4e46a5f6604d799158236e04a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$py3k_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__2_execfile(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$py3k_compat$$$function__2_execfile,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7aff556623b3ddfceeb4c48a2afe152,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$py3k_compat,
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

function_impl_code functable_pyreadline3$py3k_compat[] = {
    impl_pyreadline3$py3k_compat$$$function__1_is_callable,
    impl_pyreadline3$py3k_compat$$$function__2_execfile,
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

    function_impl_code *current = functable_pyreadline3$py3k_compat;
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

    if (offset > sizeof(functable_pyreadline3$py3k_compat) || offset < 0) {
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
        functable_pyreadline3$py3k_compat[offset],
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
        module_pyreadline3$py3k_compat,
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
PyObject *modulecode_pyreadline3$py3k_compat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyreadline3.py3k_compat");

    // Store the module for future use.
    module_pyreadline3$py3k_compat = module;

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
        PRINT_STRING("pyreadline3.py3k_compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyreadline3.py3k_compat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyreadline3$py3k_compat\n");

    moduledict_pyreadline3$py3k_compat = MODULE_DICT(module_pyreadline3$py3k_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyreadline3$py3k_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$py3k_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[30]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$py3k_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$py3k_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$py3k_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline3$py3k_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyreadline3$py3k_compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6f444e2c68473e4c35e7b3832af0fd22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    frame_6f444e2c68473e4c35e7b3832af0fd22 = MAKE_MODULE_FRAME(codeobj_6f444e2c68473e4c35e7b3832af0fd22, module_pyreadline3$py3k_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f444e2c68473e4c35e7b3832af0fd22);
    assert(Py_REFCNT(frame_6f444e2c68473e4c35e7b3832af0fd22) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[15]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[16]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[17]);
        }
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[19];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyreadline3$py3k_compat;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[20];
        tmp_level_value_1 = mod_consts[21];
        frame_6f444e2c68473e4c35e7b3832af0fd22->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyreadline3$py3k_compat,
                mod_consts[0],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f444e2c68473e4c35e7b3832af0fd22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f444e2c68473e4c35e7b3832af0fd22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f444e2c68473e4c35e7b3832af0fd22, exception_lineno);
    }



    assertFrameObject(frame_6f444e2c68473e4c35e7b3832af0fd22);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__1_is_callable();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[24];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_pyreadline3$py3k_compat$$$function__2_execfile(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyreadline3.py3k_compat", false);

    Py_INCREF(module_pyreadline3$py3k_compat);
    return module_pyreadline3$py3k_compat;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$py3k_compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyreadline3$py3k_compat", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
