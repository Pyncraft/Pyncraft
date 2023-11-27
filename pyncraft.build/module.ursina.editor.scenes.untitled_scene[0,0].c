/* Generated code for Python module 'ursina.editor.scenes.untitled_scene[0,0]'
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

/* The "module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$;
PyDictObject *moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[118];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[118];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("ursina.editor.scenes.untitled_scene[0,0]"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 118; i++) {
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
void checkModuleConstants_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 118; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_21ea2455e769d34d3d3115643240a982;
static PyCodeObject *codeobj_9bb543c82a6530353ea69d388b2b6cc3;
static PyCodeObject *codeobj_51e27fbc054824473574d2b1b5a571cd;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[113]); CHECK_OBJECT(module_filename_obj);
    codeobj_21ea2455e769d34d3d3115643240a982 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[114], mod_consts[114], NULL, NULL, 0, 0, 0);
    codeobj_9bb543c82a6530353ea69d388b2b6cc3 = MAKE_CODE_OBJECT(module_filename_obj, 2, 0, mod_consts[103], mod_consts[103], mod_consts[115], NULL, 0, 0, 0);
    codeobj_51e27fbc054824473574d2b1b5a571cd = MAKE_CODE_OBJECT(module_filename_obj, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[1], mod_consts[1], mod_consts[116], mod_consts[115], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_51e27fbc054824473574d2b1b5a571cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51e27fbc054824473574d2b1b5a571cd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51e27fbc054824473574d2b1b5a571cd)) {
        Py_XDECREF(cache_frame_51e27fbc054824473574d2b1b5a571cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51e27fbc054824473574d2b1b5a571cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51e27fbc054824473574d2b1b5a571cd = MAKE_FUNCTION_FRAME(tstate, codeobj_51e27fbc054824473574d2b1b5a571cd, module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51e27fbc054824473574d2b1b5a571cd->m_type_description == NULL);
    frame_51e27fbc054824473574d2b1b5a571cd = cache_frame_51e27fbc054824473574d2b1b5a571cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_51e27fbc054824473574d2b1b5a571cd);
    assert(Py_REFCNT(frame_51e27fbc054824473574d2b1b5a571cd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 4;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__1_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_6_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_1 = par_self;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 5;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_2, mod_consts[4]);

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[5];
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 5;
        tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_3, mod_consts[6]);

        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = mod_consts[7];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_1 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 5;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_2 = par_self;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 6;
        tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[12]);

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 6;
        tmp_kw_call_value_2_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[13]);

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_2 = mod_consts[14];
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 6;
        tmp_kw_call_value_4_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[6]);

        if (tmp_kw_call_value_4_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_2 = mod_consts[15];
        tmp_kw_call_value_6_2 = mod_consts[16];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 6;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_expression_value_4;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_3 = par_self;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 7;
        tmp_kw_call_value_1_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[18]);

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 7;
        tmp_kw_call_value_2_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_10, mod_consts[19]);

        if (tmp_kw_call_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_3 = mod_consts[20];
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_2_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 7;
        tmp_kw_call_value_4_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_11, mod_consts[6]);

        if (tmp_kw_call_value_4_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_2_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_3 = mod_consts[21];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_2_3);
            Py_DECREF(tmp_kw_call_value_4_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_kw_call_value_6_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_2_3);
            Py_DECREF(tmp_kw_call_value_4_3);

            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 7;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_kw_call_value_1_3);
        Py_DECREF(tmp_kw_call_value_2_3);
        Py_DECREF(tmp_kw_call_value_4_3);
        Py_DECREF(tmp_kw_call_value_6_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_14;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_4 = par_self;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
        tmp_kw_call_value_1_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_13, mod_consts[24]);

        if (tmp_kw_call_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_4 = mod_consts[7];
        tmp_kw_call_value_3_4 = mod_consts[25];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_4);

            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
        if (tmp_kw_call_value_4_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_4);

            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_4);
            Py_DECREF(tmp_kw_call_value_4_4);

            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[26]);

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_4);
            Py_DECREF(tmp_kw_call_value_4_4);

            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_4 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_value_21;
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 0, tmp_list_element_1);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_15, mod_consts[27]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 1, tmp_list_element_1);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_16, mod_consts[28]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 2, tmp_list_element_1);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_17, mod_consts[29]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 3, tmp_list_element_1);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_18, mod_consts[30]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 4, tmp_list_element_1);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_19, mod_consts[31]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 5, tmp_list_element_1);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_20, mod_consts[32]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 6, tmp_list_element_1);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_21, mod_consts[33]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_1 = "ooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_4, 7, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_1_4);
        Py_DECREF(tmp_kw_call_value_4_4);
        Py_DECREF(tmp_kw_call_value_5_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 8;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_kw_call_value_1_4);
        Py_DECREF(tmp_kw_call_value_4_4);
        Py_DECREF(tmp_kw_call_value_5_4);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_5;
        PyObject *tmp_kw_call_value_5_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_25;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_5 = par_self;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
        tmp_kw_call_value_1_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_23, mod_consts[35]);

        if (tmp_kw_call_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
        tmp_kw_call_value_2_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_24, mod_consts[36]);

        if (tmp_kw_call_value_2_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_5 = mod_consts[7];
        tmp_kw_call_value_4_5 = mod_consts[25];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_2_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[9]);
        if (tmp_kw_call_value_5_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_2_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_2_5);
            Py_DECREF(tmp_kw_call_value_5_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
        tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_25, mod_consts[37]);

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_2_5);
            Py_DECREF(tmp_kw_call_value_5_5);

            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_4 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_value_30;
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 0, tmp_list_element_2);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_26, mod_consts[38]);

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 1, tmp_list_element_2);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_27, mod_consts[39]);

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 2, tmp_list_element_2);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_28, mod_consts[40]);

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 3, tmp_list_element_2);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_29, mod_consts[41]);

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 4, tmp_list_element_2);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
            tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_30, mod_consts[32]);

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "ooc";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 5, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_kw_call_value_1_5);
        Py_DECREF(tmp_kw_call_value_2_5);
        Py_DECREF(tmp_kw_call_value_5_5);
        Py_DECREF(tmp_kw_call_value_6_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 9;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5, tmp_kw_call_value_6_4};

            tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_22, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_value_1_5);
        Py_DECREF(tmp_kw_call_value_2_5);
        Py_DECREF(tmp_kw_call_value_5_5);
        Py_DECREF(tmp_kw_call_value_6_4);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_called_value_32;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_called_value_33;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_6;
        PyObject *tmp_kw_call_value_5_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_6_5;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_34;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_6 = par_self;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
        tmp_kw_call_value_1_6 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_32, mod_consts[43]);

        if (tmp_kw_call_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
        tmp_kw_call_value_2_6 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_33, mod_consts[36]);

        if (tmp_kw_call_value_2_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_6 = mod_consts[7];
        tmp_kw_call_value_4_6 = mod_consts[25];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_2_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[9]);
        if (tmp_kw_call_value_5_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_2_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_2_6);
            Py_DECREF(tmp_kw_call_value_5_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
        tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_34, mod_consts[37]);

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_2_6);
            Py_DECREF(tmp_kw_call_value_5_6);

            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_5 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_called_value_38;
            PyObject *tmp_called_value_39;
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 0, tmp_list_element_3);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_35, mod_consts[38]);

            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 1, tmp_list_element_3);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_36, mod_consts[39]);

            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 2, tmp_list_element_3);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_37, mod_consts[40]);

            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 3, tmp_list_element_3);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_38, mod_consts[41]);

            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 4, tmp_list_element_3);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
            tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_39, mod_consts[32]);

            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooc";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_5, 5, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_kw_call_value_1_6);
        Py_DECREF(tmp_kw_call_value_2_6);
        Py_DECREF(tmp_kw_call_value_5_6);
        Py_DECREF(tmp_kw_call_value_6_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 10;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6, tmp_kw_call_value_6_5};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_31, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_value_1_6);
        Py_DECREF(tmp_kw_call_value_2_6);
        Py_DECREF(tmp_kw_call_value_5_6);
        Py_DECREF(tmp_kw_call_value_6_5);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_called_value_41;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_called_value_42;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_kw_call_value_4_7;
        PyObject *tmp_called_value_43;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_kw_call_value_6_6;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_8_1;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_7 = par_self;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 11;
        tmp_kw_call_value_1_7 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_41, mod_consts[44]);

        if (tmp_kw_call_value_1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 11;
        tmp_kw_call_value_2_7 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_42, mod_consts[45]);

        if (tmp_kw_call_value_2_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_7 = mod_consts[5];
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);
            Py_DECREF(tmp_kw_call_value_2_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 11;
        tmp_kw_call_value_4_7 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_43, mod_consts[6]);

        if (tmp_kw_call_value_4_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);
            Py_DECREF(tmp_kw_call_value_2_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_7 = mod_consts[46];
        tmp_kw_call_value_6_6 = mod_consts[47];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);
            Py_DECREF(tmp_kw_call_value_2_7);
            Py_DECREF(tmp_kw_call_value_4_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[9]);
        if (tmp_kw_call_value_7_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_7);
            Py_DECREF(tmp_kw_call_value_2_7);
            Py_DECREF(tmp_kw_call_value_4_7);

            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_1 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 11;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7, tmp_kw_call_value_6_6, tmp_kw_call_value_7_2, tmp_kw_call_value_8_1};

            tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_40, kw_values, mod_consts[48]);
        }

        Py_DECREF(tmp_kw_call_value_1_7);
        Py_DECREF(tmp_kw_call_value_2_7);
        Py_DECREF(tmp_kw_call_value_4_7);
        Py_DECREF(tmp_kw_call_value_7_2);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_called_value_45;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_called_value_46;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_kw_call_value_5_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_6_7;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_8 = par_self;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 12;
        tmp_kw_call_value_1_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_45, mod_consts[49]);

        if (tmp_kw_call_value_1_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_8 = mod_consts[5];
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_8);

            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 12;
        tmp_kw_call_value_3_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_46, mod_consts[6]);

        if (tmp_kw_call_value_3_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_8);

            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_8 = mod_consts[7];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_8);
            Py_DECREF(tmp_kw_call_value_3_8);

            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[9]);
        if (tmp_kw_call_value_5_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_8);
            Py_DECREF(tmp_kw_call_value_3_8);

            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_7 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 12;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8, tmp_kw_call_value_6_7};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_44, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_1_8);
        Py_DECREF(tmp_kw_call_value_3_8);
        Py_DECREF(tmp_kw_call_value_5_8);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_called_value_48;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_called_value_49;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_kw_call_value_5_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_6_8;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_9 = par_self;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 13;
        tmp_kw_call_value_1_9 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_48, mod_consts[50]);

        if (tmp_kw_call_value_1_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_9 = mod_consts[5];
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_9);

            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 13;
        tmp_kw_call_value_3_9 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_49, mod_consts[6]);

        if (tmp_kw_call_value_3_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_9);

            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_9 = mod_consts[7];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_9);
            Py_DECREF(tmp_kw_call_value_3_9);

            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[9]);
        if (tmp_kw_call_value_5_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_9);
            Py_DECREF(tmp_kw_call_value_3_9);

            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_8 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 13;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_8};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_47, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_1_9);
        Py_DECREF(tmp_kw_call_value_3_9);
        Py_DECREF(tmp_kw_call_value_5_9);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_called_value_51;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_called_value_52;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_called_value_53;
        PyObject *tmp_kw_call_value_4_10;
        PyObject *tmp_kw_call_value_5_10;
        PyObject *tmp_called_value_54;
        PyObject *tmp_kw_call_value_6_9;
        PyObject *tmp_kw_call_value_7_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_8_2;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_10 = par_self;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 14;
        tmp_kw_call_value_1_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_51, mod_consts[51]);

        if (tmp_kw_call_value_1_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 14;
        tmp_kw_call_value_2_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_52, mod_consts[52]);

        if (tmp_kw_call_value_2_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 14;
        tmp_kw_call_value_3_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_53, mod_consts[53]);

        if (tmp_kw_call_value_3_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_10 = mod_consts[5];
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);
            Py_DECREF(tmp_kw_call_value_3_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 14;
        tmp_kw_call_value_5_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_54, mod_consts[6]);

        if (tmp_kw_call_value_5_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);
            Py_DECREF(tmp_kw_call_value_3_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_9 = mod_consts[15];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);
            Py_DECREF(tmp_kw_call_value_3_10);
            Py_DECREF(tmp_kw_call_value_5_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[9]);
        if (tmp_kw_call_value_7_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_2_10);
            Py_DECREF(tmp_kw_call_value_3_10);
            Py_DECREF(tmp_kw_call_value_5_10);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_2 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 14;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10, tmp_kw_call_value_6_9, tmp_kw_call_value_7_3, tmp_kw_call_value_8_2};

            tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_50, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_kw_call_value_1_10);
        Py_DECREF(tmp_kw_call_value_2_10);
        Py_DECREF(tmp_kw_call_value_3_10);
        Py_DECREF(tmp_kw_call_value_5_10);
        Py_DECREF(tmp_kw_call_value_7_3);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_called_value_56;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_called_value_57;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_called_value_58;
        PyObject *tmp_kw_call_value_4_11;
        PyObject *tmp_kw_call_value_5_11;
        PyObject *tmp_called_value_59;
        PyObject *tmp_kw_call_value_6_10;
        PyObject *tmp_kw_call_value_7_4;
        PyObject *tmp_kw_call_value_8_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_9_1;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_11 = par_self;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 15;
        tmp_kw_call_value_1_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_56, mod_consts[55]);

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 15;
        tmp_kw_call_value_2_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_57, mod_consts[56]);

        if (tmp_kw_call_value_2_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 15;
        tmp_kw_call_value_3_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_58, mod_consts[57]);

        if (tmp_kw_call_value_3_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_11 = mod_consts[5];
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);
            Py_DECREF(tmp_kw_call_value_3_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 15;
        tmp_kw_call_value_5_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_59, mod_consts[6]);

        if (tmp_kw_call_value_5_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);
            Py_DECREF(tmp_kw_call_value_3_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_10 = mod_consts[7];
        tmp_kw_call_value_7_4 = mod_consts[58];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);
            Py_DECREF(tmp_kw_call_value_3_11);
            Py_DECREF(tmp_kw_call_value_5_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[9]);
        if (tmp_kw_call_value_8_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_2_11);
            Py_DECREF(tmp_kw_call_value_3_11);
            Py_DECREF(tmp_kw_call_value_5_11);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_1 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 15;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11, tmp_kw_call_value_6_10, tmp_kw_call_value_7_4, tmp_kw_call_value_8_3, tmp_kw_call_value_9_1};

            tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_55, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_11);
        Py_DECREF(tmp_kw_call_value_2_11);
        Py_DECREF(tmp_kw_call_value_3_11);
        Py_DECREF(tmp_kw_call_value_5_11);
        Py_DECREF(tmp_kw_call_value_8_3);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_called_value_61;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_called_value_62;
        PyObject *tmp_kw_call_value_3_12;
        PyObject *tmp_called_value_63;
        PyObject *tmp_kw_call_value_4_12;
        PyObject *tmp_kw_call_value_5_12;
        PyObject *tmp_called_value_64;
        PyObject *tmp_kw_call_value_6_11;
        PyObject *tmp_kw_call_value_7_5;
        PyObject *tmp_kw_call_value_8_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_9_2;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_12 = par_self;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 16;
        tmp_kw_call_value_1_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_61, mod_consts[60]);

        if (tmp_kw_call_value_1_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 16;
        tmp_kw_call_value_2_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_62, mod_consts[61]);

        if (tmp_kw_call_value_2_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 16;
        tmp_kw_call_value_3_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_63, mod_consts[62]);

        if (tmp_kw_call_value_3_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_12 = mod_consts[5];
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 16;
        tmp_kw_call_value_5_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_64, mod_consts[6]);

        if (tmp_kw_call_value_5_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_11 = mod_consts[7];
        tmp_kw_call_value_7_5 = mod_consts[58];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_kw_call_value_5_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[9]);
        if (tmp_kw_call_value_8_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_2_12);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_kw_call_value_5_12);

            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_2 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 16;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12, tmp_kw_call_value_6_11, tmp_kw_call_value_7_5, tmp_kw_call_value_8_4, tmp_kw_call_value_9_2};

            tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_60, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_12);
        Py_DECREF(tmp_kw_call_value_2_12);
        Py_DECREF(tmp_kw_call_value_3_12);
        Py_DECREF(tmp_kw_call_value_5_12);
        Py_DECREF(tmp_kw_call_value_8_4);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_called_value_66;
        PyObject *tmp_kw_call_value_2_13;
        PyObject *tmp_called_value_67;
        PyObject *tmp_kw_call_value_3_13;
        PyObject *tmp_called_value_68;
        PyObject *tmp_kw_call_value_4_13;
        PyObject *tmp_kw_call_value_5_13;
        PyObject *tmp_called_value_69;
        PyObject *tmp_kw_call_value_6_12;
        PyObject *tmp_kw_call_value_7_6;
        PyObject *tmp_kw_call_value_8_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_9_3;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_13 = par_self;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 17;
        tmp_kw_call_value_1_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_66, mod_consts[63]);

        if (tmp_kw_call_value_1_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 17;
        tmp_kw_call_value_2_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_67, mod_consts[64]);

        if (tmp_kw_call_value_2_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 17;
        tmp_kw_call_value_3_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_68, mod_consts[65]);

        if (tmp_kw_call_value_3_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_13 = mod_consts[5];
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);
            Py_DECREF(tmp_kw_call_value_3_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 17;
        tmp_kw_call_value_5_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_69, mod_consts[6]);

        if (tmp_kw_call_value_5_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);
            Py_DECREF(tmp_kw_call_value_3_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_12 = mod_consts[7];
        tmp_kw_call_value_7_6 = mod_consts[58];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);
            Py_DECREF(tmp_kw_call_value_3_13);
            Py_DECREF(tmp_kw_call_value_5_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[9]);
        if (tmp_kw_call_value_8_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_2_13);
            Py_DECREF(tmp_kw_call_value_3_13);
            Py_DECREF(tmp_kw_call_value_5_13);

            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_3 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 17;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13, tmp_kw_call_value_6_12, tmp_kw_call_value_7_6, tmp_kw_call_value_8_5, tmp_kw_call_value_9_3};

            tmp_call_result_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_65, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_13);
        Py_DECREF(tmp_kw_call_value_2_13);
        Py_DECREF(tmp_kw_call_value_3_13);
        Py_DECREF(tmp_kw_call_value_5_13);
        Py_DECREF(tmp_kw_call_value_8_5);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_called_value_71;
        PyObject *tmp_kw_call_value_2_14;
        PyObject *tmp_called_value_72;
        PyObject *tmp_kw_call_value_3_14;
        PyObject *tmp_called_value_73;
        PyObject *tmp_kw_call_value_4_14;
        PyObject *tmp_kw_call_value_5_14;
        PyObject *tmp_called_value_74;
        PyObject *tmp_kw_call_value_6_13;
        PyObject *tmp_kw_call_value_7_7;
        PyObject *tmp_kw_call_value_8_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_9_4;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_14 = par_self;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 18;
        tmp_kw_call_value_1_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_71, mod_consts[66]);

        if (tmp_kw_call_value_1_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 18;
        tmp_kw_call_value_2_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_72, mod_consts[67]);

        if (tmp_kw_call_value_2_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 18;
        tmp_kw_call_value_3_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_73, mod_consts[68]);

        if (tmp_kw_call_value_3_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_14 = mod_consts[5];
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);
            Py_DECREF(tmp_kw_call_value_3_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 18;
        tmp_kw_call_value_5_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_74, mod_consts[6]);

        if (tmp_kw_call_value_5_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);
            Py_DECREF(tmp_kw_call_value_3_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_13 = mod_consts[7];
        tmp_kw_call_value_7_7 = mod_consts[58];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);
            Py_DECREF(tmp_kw_call_value_3_14);
            Py_DECREF(tmp_kw_call_value_5_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[9]);
        if (tmp_kw_call_value_8_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_2_14);
            Py_DECREF(tmp_kw_call_value_3_14);
            Py_DECREF(tmp_kw_call_value_5_14);

            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_4 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14, tmp_kw_call_value_6_13, tmp_kw_call_value_7_7, tmp_kw_call_value_8_6, tmp_kw_call_value_9_4};

            tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_70, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_14);
        Py_DECREF(tmp_kw_call_value_2_14);
        Py_DECREF(tmp_kw_call_value_3_14);
        Py_DECREF(tmp_kw_call_value_5_14);
        Py_DECREF(tmp_kw_call_value_8_6);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_15;
        PyObject *tmp_called_value_76;
        PyObject *tmp_kw_call_value_2_15;
        PyObject *tmp_called_value_77;
        PyObject *tmp_kw_call_value_3_15;
        PyObject *tmp_called_value_78;
        PyObject *tmp_kw_call_value_4_15;
        PyObject *tmp_kw_call_value_5_15;
        PyObject *tmp_called_value_79;
        PyObject *tmp_kw_call_value_6_14;
        PyObject *tmp_kw_call_value_7_8;
        PyObject *tmp_kw_call_value_8_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_9_5;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_15 = par_self;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 19;
        tmp_kw_call_value_1_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_76, mod_consts[69]);

        if (tmp_kw_call_value_1_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 19;
        tmp_kw_call_value_2_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_77, mod_consts[70]);

        if (tmp_kw_call_value_2_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 19;
        tmp_kw_call_value_3_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_78, mod_consts[71]);

        if (tmp_kw_call_value_3_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_15 = mod_consts[5];
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);
            Py_DECREF(tmp_kw_call_value_3_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 19;
        tmp_kw_call_value_5_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_79, mod_consts[6]);

        if (tmp_kw_call_value_5_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);
            Py_DECREF(tmp_kw_call_value_3_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_14 = mod_consts[7];
        tmp_kw_call_value_7_8 = mod_consts[58];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);
            Py_DECREF(tmp_kw_call_value_3_15);
            Py_DECREF(tmp_kw_call_value_5_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[9]);
        if (tmp_kw_call_value_8_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_2_15);
            Py_DECREF(tmp_kw_call_value_3_15);
            Py_DECREF(tmp_kw_call_value_5_15);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_5 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 19;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15, tmp_kw_call_value_6_14, tmp_kw_call_value_7_8, tmp_kw_call_value_8_7, tmp_kw_call_value_9_5};

            tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_75, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_15);
        Py_DECREF(tmp_kw_call_value_2_15);
        Py_DECREF(tmp_kw_call_value_3_15);
        Py_DECREF(tmp_kw_call_value_5_15);
        Py_DECREF(tmp_kw_call_value_8_7);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_16;
        PyObject *tmp_called_value_81;
        PyObject *tmp_kw_call_value_2_16;
        PyObject *tmp_called_value_82;
        PyObject *tmp_kw_call_value_3_16;
        PyObject *tmp_called_value_83;
        PyObject *tmp_kw_call_value_4_16;
        PyObject *tmp_kw_call_value_5_16;
        PyObject *tmp_called_value_84;
        PyObject *tmp_kw_call_value_6_15;
        PyObject *tmp_kw_call_value_7_9;
        PyObject *tmp_kw_call_value_8_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_9_6;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_16 = par_self;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 20;
        tmp_kw_call_value_1_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_81, mod_consts[72]);

        if (tmp_kw_call_value_1_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 20;
        tmp_kw_call_value_2_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_82, mod_consts[73]);

        if (tmp_kw_call_value_2_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 20;
        tmp_kw_call_value_3_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_83, mod_consts[74]);

        if (tmp_kw_call_value_3_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_16 = mod_consts[5];
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);
            Py_DECREF(tmp_kw_call_value_3_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 20;
        tmp_kw_call_value_5_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_84, mod_consts[6]);

        if (tmp_kw_call_value_5_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);
            Py_DECREF(tmp_kw_call_value_3_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_15 = mod_consts[7];
        tmp_kw_call_value_7_9 = mod_consts[58];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);
            Py_DECREF(tmp_kw_call_value_3_16);
            Py_DECREF(tmp_kw_call_value_5_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[9]);
        if (tmp_kw_call_value_8_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_2_16);
            Py_DECREF(tmp_kw_call_value_3_16);
            Py_DECREF(tmp_kw_call_value_5_16);

            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_6 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 20;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_15, tmp_kw_call_value_7_9, tmp_kw_call_value_8_8, tmp_kw_call_value_9_6};

            tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_80, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_16);
        Py_DECREF(tmp_kw_call_value_2_16);
        Py_DECREF(tmp_kw_call_value_3_16);
        Py_DECREF(tmp_kw_call_value_5_16);
        Py_DECREF(tmp_kw_call_value_8_8);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_kw_call_value_1_17;
        PyObject *tmp_called_value_86;
        PyObject *tmp_kw_call_value_2_17;
        PyObject *tmp_called_value_87;
        PyObject *tmp_kw_call_value_3_17;
        PyObject *tmp_called_value_88;
        PyObject *tmp_kw_call_value_4_17;
        PyObject *tmp_kw_call_value_5_17;
        PyObject *tmp_called_value_89;
        PyObject *tmp_kw_call_value_6_16;
        PyObject *tmp_kw_call_value_7_10;
        PyObject *tmp_kw_call_value_8_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_9_7;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_17 = par_self;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 21;
        tmp_kw_call_value_1_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_86, mod_consts[75]);

        if (tmp_kw_call_value_1_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 21;
        tmp_kw_call_value_2_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_87, mod_consts[76]);

        if (tmp_kw_call_value_2_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 21;
        tmp_kw_call_value_3_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_88, mod_consts[77]);

        if (tmp_kw_call_value_3_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_17 = mod_consts[5];
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);
            Py_DECREF(tmp_kw_call_value_3_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 21;
        tmp_kw_call_value_5_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_89, mod_consts[6]);

        if (tmp_kw_call_value_5_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);
            Py_DECREF(tmp_kw_call_value_3_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_16 = mod_consts[7];
        tmp_kw_call_value_7_10 = mod_consts[58];
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);
            Py_DECREF(tmp_kw_call_value_3_17);
            Py_DECREF(tmp_kw_call_value_5_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[9]);
        if (tmp_kw_call_value_8_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_2_17);
            Py_DECREF(tmp_kw_call_value_3_17);
            Py_DECREF(tmp_kw_call_value_5_17);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_7 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_17, tmp_kw_call_value_5_17, tmp_kw_call_value_6_16, tmp_kw_call_value_7_10, tmp_kw_call_value_8_9, tmp_kw_call_value_9_7};

            tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_85, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_17);
        Py_DECREF(tmp_kw_call_value_2_17);
        Py_DECREF(tmp_kw_call_value_3_17);
        Py_DECREF(tmp_kw_call_value_5_17);
        Py_DECREF(tmp_kw_call_value_8_9);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_kw_call_value_1_18;
        PyObject *tmp_called_value_91;
        PyObject *tmp_kw_call_value_2_18;
        PyObject *tmp_called_value_92;
        PyObject *tmp_kw_call_value_3_18;
        PyObject *tmp_called_value_93;
        PyObject *tmp_kw_call_value_4_18;
        PyObject *tmp_kw_call_value_5_18;
        PyObject *tmp_called_value_94;
        PyObject *tmp_kw_call_value_6_17;
        PyObject *tmp_kw_call_value_7_11;
        PyObject *tmp_kw_call_value_8_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_9_8;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_18 = par_self;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 22;
        tmp_kw_call_value_1_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_91, mod_consts[78]);

        if (tmp_kw_call_value_1_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 22;
        tmp_kw_call_value_2_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_92, mod_consts[79]);

        if (tmp_kw_call_value_2_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 22;
        tmp_kw_call_value_3_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_93, mod_consts[80]);

        if (tmp_kw_call_value_3_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_18 = mod_consts[5];
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);
            Py_DECREF(tmp_kw_call_value_3_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 22;
        tmp_kw_call_value_5_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_94, mod_consts[6]);

        if (tmp_kw_call_value_5_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);
            Py_DECREF(tmp_kw_call_value_3_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_17 = mod_consts[7];
        tmp_kw_call_value_7_11 = mod_consts[58];
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);
            Py_DECREF(tmp_kw_call_value_3_18);
            Py_DECREF(tmp_kw_call_value_5_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[9]);
        if (tmp_kw_call_value_8_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_2_18);
            Py_DECREF(tmp_kw_call_value_3_18);
            Py_DECREF(tmp_kw_call_value_5_18);

            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_8 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 22;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_18, tmp_kw_call_value_5_18, tmp_kw_call_value_6_17, tmp_kw_call_value_7_11, tmp_kw_call_value_8_10, tmp_kw_call_value_9_8};

            tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_90, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_18);
        Py_DECREF(tmp_kw_call_value_2_18);
        Py_DECREF(tmp_kw_call_value_3_18);
        Py_DECREF(tmp_kw_call_value_5_18);
        Py_DECREF(tmp_kw_call_value_8_10);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_kw_call_value_1_19;
        PyObject *tmp_called_value_96;
        PyObject *tmp_kw_call_value_2_19;
        PyObject *tmp_called_value_97;
        PyObject *tmp_kw_call_value_3_19;
        PyObject *tmp_called_value_98;
        PyObject *tmp_kw_call_value_4_19;
        PyObject *tmp_kw_call_value_5_19;
        PyObject *tmp_called_value_99;
        PyObject *tmp_kw_call_value_6_18;
        PyObject *tmp_kw_call_value_7_12;
        PyObject *tmp_kw_call_value_8_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_9_9;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_19 = par_self;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 23;
        tmp_kw_call_value_1_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_96, mod_consts[81]);

        if (tmp_kw_call_value_1_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 23;
        tmp_kw_call_value_2_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_97, mod_consts[82]);

        if (tmp_kw_call_value_2_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 23;
        tmp_kw_call_value_3_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_98, mod_consts[83]);

        if (tmp_kw_call_value_3_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_19 = mod_consts[5];
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);
            Py_DECREF(tmp_kw_call_value_3_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 23;
        tmp_kw_call_value_5_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_99, mod_consts[6]);

        if (tmp_kw_call_value_5_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);
            Py_DECREF(tmp_kw_call_value_3_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_18 = mod_consts[7];
        tmp_kw_call_value_7_12 = mod_consts[58];
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);
            Py_DECREF(tmp_kw_call_value_3_19);
            Py_DECREF(tmp_kw_call_value_5_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[9]);
        if (tmp_kw_call_value_8_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_19);
            Py_DECREF(tmp_kw_call_value_2_19);
            Py_DECREF(tmp_kw_call_value_3_19);
            Py_DECREF(tmp_kw_call_value_5_19);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_9 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 23;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19, tmp_kw_call_value_2_19, tmp_kw_call_value_3_19, tmp_kw_call_value_4_19, tmp_kw_call_value_5_19, tmp_kw_call_value_6_18, tmp_kw_call_value_7_12, tmp_kw_call_value_8_11, tmp_kw_call_value_9_9};

            tmp_call_result_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_95, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_19);
        Py_DECREF(tmp_kw_call_value_2_19);
        Py_DECREF(tmp_kw_call_value_3_19);
        Py_DECREF(tmp_kw_call_value_5_19);
        Py_DECREF(tmp_kw_call_value_8_11);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_21;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_kw_call_value_1_20;
        PyObject *tmp_called_value_101;
        PyObject *tmp_kw_call_value_2_20;
        PyObject *tmp_called_value_102;
        PyObject *tmp_kw_call_value_3_20;
        PyObject *tmp_called_value_103;
        PyObject *tmp_kw_call_value_4_20;
        PyObject *tmp_kw_call_value_5_20;
        PyObject *tmp_called_value_104;
        PyObject *tmp_kw_call_value_6_19;
        PyObject *tmp_kw_call_value_7_13;
        PyObject *tmp_kw_call_value_8_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_9_10;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_20 = par_self;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 24;
        tmp_kw_call_value_1_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_101, mod_consts[84]);

        if (tmp_kw_call_value_1_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 24;
        tmp_kw_call_value_2_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_102, mod_consts[85]);

        if (tmp_kw_call_value_2_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 24;
        tmp_kw_call_value_3_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_103, mod_consts[86]);

        if (tmp_kw_call_value_3_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_20 = mod_consts[5];
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);
            Py_DECREF(tmp_kw_call_value_3_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 24;
        tmp_kw_call_value_5_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_104, mod_consts[6]);

        if (tmp_kw_call_value_5_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);
            Py_DECREF(tmp_kw_call_value_3_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_19 = mod_consts[7];
        tmp_kw_call_value_7_13 = mod_consts[58];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);
            Py_DECREF(tmp_kw_call_value_3_20);
            Py_DECREF(tmp_kw_call_value_5_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[9]);
        if (tmp_kw_call_value_8_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_20);
            Py_DECREF(tmp_kw_call_value_2_20);
            Py_DECREF(tmp_kw_call_value_3_20);
            Py_DECREF(tmp_kw_call_value_5_20);

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_10 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 24;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20, tmp_kw_call_value_2_20, tmp_kw_call_value_3_20, tmp_kw_call_value_4_20, tmp_kw_call_value_5_20, tmp_kw_call_value_6_19, tmp_kw_call_value_7_13, tmp_kw_call_value_8_12, tmp_kw_call_value_9_10};

            tmp_call_result_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_100, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_20);
        Py_DECREF(tmp_kw_call_value_2_20);
        Py_DECREF(tmp_kw_call_value_3_20);
        Py_DECREF(tmp_kw_call_value_5_20);
        Py_DECREF(tmp_kw_call_value_8_12);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_22;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_kw_call_value_1_21;
        PyObject *tmp_called_value_106;
        PyObject *tmp_kw_call_value_2_21;
        PyObject *tmp_called_value_107;
        PyObject *tmp_kw_call_value_3_21;
        PyObject *tmp_called_value_108;
        PyObject *tmp_kw_call_value_4_21;
        PyObject *tmp_kw_call_value_5_21;
        PyObject *tmp_called_value_109;
        PyObject *tmp_kw_call_value_6_20;
        PyObject *tmp_kw_call_value_7_14;
        PyObject *tmp_kw_call_value_8_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_value_9_11;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_21 = par_self;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 25;
        tmp_kw_call_value_1_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_106, mod_consts[87]);

        if (tmp_kw_call_value_1_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 25;
        tmp_kw_call_value_2_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_107, mod_consts[88]);

        if (tmp_kw_call_value_2_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 25;
        tmp_kw_call_value_3_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_108, mod_consts[89]);

        if (tmp_kw_call_value_3_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_21 = mod_consts[5];
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);
            Py_DECREF(tmp_kw_call_value_3_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 25;
        tmp_kw_call_value_5_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_109, mod_consts[6]);

        if (tmp_kw_call_value_5_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);
            Py_DECREF(tmp_kw_call_value_3_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_20 = mod_consts[7];
        tmp_kw_call_value_7_14 = mod_consts[58];
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);
            Py_DECREF(tmp_kw_call_value_3_21);
            Py_DECREF(tmp_kw_call_value_5_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[9]);
        if (tmp_kw_call_value_8_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_21);
            Py_DECREF(tmp_kw_call_value_2_21);
            Py_DECREF(tmp_kw_call_value_3_21);
            Py_DECREF(tmp_kw_call_value_5_21);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_11 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 25;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21, tmp_kw_call_value_2_21, tmp_kw_call_value_3_21, tmp_kw_call_value_4_21, tmp_kw_call_value_5_21, tmp_kw_call_value_6_20, tmp_kw_call_value_7_14, tmp_kw_call_value_8_13, tmp_kw_call_value_9_11};

            tmp_call_result_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_105, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_21);
        Py_DECREF(tmp_kw_call_value_2_21);
        Py_DECREF(tmp_kw_call_value_3_21);
        Py_DECREF(tmp_kw_call_value_5_21);
        Py_DECREF(tmp_kw_call_value_8_13);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_kw_call_value_1_22;
        PyObject *tmp_called_value_111;
        PyObject *tmp_kw_call_value_2_22;
        PyObject *tmp_called_value_112;
        PyObject *tmp_kw_call_value_3_22;
        PyObject *tmp_called_value_113;
        PyObject *tmp_kw_call_value_4_22;
        PyObject *tmp_kw_call_value_5_22;
        PyObject *tmp_called_value_114;
        PyObject *tmp_kw_call_value_6_21;
        PyObject *tmp_kw_call_value_7_15;
        PyObject *tmp_kw_call_value_8_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_value_9_12;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_22 = par_self;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 26;
        tmp_kw_call_value_1_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_111, mod_consts[90]);

        if (tmp_kw_call_value_1_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 26;
        tmp_kw_call_value_2_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_112, mod_consts[91]);

        if (tmp_kw_call_value_2_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 26;
        tmp_kw_call_value_3_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_113, mod_consts[92]);

        if (tmp_kw_call_value_3_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_22 = mod_consts[5];
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);
            Py_DECREF(tmp_kw_call_value_3_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 26;
        tmp_kw_call_value_5_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_114, mod_consts[6]);

        if (tmp_kw_call_value_5_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);
            Py_DECREF(tmp_kw_call_value_3_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_21 = mod_consts[7];
        tmp_kw_call_value_7_15 = mod_consts[58];
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);
            Py_DECREF(tmp_kw_call_value_3_22);
            Py_DECREF(tmp_kw_call_value_5_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[9]);
        if (tmp_kw_call_value_8_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_22);
            Py_DECREF(tmp_kw_call_value_2_22);
            Py_DECREF(tmp_kw_call_value_3_22);
            Py_DECREF(tmp_kw_call_value_5_22);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_12 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22, tmp_kw_call_value_2_22, tmp_kw_call_value_3_22, tmp_kw_call_value_4_22, tmp_kw_call_value_5_22, tmp_kw_call_value_6_21, tmp_kw_call_value_7_15, tmp_kw_call_value_8_14, tmp_kw_call_value_9_12};

            tmp_call_result_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_110, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_kw_call_value_1_22);
        Py_DECREF(tmp_kw_call_value_2_22);
        Py_DECREF(tmp_kw_call_value_3_22);
        Py_DECREF(tmp_kw_call_value_5_22);
        Py_DECREF(tmp_kw_call_value_8_14);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_24;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_kw_call_value_1_23;
        PyObject *tmp_called_value_116;
        PyObject *tmp_kw_call_value_2_23;
        PyObject *tmp_kw_call_value_3_23;
        PyObject *tmp_called_value_117;
        PyObject *tmp_kw_call_value_4_23;
        PyObject *tmp_kw_call_value_5_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_6_22;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_23 = par_self;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 27;
        tmp_kw_call_value_1_23 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_116, mod_consts[93]);

        if (tmp_kw_call_value_1_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_23 = mod_consts[5];
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_23);

            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 27;
        tmp_kw_call_value_3_23 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_117, mod_consts[6]);

        if (tmp_kw_call_value_3_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_23);

            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_23 = mod_consts[7];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_23);
            Py_DECREF(tmp_kw_call_value_3_23);

            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[9]);
        if (tmp_kw_call_value_5_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_23);
            Py_DECREF(tmp_kw_call_value_3_23);

            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_22 = mod_consts[10];
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 27;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23, tmp_kw_call_value_2_23, tmp_kw_call_value_3_23, tmp_kw_call_value_4_23, tmp_kw_call_value_5_23, tmp_kw_call_value_6_22};

            tmp_call_result_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_115, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_1_23);
        Py_DECREF(tmp_kw_call_value_3_23);
        Py_DECREF(tmp_kw_call_value_5_23);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_25;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_kw_call_value_1_24;
        PyObject *tmp_called_value_119;
        PyObject *tmp_kw_call_value_2_24;
        PyObject *tmp_called_value_120;
        PyObject *tmp_kw_call_value_3_24;
        PyObject *tmp_kw_call_value_4_24;
        PyObject *tmp_kw_call_value_5_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_value_6_23;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_121;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_24 = par_self;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
        tmp_kw_call_value_1_24 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_119, mod_consts[94]);

        if (tmp_kw_call_value_1_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
        tmp_kw_call_value_2_24 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_120, mod_consts[36]);

        if (tmp_kw_call_value_2_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_24 = mod_consts[7];
        tmp_kw_call_value_4_24 = mod_consts[25];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);
            Py_DECREF(tmp_kw_call_value_2_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[9]);
        if (tmp_kw_call_value_5_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);
            Py_DECREF(tmp_kw_call_value_2_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);
            Py_DECREF(tmp_kw_call_value_2_24);
            Py_DECREF(tmp_kw_call_value_5_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
        tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_121, mod_consts[37]);

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_24);
            Py_DECREF(tmp_kw_call_value_2_24);
            Py_DECREF(tmp_kw_call_value_5_24);

            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_23 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_122;
            PyObject *tmp_called_value_123;
            PyObject *tmp_called_value_124;
            PyObject *tmp_called_value_125;
            PyObject *tmp_called_value_126;
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 0, tmp_list_element_4);
            tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_122 == NULL)) {
                tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_122, mod_consts[38]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 1, tmp_list_element_4);
            tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_123 == NULL)) {
                tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_123, mod_consts[39]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 2, tmp_list_element_4);
            tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_124 == NULL)) {
                tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_124, mod_consts[40]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 3, tmp_list_element_4);
            tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_125 == NULL)) {
                tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_125, mod_consts[41]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 4, tmp_list_element_4);
            tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_126 == NULL)) {
                tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_126, mod_consts[32]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooc";
                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_23, 5, tmp_list_element_4);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_kw_call_value_1_24);
        Py_DECREF(tmp_kw_call_value_2_24);
        Py_DECREF(tmp_kw_call_value_5_24);
        Py_DECREF(tmp_kw_call_value_6_23);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 28;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24, tmp_kw_call_value_2_24, tmp_kw_call_value_3_24, tmp_kw_call_value_4_24, tmp_kw_call_value_5_24, tmp_kw_call_value_6_23};

            tmp_call_result_25 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_118, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_value_1_24);
        Py_DECREF(tmp_kw_call_value_2_24);
        Py_DECREF(tmp_kw_call_value_5_24);
        Py_DECREF(tmp_kw_call_value_6_23);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_kw_call_value_1_25;
        PyObject *tmp_called_value_128;
        PyObject *tmp_kw_call_value_2_25;
        PyObject *tmp_called_value_129;
        PyObject *tmp_kw_call_value_3_25;
        PyObject *tmp_kw_call_value_4_25;
        PyObject *tmp_kw_call_value_5_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_kw_call_value_6_24;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_130;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_25 = par_self;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
        tmp_kw_call_value_1_25 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_128, mod_consts[94]);

        if (tmp_kw_call_value_1_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
        tmp_kw_call_value_2_25 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_129, mod_consts[36]);

        if (tmp_kw_call_value_2_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_25 = mod_consts[7];
        tmp_kw_call_value_4_25 = mod_consts[25];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);
            Py_DECREF(tmp_kw_call_value_2_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[9]);
        if (tmp_kw_call_value_5_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);
            Py_DECREF(tmp_kw_call_value_2_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);
            Py_DECREF(tmp_kw_call_value_2_25);
            Py_DECREF(tmp_kw_call_value_5_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
        tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_130, mod_consts[37]);

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_25);
            Py_DECREF(tmp_kw_call_value_2_25);
            Py_DECREF(tmp_kw_call_value_5_25);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_24 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_131;
            PyObject *tmp_called_value_132;
            PyObject *tmp_called_value_133;
            PyObject *tmp_called_value_134;
            PyObject *tmp_called_value_135;
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 0, tmp_list_element_5);
            tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_131 == NULL)) {
                tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_131, mod_consts[38]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 1, tmp_list_element_5);
            tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_132 == NULL)) {
                tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_132, mod_consts[39]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 2, tmp_list_element_5);
            tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_133 == NULL)) {
                tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_133, mod_consts[40]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 3, tmp_list_element_5);
            tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_134 == NULL)) {
                tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_134, mod_consts[41]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 4, tmp_list_element_5);
            tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_135 == NULL)) {
                tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_135, mod_consts[32]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooc";
                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_24, 5, tmp_list_element_5);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_kw_call_value_1_25);
        Py_DECREF(tmp_kw_call_value_2_25);
        Py_DECREF(tmp_kw_call_value_5_25);
        Py_DECREF(tmp_kw_call_value_6_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        frame_51e27fbc054824473574d2b1b5a571cd->m_frame.f_lineno = 29;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25, tmp_kw_call_value_2_25, tmp_kw_call_value_3_25, tmp_kw_call_value_4_25, tmp_kw_call_value_5_25, tmp_kw_call_value_6_24};

            tmp_call_result_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_127, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_value_1_25);
        Py_DECREF(tmp_kw_call_value_2_25);
        Py_DECREF(tmp_kw_call_value_5_25);
        Py_DECREF(tmp_kw_call_value_6_24);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51e27fbc054824473574d2b1b5a571cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51e27fbc054824473574d2b1b5a571cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51e27fbc054824473574d2b1b5a571cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51e27fbc054824473574d2b1b5a571cd,
        type_description_1,
        par_self,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_51e27fbc054824473574d2b1b5a571cd == cache_frame_51e27fbc054824473574d2b1b5a571cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51e27fbc054824473574d2b1b5a571cd);
        cache_frame_51e27fbc054824473574d2b1b5a571cd = NULL;
    }

    assertFrameObject(frame_51e27fbc054824473574d2b1b5a571cd);

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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_51e27fbc054824473574d2b1b5a571cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
        NULL,
        closure,
        1
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

function_impl_code functable_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$[] = {
    impl_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__,
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

    function_impl_code *current = functable_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$;
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

    if (offset > sizeof(functable_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$) || offset < 0) {
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
        functable_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$[offset],
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
        module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
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
PyObject *modulecode_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("ursina.editor.scenes.untitled_scene[0,0]");

    // Store the module for future use.
    module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$ = module;

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
        PRINT_STRING("ursina.editor.scenes.untitled_scene[0,0]: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("ursina.editor.scenes.untitled_scene[0,0]: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$\n");

    moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$ = MODULE_DICT(module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[117]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_21ea2455e769d34d3d3115643240a982;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9bb543c82a6530353ea69d388b2b6cc3_2;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_2);
    }
    frame_21ea2455e769d34d3d3115643240a982 = MAKE_MODULE_FRAME(codeobj_21ea2455e769d34d3d3115643240a982, module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_21ea2455e769d34d3d3115643240a982);
    assert(Py_REFCNT(frame_21ea2455e769d34d3d3115643240a982) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[98], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[99], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_5 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
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


            exception_lineno = 2;

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
        tmp_subscript_value_1 = mod_consts[101];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_7 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[102]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[103];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_21ea2455e769d34d3d3115643240a982->m_frame.f_lineno = 2;
        tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[104]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

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
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_1 = mod_consts[106];
        tmp_default_value_1 = mod_consts[107];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[106]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2;

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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 2;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        frame_9bb543c82a6530353ea69d388b2b6cc3_2 = MAKE_CLASS_FRAME(tstate, codeobj_9bb543c82a6530353ea69d388b2b6cc3, module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_9bb543c82a6530353ea69d388b2b6cc3_2);
        assert(Py_REFCNT(frame_9bb543c82a6530353ea69d388b2b6cc3_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$function__1___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 3;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9bb543c82a6530353ea69d388b2b6cc3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9bb543c82a6530353ea69d388b2b6cc3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9bb543c82a6530353ea69d388b2b6cc3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9bb543c82a6530353ea69d388b2b6cc3_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_9bb543c82a6530353ea69d388b2b6cc3_2);

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


                exception_lineno = 2;

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
        tmp_res = PyObject_SetItem(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[103];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_21ea2455e769d34d3d3115643240a982->m_frame.f_lineno = 2;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_11);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_10 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2);
        locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2 = NULL;
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

        Py_DECREF(locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2);
        locals_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$$$$class__1_Scene_2 = NULL;
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
        exception_lineno = 2;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_10);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21ea2455e769d34d3d3115643240a982, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21ea2455e769d34d3d3115643240a982->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21ea2455e769d34d3d3115643240a982, exception_lineno);
    }



    assertFrameObject(frame_21ea2455e769d34d3d3115643240a982);

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
    PGO_onModuleExit("ursina.editor.scenes.untitled_scene[0,0]", false);

    Py_INCREF(module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$);
    return module_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("ursina$editor$scenes$untitled_scene$$91$0$$44$0$$93$", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
