/* Generated code for Python module 'direct.directnotify.Notifier'
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

/* The "module_direct$directnotify$Notifier" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$directnotify$Notifier;
PyDictObject *moduledict_direct$directnotify$Notifier;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[166];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.directnotify.Notifier"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 166; i++) {
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
void checkModuleConstants_direct$directnotify$Notifier(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 166; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7248e08fc1bf623e3e385d2d9687f71c;
static PyCodeObject *codeobj_fd7f827da27a77f7e93779ab2f217d2c;
static PyCodeObject *codeobj_3588a2e12eaaf5ff3f3077219976a304;
static PyCodeObject *codeobj_267acf1f2371fd57f1f0c4cd6b235d95;
static PyCodeObject *codeobj_e9005b9e3461f6039715595ffb4dc9fd;
static PyCodeObject *codeobj_c11ba7fc4e364abfd9cc5281ad53495a;
static PyCodeObject *codeobj_f8eaca25d4e59fa9eb4407b86c340f55;
static PyCodeObject *codeobj_6f80bc610c12a3b86162fe3bcb122e6a;
static PyCodeObject *codeobj_16ab6dfb0fd24737a32ebbf065bee7b3;
static PyCodeObject *codeobj_7c2816465e285ef0d26b6b692a0c8df4;
static PyCodeObject *codeobj_34a9849069f1c3fc34046cb72027c042;
static PyCodeObject *codeobj_ae8d9b91b71151fd55103718820303fc;
static PyCodeObject *codeobj_2f8c56cb2c1ce7b486a023de1baa4bb9;
static PyCodeObject *codeobj_7af45ecd404c4c2c8bfe7799cc001997;
static PyCodeObject *codeobj_2474e6cba16185d517e716c6cb3a429b;
static PyCodeObject *codeobj_a63a5437941bc19636d119aa886fbc33;
static PyCodeObject *codeobj_1e138ccd9059aa3e95734c64e059049e;
static PyCodeObject *codeobj_ef5878db6a79b21a7f80ec2095a8dddc;
static PyCodeObject *codeobj_1a6bc7ed582599132d32ef18464b9cb4;
static PyCodeObject *codeobj_d89c6ff68d09ba2cf015740fbe4c17f9;
static PyCodeObject *codeobj_e268c046791e90f4f3b25d633c373a56;
static PyCodeObject *codeobj_da3b7faa8a96076891726e7fadbd14d2;
static PyCodeObject *codeobj_90352fbd17632aba3137b3df1a2f2a66;
static PyCodeObject *codeobj_0fab62094d760e7f6b83b5c9f03037fb;
static PyCodeObject *codeobj_904017ebbf66530b6585cc1a0a1550d5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[150]); CHECK_OBJECT(module_filename_obj);
    codeobj_7248e08fc1bf623e3e385d2d9687f71c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[151], mod_consts[151], NULL, NULL, 0, 0, 0);
    codeobj_fd7f827da27a77f7e93779ab2f217d2c = MAKE_CODE_OBJECT(module_filename_obj, 12, 0, mod_consts[13], mod_consts[13], mod_consts[152], NULL, 0, 0, 0);
    codeobj_3588a2e12eaaf5ff3f3077219976a304 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], mod_consts[153], NULL, 3, 0, 0);
    codeobj_267acf1f2371fd57f1f0c4cd6b235d95 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], mod_consts[154], NULL, 2, 0, 0);
    codeobj_e9005b9e3461f6039715595ffb4dc9fd = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[155], NULL, 2, 0, 0);
    codeobj_c11ba7fc4e364abfd9cc5281ad53495a = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[116], mod_consts[156], NULL, 1, 0, 0);
    codeobj_f8eaca25d4e59fa9eb4407b86c340f55 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[128], mod_consts[128], mod_consts[157], NULL, 2, 0, 0);
    codeobj_6f80bc610c12a3b86162fe3bcb122e6a = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[157], NULL, 2, 0, 0);
    codeobj_16ab6dfb0fd24737a32ebbf065bee7b3 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], mod_consts[158], NULL, 4, 0, 0);
    codeobj_7c2816465e285ef0d26b6b692a0c8df4 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], mod_consts[159], NULL, 3, 0, 0);
    codeobj_34a9849069f1c3fc34046cb72027c042 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[156], NULL, 1, 0, 0);
    codeobj_ae8d9b91b71151fd55103718820303fc = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[156], NULL, 1, 0, 0);
    codeobj_2f8c56cb2c1ce7b486a023de1baa4bb9 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[156], NULL, 1, 0, 0);
    codeobj_7af45ecd404c4c2c8bfe7799cc001997 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[82], mod_consts[82], mod_consts[156], NULL, 1, 0, 0);
    codeobj_2474e6cba16185d517e716c6cb3a429b = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[120], mod_consts[160], NULL, 1, 0, 0);
    codeobj_a63a5437941bc19636d119aa886fbc33 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[156], NULL, 1, 0, 0);
    codeobj_1e138ccd9059aa3e95734c64e059049e = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[156], NULL, 1, 0, 0);
    codeobj_ef5878db6a79b21a7f80ec2095a8dddc = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[161], NULL, 2, 0, 0);
    codeobj_1a6bc7ed582599132d32ef18464b9cb4 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[162], NULL, 2, 0, 0);
    codeobj_d89c6ff68d09ba2cf015740fbe4c17f9 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[39], mod_consts[162], NULL, 2, 0, 0);
    codeobj_e268c046791e90f4f3b25d633c373a56 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], mod_consts[162], NULL, 2, 0, 0);
    codeobj_da3b7faa8a96076891726e7fadbd14d2 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[163], NULL, 3, 0, 0);
    codeobj_90352fbd17632aba3137b3df1a2f2a66 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], mod_consts[164], NULL, 2, 0, 0);
    codeobj_0fab62094d760e7f6b83b5c9f03037fb = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[162], NULL, 2, 0, 0);
    codeobj_904017ebbf66530b6585cc1a0a1550d5 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], mod_consts[165], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__10_setWarning();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__11_getWarning();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__12_debug();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__13_setDebug();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__14_getDebug();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__15_info();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__16_getInfo();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__17_setInfo();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__18___log();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__19_getLogging();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__20_setLogging();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__21___print();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__22_debugStateCall(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__23_debugCall(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__2_setServerDelta();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__3_getTime();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__4_getOnlyTime();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__5___str__();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__6_setSeverity();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__7_getSeverity();


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__8_error(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__9_warning();


// The module function definitions.
static PyObject *impl_direct$directnotify$Notifier$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_logger = python_pars[2];
    struct Nuitka_FrameObject *frame_3588a2e12eaaf5ff3f3077219976a304;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3588a2e12eaaf5ff3f3077219976a304 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3588a2e12eaaf5ff3f3077219976a304)) {
        Py_XDECREF(cache_frame_3588a2e12eaaf5ff3f3077219976a304);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3588a2e12eaaf5ff3f3077219976a304 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3588a2e12eaaf5ff3f3077219976a304 = MAKE_FUNCTION_FRAME(tstate, codeobj_3588a2e12eaaf5ff3f3077219976a304, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3588a2e12eaaf5ff3f3077219976a304->m_type_description == NULL);
    frame_3588a2e12eaaf5ff3f3077219976a304 = cache_frame_3588a2e12eaaf5ff3f3077219976a304;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3588a2e12eaaf5ff3f3077219976a304);
    assert(Py_REFCNT(frame_3588a2e12eaaf5ff3f3077219976a304) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_logger);
        tmp_cmp_expr_left_1 = par_logger;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_2 == NULL)) {
            tmp_assattr_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_logger);
        tmp_assattr_value_3 = par_logger;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[3];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[4], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[3];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[5], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[7], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[8], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3588a2e12eaaf5ff3f3077219976a304, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3588a2e12eaaf5ff3f3077219976a304->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3588a2e12eaaf5ff3f3077219976a304, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3588a2e12eaaf5ff3f3077219976a304,
        type_description_1,
        par_self,
        par_name,
        par_logger
    );


    // Release cached frame if used for exception.
    if (frame_3588a2e12eaaf5ff3f3077219976a304 == cache_frame_3588a2e12eaaf5ff3f3077219976a304) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3588a2e12eaaf5ff3f3077219976a304);
        cache_frame_3588a2e12eaaf5ff3f3077219976a304 = NULL;
    }

    assertFrameObject(frame_3588a2e12eaaf5ff3f3077219976a304);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_logger);
    Py_DECREF(par_logger);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_logger);
    Py_DECREF(par_logger);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__2_setServerDelta(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_delta = python_pars[1];
    PyObject *par_timezone = python_pars[2];
    struct Nuitka_FrameObject *frame_da3b7faa8a96076891726e7fadbd14d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_da3b7faa8a96076891726e7fadbd14d2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da3b7faa8a96076891726e7fadbd14d2)) {
        Py_XDECREF(cache_frame_da3b7faa8a96076891726e7fadbd14d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da3b7faa8a96076891726e7fadbd14d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da3b7faa8a96076891726e7fadbd14d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_da3b7faa8a96076891726e7fadbd14d2, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da3b7faa8a96076891726e7fadbd14d2->m_type_description == NULL);
    frame_da3b7faa8a96076891726e7fadbd14d2 = cache_frame_da3b7faa8a96076891726e7fadbd14d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da3b7faa8a96076891726e7fadbd14d2);
    assert(Py_REFCNT(frame_da3b7faa8a96076891726e7fadbd14d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_delta);
        tmp_args_element_value_1 = par_delta;
        frame_da3b7faa8a96076891726e7fadbd14d2->m_frame.f_lineno = 54;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_delta;
            assert(old != NULL);
            par_delta = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_delta);
        tmp_add_expr_left_1 = par_delta;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_timezone);
        tmp_sub_expr_right_1 = par_timezone;
        tmp_assattr_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_da3b7faa8a96076891726e7fadbd14d2->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[18];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_delta);
        tmp_args_element_value_4 = par_delta;
        frame_da3b7faa8a96076891726e7fadbd14d2->m_frame.f_lineno = 62;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_timezone);
            tmp_sub_expr_right_2 = par_timezone;
            tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_1 = mod_consts[21];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_da3b7faa8a96076891726e7fadbd14d2->m_frame.f_lineno = 62;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da3b7faa8a96076891726e7fadbd14d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da3b7faa8a96076891726e7fadbd14d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da3b7faa8a96076891726e7fadbd14d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da3b7faa8a96076891726e7fadbd14d2,
        type_description_1,
        par_self,
        par_delta,
        par_timezone
    );


    // Release cached frame if used for exception.
    if (frame_da3b7faa8a96076891726e7fadbd14d2 == cache_frame_da3b7faa8a96076891726e7fadbd14d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da3b7faa8a96076891726e7fadbd14d2);
        cache_frame_da3b7faa8a96076891726e7fadbd14d2 = NULL;
    }

    assertFrameObject(frame_da3b7faa8a96076891726e7fadbd14d2);

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
    CHECK_OBJECT(par_delta);
    Py_DECREF(par_delta);
    par_delta = NULL;
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

    Py_XDECREF(par_delta);
    par_delta = NULL;
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
    CHECK_OBJECT(par_timezone);
    Py_DECREF(par_timezone);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_timezone);
    Py_DECREF(par_timezone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__3_getTime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a63a5437941bc19636d119aa886fbc33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a63a5437941bc19636d119aa886fbc33 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a63a5437941bc19636d119aa886fbc33)) {
        Py_XDECREF(cache_frame_a63a5437941bc19636d119aa886fbc33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a63a5437941bc19636d119aa886fbc33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a63a5437941bc19636d119aa886fbc33 = MAKE_FUNCTION_FRAME(tstate, codeobj_a63a5437941bc19636d119aa886fbc33, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a63a5437941bc19636d119aa886fbc33->m_type_description == NULL);
    frame_a63a5437941bc19636d119aa886fbc33 = cache_frame_a63a5437941bc19636d119aa886fbc33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a63a5437941bc19636d119aa886fbc33);
    assert(Py_REFCNT(frame_a63a5437941bc19636d119aa886fbc33) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[24];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a63a5437941bc19636d119aa886fbc33->m_frame.f_lineno = 71;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[11]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a63a5437941bc19636d119aa886fbc33->m_frame.f_lineno = 71;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a63a5437941bc19636d119aa886fbc33->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_a63a5437941bc19636d119aa886fbc33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a63a5437941bc19636d119aa886fbc33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a63a5437941bc19636d119aa886fbc33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a63a5437941bc19636d119aa886fbc33,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a63a5437941bc19636d119aa886fbc33 == cache_frame_a63a5437941bc19636d119aa886fbc33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a63a5437941bc19636d119aa886fbc33);
        cache_frame_a63a5437941bc19636d119aa886fbc33 = NULL;
    }

    assertFrameObject(frame_a63a5437941bc19636d119aa886fbc33);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__4_getOnlyTime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7af45ecd404c4c2c8bfe7799cc001997;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7af45ecd404c4c2c8bfe7799cc001997 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7af45ecd404c4c2c8bfe7799cc001997)) {
        Py_XDECREF(cache_frame_7af45ecd404c4c2c8bfe7799cc001997);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7af45ecd404c4c2c8bfe7799cc001997 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7af45ecd404c4c2c8bfe7799cc001997 = MAKE_FUNCTION_FRAME(tstate, codeobj_7af45ecd404c4c2c8bfe7799cc001997, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7af45ecd404c4c2c8bfe7799cc001997->m_type_description == NULL);
    frame_7af45ecd404c4c2c8bfe7799cc001997 = cache_frame_7af45ecd404c4c2c8bfe7799cc001997;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7af45ecd404c4c2c8bfe7799cc001997);
    assert(Py_REFCNT(frame_7af45ecd404c4c2c8bfe7799cc001997) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[27];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7af45ecd404c4c2c8bfe7799cc001997->m_frame.f_lineno = 78;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[11]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7af45ecd404c4c2c8bfe7799cc001997->m_frame.f_lineno = 78;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7af45ecd404c4c2c8bfe7799cc001997->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_7af45ecd404c4c2c8bfe7799cc001997, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7af45ecd404c4c2c8bfe7799cc001997->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7af45ecd404c4c2c8bfe7799cc001997, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7af45ecd404c4c2c8bfe7799cc001997,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7af45ecd404c4c2c8bfe7799cc001997 == cache_frame_7af45ecd404c4c2c8bfe7799cc001997) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7af45ecd404c4c2c8bfe7799cc001997);
        cache_frame_7af45ecd404c4c2c8bfe7799cc001997 = NULL;
    }

    assertFrameObject(frame_7af45ecd404c4c2c8bfe7799cc001997);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__5___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c11ba7fc4e364abfd9cc5281ad53495a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c11ba7fc4e364abfd9cc5281ad53495a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c11ba7fc4e364abfd9cc5281ad53495a)) {
        Py_XDECREF(cache_frame_c11ba7fc4e364abfd9cc5281ad53495a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c11ba7fc4e364abfd9cc5281ad53495a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c11ba7fc4e364abfd9cc5281ad53495a = MAKE_FUNCTION_FRAME(tstate, codeobj_c11ba7fc4e364abfd9cc5281ad53495a, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c11ba7fc4e364abfd9cc5281ad53495a->m_type_description == NULL);
    frame_c11ba7fc4e364abfd9cc5281ad53495a = cache_frame_c11ba7fc4e364abfd9cc5281ad53495a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c11ba7fc4e364abfd9cc5281ad53495a);
    assert(Py_REFCNT(frame_c11ba7fc4e364abfd9cc5281ad53495a) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[29];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_c11ba7fc4e364abfd9cc5281ad53495a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c11ba7fc4e364abfd9cc5281ad53495a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c11ba7fc4e364abfd9cc5281ad53495a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c11ba7fc4e364abfd9cc5281ad53495a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c11ba7fc4e364abfd9cc5281ad53495a == cache_frame_c11ba7fc4e364abfd9cc5281ad53495a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c11ba7fc4e364abfd9cc5281ad53495a);
        cache_frame_c11ba7fc4e364abfd9cc5281ad53495a = NULL;
    }

    assertFrameObject(frame_c11ba7fc4e364abfd9cc5281ad53495a);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__6_setSeverity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_severity = python_pars[1];
    PyObject *var_NSDebug = NULL;
    PyObject *var_NSInfo = NULL;
    PyObject *var_NSWarning = NULL;
    PyObject *var_NSError = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_90352fbd17632aba3137b3df1a2f2a66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_90352fbd17632aba3137b3df1a2f2a66 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90352fbd17632aba3137b3df1a2f2a66)) {
        Py_XDECREF(cache_frame_90352fbd17632aba3137b3df1a2f2a66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90352fbd17632aba3137b3df1a2f2a66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90352fbd17632aba3137b3df1a2f2a66 = MAKE_FUNCTION_FRAME(tstate, codeobj_90352fbd17632aba3137b3df1a2f2a66, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90352fbd17632aba3137b3df1a2f2a66->m_type_description == NULL);
    frame_90352fbd17632aba3137b3df1a2f2a66 = cache_frame_90352fbd17632aba3137b3df1a2f2a66;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_90352fbd17632aba3137b3df1a2f2a66);
    assert(Py_REFCNT(frame_90352fbd17632aba3137b3df1a2f2a66) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[31];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[32];
        tmp_level_value_1 = mod_consts[6];
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 89;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[33],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[33]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_NSDebug == NULL);
        var_NSDebug = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[34],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[34]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_NSInfo == NULL);
        var_NSInfo = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[35],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[35]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_NSWarning == NULL);
        var_NSWarning = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[36],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[36]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_NSError == NULL);
        var_NSError = tmp_assign_source_5;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_severity);
        tmp_cmp_expr_left_1 = par_severity;
        CHECK_OBJECT(var_NSError);
        tmp_cmp_expr_right_1 = var_NSError;
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 91;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[37],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 92;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 93;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_severity);
        tmp_cmp_expr_left_2 = par_severity;
        CHECK_OBJECT(var_NSWarning);
        tmp_cmp_expr_right_2 = var_NSWarning;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 95;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[37],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 96;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 97;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_severity);
        tmp_cmp_expr_left_3 = par_severity;
        CHECK_OBJECT(var_NSInfo);
        tmp_cmp_expr_right_3 = var_NSInfo;
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 99;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[37],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 100;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 101;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_severity);
        tmp_cmp_expr_left_4 = par_severity;
        CHECK_OBJECT(var_NSDebug);
        tmp_cmp_expr_right_4 = var_NSDebug;
        tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 103;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[37],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_11 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 104;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_11,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_called_instance_12 = par_self;
        frame_90352fbd17632aba3137b3df1a2f2a66->m_frame.f_lineno = 105;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[40],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90352fbd17632aba3137b3df1a2f2a66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90352fbd17632aba3137b3df1a2f2a66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90352fbd17632aba3137b3df1a2f2a66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90352fbd17632aba3137b3df1a2f2a66,
        type_description_1,
        par_self,
        par_severity,
        var_NSDebug,
        var_NSInfo,
        var_NSWarning,
        var_NSError
    );


    // Release cached frame if used for exception.
    if (frame_90352fbd17632aba3137b3df1a2f2a66 == cache_frame_90352fbd17632aba3137b3df1a2f2a66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90352fbd17632aba3137b3df1a2f2a66);
        cache_frame_90352fbd17632aba3137b3df1a2f2a66 = NULL;
    }

    assertFrameObject(frame_90352fbd17632aba3137b3df1a2f2a66);

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
    CHECK_OBJECT(var_NSDebug);
    Py_DECREF(var_NSDebug);
    var_NSDebug = NULL;
    CHECK_OBJECT(var_NSInfo);
    Py_DECREF(var_NSInfo);
    var_NSInfo = NULL;
    CHECK_OBJECT(var_NSWarning);
    Py_DECREF(var_NSWarning);
    var_NSWarning = NULL;
    CHECK_OBJECT(var_NSError);
    Py_DECREF(var_NSError);
    var_NSError = NULL;
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

    Py_XDECREF(var_NSDebug);
    var_NSDebug = NULL;
    Py_XDECREF(var_NSInfo);
    var_NSInfo = NULL;
    Py_XDECREF(var_NSWarning);
    var_NSWarning = NULL;
    Py_XDECREF(var_NSError);
    var_NSError = NULL;
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
    CHECK_OBJECT(par_severity);
    Py_DECREF(par_severity);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_severity);
    Py_DECREF(par_severity);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__7_getSeverity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_NSDebug = NULL;
    PyObject *var_NSInfo = NULL;
    PyObject *var_NSWarning = NULL;
    PyObject *var_NSError = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2474e6cba16185d517e716c6cb3a429b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2474e6cba16185d517e716c6cb3a429b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2474e6cba16185d517e716c6cb3a429b)) {
        Py_XDECREF(cache_frame_2474e6cba16185d517e716c6cb3a429b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2474e6cba16185d517e716c6cb3a429b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2474e6cba16185d517e716c6cb3a429b = MAKE_FUNCTION_FRAME(tstate, codeobj_2474e6cba16185d517e716c6cb3a429b, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2474e6cba16185d517e716c6cb3a429b->m_type_description == NULL);
    frame_2474e6cba16185d517e716c6cb3a429b = cache_frame_2474e6cba16185d517e716c6cb3a429b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2474e6cba16185d517e716c6cb3a429b);
    assert(Py_REFCNT(frame_2474e6cba16185d517e716c6cb3a429b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[31];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[32];
        tmp_level_value_1 = mod_consts[6];
        frame_2474e6cba16185d517e716c6cb3a429b->m_frame.f_lineno = 108;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[33],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[33]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_NSDebug == NULL);
        var_NSDebug = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[34],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[34]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_NSInfo == NULL);
        var_NSInfo = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[35],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[35]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_NSWarning == NULL);
        var_NSWarning = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[36],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[36]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_NSError == NULL);
        var_NSError = tmp_assign_source_5;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2474e6cba16185d517e716c6cb3a429b->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[42]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 109;
            type_description_1 = "ooooo";
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
    CHECK_OBJECT(var_NSDebug);
    tmp_return_value = var_NSDebug;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_2474e6cba16185d517e716c6cb3a429b->m_frame.f_lineno = 111;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[43]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_NSInfo);
    tmp_return_value = var_NSInfo;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_2474e6cba16185d517e716c6cb3a429b->m_frame.f_lineno = 113;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[44]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(var_NSWarning);
    tmp_return_value = var_NSWarning;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    CHECK_OBJECT(var_NSError);
    tmp_return_value = var_NSError;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_2474e6cba16185d517e716c6cb3a429b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2474e6cba16185d517e716c6cb3a429b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2474e6cba16185d517e716c6cb3a429b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2474e6cba16185d517e716c6cb3a429b,
        type_description_1,
        par_self,
        var_NSDebug,
        var_NSInfo,
        var_NSWarning,
        var_NSError
    );


    // Release cached frame if used for exception.
    if (frame_2474e6cba16185d517e716c6cb3a429b == cache_frame_2474e6cba16185d517e716c6cb3a429b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2474e6cba16185d517e716c6cb3a429b);
        cache_frame_2474e6cba16185d517e716c6cb3a429b = NULL;
    }

    assertFrameObject(frame_2474e6cba16185d517e716c6cb3a429b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_NSDebug);
    Py_DECREF(var_NSDebug);
    var_NSDebug = NULL;
    CHECK_OBJECT(var_NSInfo);
    Py_DECREF(var_NSInfo);
    var_NSInfo = NULL;
    CHECK_OBJECT(var_NSWarning);
    Py_DECREF(var_NSWarning);
    var_NSWarning = NULL;
    CHECK_OBJECT(var_NSError);
    Py_DECREF(var_NSError);
    var_NSError = NULL;
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

    Py_XDECREF(var_NSDebug);
    var_NSDebug = NULL;
    Py_XDECREF(var_NSInfo);
    var_NSInfo = NULL;
    Py_XDECREF(var_NSWarning);
    var_NSWarning = NULL;
    Py_XDECREF(var_NSError);
    var_NSError = NULL;
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


static PyObject *impl_direct$directnotify$Notifier$$$function__8_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_errorString = python_pars[1];
    PyObject *par_exception = python_pars[2];
    PyObject *var_message = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_7c2816465e285ef0d26b6b692a0c8df4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7c2816465e285ef0d26b6b692a0c8df4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7c2816465e285ef0d26b6b692a0c8df4)) {
        Py_XDECREF(cache_frame_7c2816465e285ef0d26b6b692a0c8df4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c2816465e285ef0d26b6b692a0c8df4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c2816465e285ef0d26b6b692a0c8df4 = MAKE_FUNCTION_FRAME(tstate, codeobj_7c2816465e285ef0d26b6b692a0c8df4, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c2816465e285ef0d26b6b692a0c8df4->m_type_description == NULL);
    frame_7c2816465e285ef0d26b6b692a0c8df4 = cache_frame_7c2816465e285ef0d26b6b692a0c8df4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c2816465e285ef0d26b6b692a0c8df4);
    assert(Py_REFCNT(frame_7c2816465e285ef0d26b6b692a0c8df4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_errorString);
        tmp_unicode_arg_1 = par_errorString;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7c2816465e285ef0d26b6b692a0c8df4->m_frame.f_lineno = 125;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 125;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_7c2816465e285ef0d26b6b692a0c8df4->m_frame.f_lineno = 126;
        tmp_add_expr_left_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_unicode_arg_2 = par_exception;
        tmp_add_expr_right_5 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = mod_consts[48];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[49];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_1 = var_message;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_exception);
        tmp_unicode_arg_3 = par_exception;
        tmp_add_expr_left_9 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_9 = mod_consts[48];
        tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[49];
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_6 = var_message;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_1 = var_string;
        frame_7c2816465e285ef0d26b6b692a0c8df4->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_exception);
        tmp_called_value_1 = par_exception;
        CHECK_OBJECT(par_errorString);
        tmp_args_element_value_2 = par_errorString;
        frame_7c2816465e285ef0d26b6b692a0c8df4->m_frame.f_lineno = 130;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 130;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c2816465e285ef0d26b6b692a0c8df4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c2816465e285ef0d26b6b692a0c8df4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c2816465e285ef0d26b6b692a0c8df4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c2816465e285ef0d26b6b692a0c8df4,
        type_description_1,
        par_self,
        par_errorString,
        par_exception,
        var_message,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_7c2816465e285ef0d26b6b692a0c8df4 == cache_frame_7c2816465e285ef0d26b6b692a0c8df4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c2816465e285ef0d26b6b692a0c8df4);
        cache_frame_7c2816465e285ef0d26b6b692a0c8df4 = NULL;
    }

    assertFrameObject(frame_7c2816465e285ef0d26b6b692a0c8df4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_errorString);
    Py_DECREF(par_errorString);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_direct$directnotify$Notifier$$$function__9_warning(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_warningString = python_pars[1];
    PyObject *var_message = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_904017ebbf66530b6585cc1a0a1550d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_904017ebbf66530b6585cc1a0a1550d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_904017ebbf66530b6585cc1a0a1550d5)) {
        Py_XDECREF(cache_frame_904017ebbf66530b6585cc1a0a1550d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_904017ebbf66530b6585cc1a0a1550d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_904017ebbf66530b6585cc1a0a1550d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_904017ebbf66530b6585cc1a0a1550d5, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_904017ebbf66530b6585cc1a0a1550d5->m_type_description == NULL);
    frame_904017ebbf66530b6585cc1a0a1550d5 = cache_frame_904017ebbf66530b6585cc1a0a1550d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_904017ebbf66530b6585cc1a0a1550d5);
    assert(Py_REFCNT(frame_904017ebbf66530b6585cc1a0a1550d5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 137;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_warningString);
        tmp_unicode_arg_1 = par_warningString;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[45]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_904017ebbf66530b6585cc1a0a1550d5->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 139;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_904017ebbf66530b6585cc1a0a1550d5->m_frame.f_lineno = 140;
        tmp_add_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[53];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_1 = var_message;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_expression_value_4;
        tmp_add_expr_left_6 = mod_consts[54];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_add_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_5 = mod_consts[53];
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_4 = var_message;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_1 = var_string;
        frame_904017ebbf66530b6585cc1a0a1550d5->m_frame.f_lineno = 143;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_2 = var_string;
        frame_904017ebbf66530b6585cc1a0a1550d5->m_frame.f_lineno = 144;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[55], tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_904017ebbf66530b6585cc1a0a1550d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904017ebbf66530b6585cc1a0a1550d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904017ebbf66530b6585cc1a0a1550d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_904017ebbf66530b6585cc1a0a1550d5,
        type_description_1,
        par_self,
        par_warningString,
        var_message,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_904017ebbf66530b6585cc1a0a1550d5 == cache_frame_904017ebbf66530b6585cc1a0a1550d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_904017ebbf66530b6585cc1a0a1550d5);
        cache_frame_904017ebbf66530b6585cc1a0a1550d5 = NULL;
    }

    assertFrameObject(frame_904017ebbf66530b6585cc1a0a1550d5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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

    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_warningString);
    Py_DECREF(par_warningString);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_warningString);
    Py_DECREF(par_warningString);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__10_setWarning(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bool = python_pars[1];
    struct Nuitka_FrameObject *frame_0fab62094d760e7f6b83b5c9f03037fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0fab62094d760e7f6b83b5c9f03037fb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0fab62094d760e7f6b83b5c9f03037fb)) {
        Py_XDECREF(cache_frame_0fab62094d760e7f6b83b5c9f03037fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0fab62094d760e7f6b83b5c9f03037fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0fab62094d760e7f6b83b5c9f03037fb = MAKE_FUNCTION_FRAME(tstate, codeobj_0fab62094d760e7f6b83b5c9f03037fb, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0fab62094d760e7f6b83b5c9f03037fb->m_type_description == NULL);
    frame_0fab62094d760e7f6b83b5c9f03037fb = cache_frame_0fab62094d760e7f6b83b5c9f03037fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0fab62094d760e7f6b83b5c9f03037fb);
    assert(Py_REFCNT(frame_0fab62094d760e7f6b83b5c9f03037fb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bool);
        tmp_assattr_value_1 = par_bool;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_0fab62094d760e7f6b83b5c9f03037fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0fab62094d760e7f6b83b5c9f03037fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0fab62094d760e7f6b83b5c9f03037fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0fab62094d760e7f6b83b5c9f03037fb,
        type_description_1,
        par_self,
        par_bool
    );


    // Release cached frame if used for exception.
    if (frame_0fab62094d760e7f6b83b5c9f03037fb == cache_frame_0fab62094d760e7f6b83b5c9f03037fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0fab62094d760e7f6b83b5c9f03037fb);
        cache_frame_0fab62094d760e7f6b83b5c9f03037fb = NULL;
    }

    assertFrameObject(frame_0fab62094d760e7f6b83b5c9f03037fb);

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
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__11_getWarning(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1e138ccd9059aa3e95734c64e059049e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e138ccd9059aa3e95734c64e059049e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e138ccd9059aa3e95734c64e059049e)) {
        Py_XDECREF(cache_frame_1e138ccd9059aa3e95734c64e059049e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e138ccd9059aa3e95734c64e059049e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e138ccd9059aa3e95734c64e059049e = MAKE_FUNCTION_FRAME(tstate, codeobj_1e138ccd9059aa3e95734c64e059049e, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e138ccd9059aa3e95734c64e059049e->m_type_description == NULL);
    frame_1e138ccd9059aa3e95734c64e059049e = cache_frame_1e138ccd9059aa3e95734c64e059049e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e138ccd9059aa3e95734c64e059049e);
    assert(Py_REFCNT(frame_1e138ccd9059aa3e95734c64e059049e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_1e138ccd9059aa3e95734c64e059049e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e138ccd9059aa3e95734c64e059049e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e138ccd9059aa3e95734c64e059049e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e138ccd9059aa3e95734c64e059049e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1e138ccd9059aa3e95734c64e059049e == cache_frame_1e138ccd9059aa3e95734c64e059049e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e138ccd9059aa3e95734c64e059049e);
        cache_frame_1e138ccd9059aa3e95734c64e059049e = NULL;
    }

    assertFrameObject(frame_1e138ccd9059aa3e95734c64e059049e);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__12_debug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_debugString = python_pars[1];
    PyObject *var_message = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_f8eaca25d4e59fa9eb4407b86c340f55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f8eaca25d4e59fa9eb4407b86c340f55 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f8eaca25d4e59fa9eb4407b86c340f55)) {
        Py_XDECREF(cache_frame_f8eaca25d4e59fa9eb4407b86c340f55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8eaca25d4e59fa9eb4407b86c340f55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8eaca25d4e59fa9eb4407b86c340f55 = MAKE_FUNCTION_FRAME(tstate, codeobj_f8eaca25d4e59fa9eb4407b86c340f55, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8eaca25d4e59fa9eb4407b86c340f55->m_type_description == NULL);
    frame_f8eaca25d4e59fa9eb4407b86c340f55 = cache_frame_f8eaca25d4e59fa9eb4407b86c340f55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f8eaca25d4e59fa9eb4407b86c340f55);
    assert(Py_REFCNT(frame_f8eaca25d4e59fa9eb4407b86c340f55) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 164;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_debugString);
        tmp_unicode_arg_1 = par_debugString;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[45]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f8eaca25d4e59fa9eb4407b86c340f55->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_f8eaca25d4e59fa9eb4407b86c340f55->m_frame.f_lineno = 167;
        tmp_add_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[59];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_1 = var_message;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_expression_value_4;
        tmp_add_expr_left_6 = mod_consts[54];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_add_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_5 = mod_consts[59];
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_4 = var_message;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_1 = var_string;
        frame_f8eaca25d4e59fa9eb4407b86c340f55->m_frame.f_lineno = 170;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_2 = var_string;
        frame_f8eaca25d4e59fa9eb4407b86c340f55->m_frame.f_lineno = 171;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[55], tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8eaca25d4e59fa9eb4407b86c340f55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8eaca25d4e59fa9eb4407b86c340f55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8eaca25d4e59fa9eb4407b86c340f55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8eaca25d4e59fa9eb4407b86c340f55,
        type_description_1,
        par_self,
        par_debugString,
        var_message,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_f8eaca25d4e59fa9eb4407b86c340f55 == cache_frame_f8eaca25d4e59fa9eb4407b86c340f55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8eaca25d4e59fa9eb4407b86c340f55);
        cache_frame_f8eaca25d4e59fa9eb4407b86c340f55 = NULL;
    }

    assertFrameObject(frame_f8eaca25d4e59fa9eb4407b86c340f55);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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

    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_debugString);
    Py_DECREF(par_debugString);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_debugString);
    Py_DECREF(par_debugString);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__13_setDebug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bool = python_pars[1];
    struct Nuitka_FrameObject *frame_1a6bc7ed582599132d32ef18464b9cb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a6bc7ed582599132d32ef18464b9cb4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a6bc7ed582599132d32ef18464b9cb4)) {
        Py_XDECREF(cache_frame_1a6bc7ed582599132d32ef18464b9cb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a6bc7ed582599132d32ef18464b9cb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a6bc7ed582599132d32ef18464b9cb4 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a6bc7ed582599132d32ef18464b9cb4, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a6bc7ed582599132d32ef18464b9cb4->m_type_description == NULL);
    frame_1a6bc7ed582599132d32ef18464b9cb4 = cache_frame_1a6bc7ed582599132d32ef18464b9cb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a6bc7ed582599132d32ef18464b9cb4);
    assert(Py_REFCNT(frame_1a6bc7ed582599132d32ef18464b9cb4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bool);
        tmp_assattr_value_1 = par_bool;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a6bc7ed582599132d32ef18464b9cb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a6bc7ed582599132d32ef18464b9cb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a6bc7ed582599132d32ef18464b9cb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a6bc7ed582599132d32ef18464b9cb4,
        type_description_1,
        par_self,
        par_bool
    );


    // Release cached frame if used for exception.
    if (frame_1a6bc7ed582599132d32ef18464b9cb4 == cache_frame_1a6bc7ed582599132d32ef18464b9cb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a6bc7ed582599132d32ef18464b9cb4);
        cache_frame_1a6bc7ed582599132d32ef18464b9cb4 = NULL;
    }

    assertFrameObject(frame_1a6bc7ed582599132d32ef18464b9cb4);

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
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__14_getDebug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_34a9849069f1c3fc34046cb72027c042;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34a9849069f1c3fc34046cb72027c042 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34a9849069f1c3fc34046cb72027c042)) {
        Py_XDECREF(cache_frame_34a9849069f1c3fc34046cb72027c042);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34a9849069f1c3fc34046cb72027c042 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34a9849069f1c3fc34046cb72027c042 = MAKE_FUNCTION_FRAME(tstate, codeobj_34a9849069f1c3fc34046cb72027c042, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34a9849069f1c3fc34046cb72027c042->m_type_description == NULL);
    frame_34a9849069f1c3fc34046cb72027c042 = cache_frame_34a9849069f1c3fc34046cb72027c042;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_34a9849069f1c3fc34046cb72027c042);
    assert(Py_REFCNT(frame_34a9849069f1c3fc34046cb72027c042) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_34a9849069f1c3fc34046cb72027c042, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34a9849069f1c3fc34046cb72027c042->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34a9849069f1c3fc34046cb72027c042, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34a9849069f1c3fc34046cb72027c042,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_34a9849069f1c3fc34046cb72027c042 == cache_frame_34a9849069f1c3fc34046cb72027c042) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34a9849069f1c3fc34046cb72027c042);
        cache_frame_34a9849069f1c3fc34046cb72027c042 = NULL;
    }

    assertFrameObject(frame_34a9849069f1c3fc34046cb72027c042);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__15_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_infoString = python_pars[1];
    PyObject *var_message = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_ef5878db6a79b21a7f80ec2095a8dddc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ef5878db6a79b21a7f80ec2095a8dddc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef5878db6a79b21a7f80ec2095a8dddc)) {
        Py_XDECREF(cache_frame_ef5878db6a79b21a7f80ec2095a8dddc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef5878db6a79b21a7f80ec2095a8dddc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef5878db6a79b21a7f80ec2095a8dddc = MAKE_FUNCTION_FRAME(tstate, codeobj_ef5878db6a79b21a7f80ec2095a8dddc, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef5878db6a79b21a7f80ec2095a8dddc->m_type_description == NULL);
    frame_ef5878db6a79b21a7f80ec2095a8dddc = cache_frame_ef5878db6a79b21a7f80ec2095a8dddc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ef5878db6a79b21a7f80ec2095a8dddc);
    assert(Py_REFCNT(frame_ef5878db6a79b21a7f80ec2095a8dddc) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 191;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_infoString);
        tmp_unicode_arg_1 = par_infoString;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[45]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ef5878db6a79b21a7f80ec2095a8dddc->m_frame.f_lineno = 193;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_ef5878db6a79b21a7f80ec2095a8dddc->m_frame.f_lineno = 194;
        tmp_add_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[47]);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[48];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_1 = var_message;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_expression_value_4;
        tmp_add_expr_left_6 = mod_consts[54];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_add_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_5 = mod_consts[48];
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message);
        tmp_add_expr_right_4 = var_message;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_1 = var_string;
        frame_ef5878db6a79b21a7f80ec2095a8dddc->m_frame.f_lineno = 197;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_2 = var_string;
        frame_ef5878db6a79b21a7f80ec2095a8dddc->m_frame.f_lineno = 198;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[55], tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef5878db6a79b21a7f80ec2095a8dddc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef5878db6a79b21a7f80ec2095a8dddc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef5878db6a79b21a7f80ec2095a8dddc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef5878db6a79b21a7f80ec2095a8dddc,
        type_description_1,
        par_self,
        par_infoString,
        var_message,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_ef5878db6a79b21a7f80ec2095a8dddc == cache_frame_ef5878db6a79b21a7f80ec2095a8dddc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef5878db6a79b21a7f80ec2095a8dddc);
        cache_frame_ef5878db6a79b21a7f80ec2095a8dddc = NULL;
    }

    assertFrameObject(frame_ef5878db6a79b21a7f80ec2095a8dddc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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

    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_infoString);
    Py_DECREF(par_infoString);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_infoString);
    Py_DECREF(par_infoString);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__16_getInfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ae8d9b91b71151fd55103718820303fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae8d9b91b71151fd55103718820303fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae8d9b91b71151fd55103718820303fc)) {
        Py_XDECREF(cache_frame_ae8d9b91b71151fd55103718820303fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae8d9b91b71151fd55103718820303fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae8d9b91b71151fd55103718820303fc = MAKE_FUNCTION_FRAME(tstate, codeobj_ae8d9b91b71151fd55103718820303fc, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae8d9b91b71151fd55103718820303fc->m_type_description == NULL);
    frame_ae8d9b91b71151fd55103718820303fc = cache_frame_ae8d9b91b71151fd55103718820303fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ae8d9b91b71151fd55103718820303fc);
    assert(Py_REFCNT(frame_ae8d9b91b71151fd55103718820303fc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_ae8d9b91b71151fd55103718820303fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae8d9b91b71151fd55103718820303fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae8d9b91b71151fd55103718820303fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae8d9b91b71151fd55103718820303fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ae8d9b91b71151fd55103718820303fc == cache_frame_ae8d9b91b71151fd55103718820303fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae8d9b91b71151fd55103718820303fc);
        cache_frame_ae8d9b91b71151fd55103718820303fc = NULL;
    }

    assertFrameObject(frame_ae8d9b91b71151fd55103718820303fc);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__17_setInfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bool = python_pars[1];
    struct Nuitka_FrameObject *frame_d89c6ff68d09ba2cf015740fbe4c17f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9)) {
        Py_XDECREF(cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_d89c6ff68d09ba2cf015740fbe4c17f9, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9->m_type_description == NULL);
    frame_d89c6ff68d09ba2cf015740fbe4c17f9 = cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d89c6ff68d09ba2cf015740fbe4c17f9);
    assert(Py_REFCNT(frame_d89c6ff68d09ba2cf015740fbe4c17f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bool);
        tmp_assattr_value_1 = par_bool;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d89c6ff68d09ba2cf015740fbe4c17f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d89c6ff68d09ba2cf015740fbe4c17f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d89c6ff68d09ba2cf015740fbe4c17f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d89c6ff68d09ba2cf015740fbe4c17f9,
        type_description_1,
        par_self,
        par_bool
    );


    // Release cached frame if used for exception.
    if (frame_d89c6ff68d09ba2cf015740fbe4c17f9 == cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9);
        cache_frame_d89c6ff68d09ba2cf015740fbe4c17f9 = NULL;
    }

    assertFrameObject(frame_d89c6ff68d09ba2cf015740fbe4c17f9);

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
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__18___log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_logEntry = python_pars[1];
    struct Nuitka_FrameObject *frame_267acf1f2371fd57f1f0c4cd6b235d95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_267acf1f2371fd57f1f0c4cd6b235d95 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_267acf1f2371fd57f1f0c4cd6b235d95)) {
        Py_XDECREF(cache_frame_267acf1f2371fd57f1f0c4cd6b235d95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_267acf1f2371fd57f1f0c4cd6b235d95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_267acf1f2371fd57f1f0c4cd6b235d95 = MAKE_FUNCTION_FRAME(tstate, codeobj_267acf1f2371fd57f1f0c4cd6b235d95, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_267acf1f2371fd57f1f0c4cd6b235d95->m_type_description == NULL);
    frame_267acf1f2371fd57f1f0c4cd6b235d95 = cache_frame_267acf1f2371fd57f1f0c4cd6b235d95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_267acf1f2371fd57f1f0c4cd6b235d95);
    assert(Py_REFCNT(frame_267acf1f2371fd57f1f0c4cd6b235d95) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 218;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_logEntry);
        tmp_args_element_value_1 = par_logEntry;
        frame_267acf1f2371fd57f1f0c4cd6b235d95->m_frame.f_lineno = 219;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[66], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_267acf1f2371fd57f1f0c4cd6b235d95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_267acf1f2371fd57f1f0c4cd6b235d95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_267acf1f2371fd57f1f0c4cd6b235d95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_267acf1f2371fd57f1f0c4cd6b235d95,
        type_description_1,
        par_self,
        par_logEntry
    );


    // Release cached frame if used for exception.
    if (frame_267acf1f2371fd57f1f0c4cd6b235d95 == cache_frame_267acf1f2371fd57f1f0c4cd6b235d95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_267acf1f2371fd57f1f0c4cd6b235d95);
        cache_frame_267acf1f2371fd57f1f0c4cd6b235d95 = NULL;
    }

    assertFrameObject(frame_267acf1f2371fd57f1f0c4cd6b235d95);

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
    CHECK_OBJECT(par_logEntry);
    Py_DECREF(par_logEntry);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_logEntry);
    Py_DECREF(par_logEntry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__19_getLogging(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2f8c56cb2c1ce7b486a023de1baa4bb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9)) {
        Py_XDECREF(cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f8c56cb2c1ce7b486a023de1baa4bb9, module_direct$directnotify$Notifier, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9->m_type_description == NULL);
    frame_2f8c56cb2c1ce7b486a023de1baa4bb9 = cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f8c56cb2c1ce7b486a023de1baa4bb9);
    assert(Py_REFCNT(frame_2f8c56cb2c1ce7b486a023de1baa4bb9) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_2f8c56cb2c1ce7b486a023de1baa4bb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f8c56cb2c1ce7b486a023de1baa4bb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f8c56cb2c1ce7b486a023de1baa4bb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f8c56cb2c1ce7b486a023de1baa4bb9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2f8c56cb2c1ce7b486a023de1baa4bb9 == cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9);
        cache_frame_2f8c56cb2c1ce7b486a023de1baa4bb9 = NULL;
    }

    assertFrameObject(frame_2f8c56cb2c1ce7b486a023de1baa4bb9);

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


static PyObject *impl_direct$directnotify$Notifier$$$function__20_setLogging(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bool = python_pars[1];
    struct Nuitka_FrameObject *frame_e268c046791e90f4f3b25d633c373a56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e268c046791e90f4f3b25d633c373a56 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e268c046791e90f4f3b25d633c373a56)) {
        Py_XDECREF(cache_frame_e268c046791e90f4f3b25d633c373a56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e268c046791e90f4f3b25d633c373a56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e268c046791e90f4f3b25d633c373a56 = MAKE_FUNCTION_FRAME(tstate, codeobj_e268c046791e90f4f3b25d633c373a56, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e268c046791e90f4f3b25d633c373a56->m_type_description == NULL);
    frame_e268c046791e90f4f3b25d633c373a56 = cache_frame_e268c046791e90f4f3b25d633c373a56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e268c046791e90f4f3b25d633c373a56);
    assert(Py_REFCNT(frame_e268c046791e90f4f3b25d633c373a56) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bool);
        tmp_assattr_value_1 = par_bool;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e268c046791e90f4f3b25d633c373a56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e268c046791e90f4f3b25d633c373a56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e268c046791e90f4f3b25d633c373a56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e268c046791e90f4f3b25d633c373a56,
        type_description_1,
        par_self,
        par_bool
    );


    // Release cached frame if used for exception.
    if (frame_e268c046791e90f4f3b25d633c373a56 == cache_frame_e268c046791e90f4f3b25d633c373a56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e268c046791e90f4f3b25d633c373a56);
        cache_frame_e268c046791e90f4f3b25d633c373a56 = NULL;
    }

    assertFrameObject(frame_e268c046791e90f4f3b25d633c373a56);

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
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bool);
    Py_DECREF(par_bool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__21___print(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_string = python_pars[1];
    struct Nuitka_FrameObject *frame_e9005b9e3461f6039715595ffb4dc9fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e9005b9e3461f6039715595ffb4dc9fd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9005b9e3461f6039715595ffb4dc9fd)) {
        Py_XDECREF(cache_frame_e9005b9e3461f6039715595ffb4dc9fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9005b9e3461f6039715595ffb4dc9fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9005b9e3461f6039715595ffb4dc9fd = MAKE_FUNCTION_FRAME(tstate, codeobj_e9005b9e3461f6039715595ffb4dc9fd, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9005b9e3461f6039715595ffb4dc9fd->m_type_description == NULL);
    frame_e9005b9e3461f6039715595ffb4dc9fd = cache_frame_e9005b9e3461f6039715595ffb4dc9fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e9005b9e3461f6039715595ffb4dc9fd);
    assert(Py_REFCNT(frame_e9005b9e3461f6039715595ffb4dc9fd) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[70]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 237;
            type_description_1 = "oo";
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[70]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[71]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_string);
        tmp_add_expr_left_1 = par_string;
        tmp_add_expr_right_1 = mod_consts[72];
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9005b9e3461f6039715595ffb4dc9fd->m_frame.f_lineno = 238;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_4 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_expression_value_4 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_string);
        tmp_add_expr_left_2 = par_string;
        tmp_add_expr_right_2 = mod_consts[72];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9005b9e3461f6039715595ffb4dc9fd->m_frame.f_lineno = 240;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9005b9e3461f6039715595ffb4dc9fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9005b9e3461f6039715595ffb4dc9fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9005b9e3461f6039715595ffb4dc9fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9005b9e3461f6039715595ffb4dc9fd,
        type_description_1,
        par_self,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_e9005b9e3461f6039715595ffb4dc9fd == cache_frame_e9005b9e3461f6039715595ffb4dc9fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9005b9e3461f6039715595ffb4dc9fd);
        cache_frame_e9005b9e3461f6039715595ffb4dc9fd = NULL;
    }

    assertFrameObject(frame_e9005b9e3461f6039715595ffb4dc9fd);

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
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__22_debugStateCall(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_fsmMemberName = python_pars[2];
    PyObject *par_secondaryFsm = python_pars[3];
    PyObject *var_state = NULL;
    PyObject *var_doId = NULL;
    PyObject *var_fsm = NULL;
    PyObject *var_stateObj = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_16ab6dfb0fd24737a32ebbf065bee7b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3)) {
        Py_XDECREF(cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3 = MAKE_FUNCTION_FRAME(tstate, codeobj_16ab6dfb0fd24737a32ebbf065bee7b3, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_type_description == NULL);
    frame_16ab6dfb0fd24737a32ebbf065bee7b3 = cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_16ab6dfb0fd24737a32ebbf065bee7b3);
    assert(Py_REFCNT(frame_16ab6dfb0fd24737a32ebbf065bee7b3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 250;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[74];
        assert(var_state == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[74];
        assert(var_doId == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_doId = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_3 = par_obj;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[75]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fsmMemberName);
        tmp_args_element_value_1 = par_fsmMemberName;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 255;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fsm == NULL);
        var_fsm = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_fsm);
        tmp_cmp_expr_left_2 = var_fsm;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_fsm);
        tmp_called_instance_1 = var_fsm;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 257;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[76]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stateObj == NULL);
        var_stateObj = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_stateObj);
        tmp_cmp_expr_left_3 = var_stateObj;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_stateObj);
        tmp_called_instance_2 = var_stateObj;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 260;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[77]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_state;
            assert(old != NULL);
            var_state = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_5 = par_obj;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[75]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_secondaryFsm);
        tmp_args_element_value_2 = par_secondaryFsm;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 262;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fsm;
            var_fsm = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_fsm);
        tmp_cmp_expr_left_4 = var_fsm;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_fsm);
        tmp_called_instance_3 = var_fsm;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 264;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[76]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_stateObj;
            var_stateObj = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_stateObj);
        tmp_cmp_expr_left_5 = var_stateObj;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[78];
        CHECK_OBJECT(var_state);
        tmp_tuple_element_1 = var_state;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_4;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_stateObj);
            tmp_called_instance_4 = var_stateObj;
            frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 267;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[77]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_state;
            assert(old != NULL);
            var_state = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_6 = par_obj;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[79]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_7;
        tmp_mod_expr_left_2 = mod_consts[80];
        CHECK_OBJECT(par_obj);
        tmp_expression_value_7 = par_obj;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[79]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        tmp_assign_source_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_doId;
            assert(old != NULL);
            var_doId = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_5;
        tmp_mod_expr_left_3 = mod_consts[81];
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 274;
        tmp_tuple_element_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[82]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_id_arg_1;
            PyObject *tmp_called_instance_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_state);
            tmp_tuple_element_3 = var_state;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 2, tmp_tuple_element_3);
            if (par_obj == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 277;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_id_arg_1 = par_obj;
            tmp_tuple_element_3 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 3, tmp_tuple_element_3);
            CHECK_OBJECT(var_doId);
            tmp_tuple_element_3 = var_doId;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 4, tmp_tuple_element_3);
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 279;
            tmp_tuple_element_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[84]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 5, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_3 = var_string;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 280;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[51], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_4 = var_string;
        frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame.f_lineno = 281;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[55], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_16ab6dfb0fd24737a32ebbf065bee7b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16ab6dfb0fd24737a32ebbf065bee7b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16ab6dfb0fd24737a32ebbf065bee7b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16ab6dfb0fd24737a32ebbf065bee7b3,
        type_description_1,
        par_self,
        par_obj,
        par_fsmMemberName,
        par_secondaryFsm,
        var_state,
        var_doId,
        var_fsm,
        var_stateObj,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_16ab6dfb0fd24737a32ebbf065bee7b3 == cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3);
        cache_frame_16ab6dfb0fd24737a32ebbf065bee7b3 = NULL;
    }

    assertFrameObject(frame_16ab6dfb0fd24737a32ebbf065bee7b3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_state);
    var_state = NULL;
    Py_XDECREF(var_doId);
    var_doId = NULL;
    Py_XDECREF(var_fsm);
    var_fsm = NULL;
    Py_XDECREF(var_stateObj);
    var_stateObj = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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

    Py_XDECREF(var_state);
    var_state = NULL;
    Py_XDECREF(var_doId);
    var_doId = NULL;
    Py_XDECREF(var_fsm);
    var_fsm = NULL;
    Py_XDECREF(var_stateObj);
    var_stateObj = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_fsmMemberName);
    Py_DECREF(par_fsmMemberName);
    CHECK_OBJECT(par_secondaryFsm);
    Py_DECREF(par_secondaryFsm);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_fsmMemberName);
    Py_DECREF(par_fsmMemberName);
    CHECK_OBJECT(par_secondaryFsm);
    Py_DECREF(par_secondaryFsm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$directnotify$Notifier$$$function__23_debugCall(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_debugString = python_pars[1];
    PyObject *var_message = NULL;
    PyObject *var_string = NULL;
    struct Nuitka_FrameObject *frame_6f80bc610c12a3b86162fe3bcb122e6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6f80bc610c12a3b86162fe3bcb122e6a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f80bc610c12a3b86162fe3bcb122e6a)) {
        Py_XDECREF(cache_frame_6f80bc610c12a3b86162fe3bcb122e6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f80bc610c12a3b86162fe3bcb122e6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f80bc610c12a3b86162fe3bcb122e6a = MAKE_FUNCTION_FRAME(tstate, codeobj_6f80bc610c12a3b86162fe3bcb122e6a, module_direct$directnotify$Notifier, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f80bc610c12a3b86162fe3bcb122e6a->m_type_description == NULL);
    frame_6f80bc610c12a3b86162fe3bcb122e6a = cache_frame_6f80bc610c12a3b86162fe3bcb122e6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f80bc610c12a3b86162fe3bcb122e6a);
    assert(Py_REFCNT(frame_6f80bc610c12a3b86162fe3bcb122e6a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 290;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_debugString);
        tmp_unicode_arg_1 = par_debugString;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        tmp_mod_expr_left_1 = mod_consts[86];
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6f80bc610c12a3b86162fe3bcb122e6a->m_frame.f_lineno = 293;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[82]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_message);
            tmp_tuple_element_1 = var_message;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_6f80bc610c12a3b86162fe3bcb122e6a->m_frame.f_lineno = 296;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[84]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_string == NULL);
        var_string = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_1 = var_string;
        frame_6f80bc610c12a3b86162fe3bcb122e6a->m_frame.f_lineno = 297;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_string);
        tmp_args_element_value_2 = var_string;
        frame_6f80bc610c12a3b86162fe3bcb122e6a->m_frame.f_lineno = 298;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[55], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
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
        exception_tb = MAKE_TRACEBACK(frame_6f80bc610c12a3b86162fe3bcb122e6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f80bc610c12a3b86162fe3bcb122e6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f80bc610c12a3b86162fe3bcb122e6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f80bc610c12a3b86162fe3bcb122e6a,
        type_description_1,
        par_self,
        par_debugString,
        var_message,
        var_string
    );


    // Release cached frame if used for exception.
    if (frame_6f80bc610c12a3b86162fe3bcb122e6a == cache_frame_6f80bc610c12a3b86162fe3bcb122e6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f80bc610c12a3b86162fe3bcb122e6a);
        cache_frame_6f80bc610c12a3b86162fe3bcb122e6a = NULL;
    }

    assertFrameObject(frame_6f80bc610c12a3b86162fe3bcb122e6a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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

    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_string);
    var_string = NULL;
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
    CHECK_OBJECT(par_debugString);
    Py_DECREF(par_debugString);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_debugString);
    Py_DECREF(par_debugString);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__10_setWarning() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__10_setWarning,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_0fab62094d760e7f6b83b5c9f03037fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__11_getWarning() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__11_getWarning,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_1e138ccd9059aa3e95734c64e059049e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__12_debug() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__12_debug,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_f8eaca25d4e59fa9eb4407b86c340f55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__13_setDebug() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__13_setDebug,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_1a6bc7ed582599132d32ef18464b9cb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__14_getDebug() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__14_getDebug,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_34a9849069f1c3fc34046cb72027c042,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__15_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__15_info,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_ef5878db6a79b21a7f80ec2095a8dddc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__16_getInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__16_getInfo,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_ae8d9b91b71151fd55103718820303fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__17_setInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__17_setInfo,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_d89c6ff68d09ba2cf015740fbe4c17f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__18___log() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__18___log,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_267acf1f2371fd57f1f0c4cd6b235d95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__19_getLogging() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__19_getLogging,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_2f8c56cb2c1ce7b486a023de1baa4bb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__1___init__,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_3588a2e12eaaf5ff3f3077219976a304,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__20_setLogging() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__20_setLogging,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_e268c046791e90f4f3b25d633c373a56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__21___print() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__21___print,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_e9005b9e3461f6039715595ffb4dc9fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__22_debugStateCall(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__22_debugStateCall,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_16ab6dfb0fd24737a32ebbf065bee7b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__23_debugCall(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__23_debugCall,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_6f80bc610c12a3b86162fe3bcb122e6a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__2_setServerDelta() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__2_setServerDelta,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_da3b7faa8a96076891726e7fadbd14d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__3_getTime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__3_getTime,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_a63a5437941bc19636d119aa886fbc33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__4_getOnlyTime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__4_getOnlyTime,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_7af45ecd404c4c2c8bfe7799cc001997,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__5___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__5___str__,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_c11ba7fc4e364abfd9cc5281ad53495a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__6_setSeverity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__6_setSeverity,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_90352fbd17632aba3137b3df1a2f2a66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__7_getSeverity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__7_getSeverity,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_2474e6cba16185d517e716c6cb3a429b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__8_error(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__8_error,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_7c2816465e285ef0d26b6b692a0c8df4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Notifier$$$function__9_warning() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Notifier$$$function__9_warning,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_904017ebbf66530b6585cc1a0a1550d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$directnotify$Notifier,
        mod_consts[56],
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

function_impl_code functable_direct$directnotify$Notifier[] = {
    impl_direct$directnotify$Notifier$$$function__1___init__,
    impl_direct$directnotify$Notifier$$$function__2_setServerDelta,
    impl_direct$directnotify$Notifier$$$function__3_getTime,
    impl_direct$directnotify$Notifier$$$function__4_getOnlyTime,
    impl_direct$directnotify$Notifier$$$function__5___str__,
    impl_direct$directnotify$Notifier$$$function__6_setSeverity,
    impl_direct$directnotify$Notifier$$$function__7_getSeverity,
    impl_direct$directnotify$Notifier$$$function__8_error,
    impl_direct$directnotify$Notifier$$$function__9_warning,
    impl_direct$directnotify$Notifier$$$function__10_setWarning,
    impl_direct$directnotify$Notifier$$$function__11_getWarning,
    impl_direct$directnotify$Notifier$$$function__12_debug,
    impl_direct$directnotify$Notifier$$$function__13_setDebug,
    impl_direct$directnotify$Notifier$$$function__14_getDebug,
    impl_direct$directnotify$Notifier$$$function__15_info,
    impl_direct$directnotify$Notifier$$$function__16_getInfo,
    impl_direct$directnotify$Notifier$$$function__17_setInfo,
    impl_direct$directnotify$Notifier$$$function__18___log,
    impl_direct$directnotify$Notifier$$$function__19_getLogging,
    impl_direct$directnotify$Notifier$$$function__20_setLogging,
    impl_direct$directnotify$Notifier$$$function__21___print,
    impl_direct$directnotify$Notifier$$$function__22_debugStateCall,
    impl_direct$directnotify$Notifier$$$function__23_debugCall,
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

    function_impl_code *current = functable_direct$directnotify$Notifier;
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

    if (offset > sizeof(functable_direct$directnotify$Notifier) || offset < 0) {
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
        functable_direct$directnotify$Notifier[offset],
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
        module_direct$directnotify$Notifier,
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
PyObject *modulecode_direct$directnotify$Notifier(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.directnotify.Notifier");

    // Store the module for future use.
    module_direct$directnotify$Notifier = module;

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
        PRINT_STRING("direct.directnotify.Notifier: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.directnotify.Notifier: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$directnotify$Notifier\n");

    moduledict_direct$directnotify$Notifier = MODULE_DICT(module_direct$directnotify$Notifier);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$directnotify$Notifier,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$directnotify$Notifier,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[74]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$directnotify$Notifier,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$directnotify$Notifier,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$directnotify$Notifier,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$directnotify$Notifier);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$directnotify$Notifier);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_7248e08fc1bf623e3e385d2d9687f71c;
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
    PyObject *locals_direct$directnotify$Notifier$$$class__1_Notifier_12 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_fd7f827da27a77f7e93779ab2f217d2c_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_2);
    }
    frame_7248e08fc1bf623e3e385d2d9687f71c = MAKE_MODULE_FRAME(codeobj_7248e08fc1bf623e3e385d2d9687f71c, module_direct$directnotify$Notifier);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7248e08fc1bf623e3e385d2d9687f71c);
    assert(Py_REFCNT(frame_7248e08fc1bf623e3e385d2d9687f71c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[92], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[93], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[95];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[96];
        tmp_level_value_1 = mod_consts[3];
        frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[1],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[97];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[98];
        tmp_level_value_2 = mod_consts[6];
        frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[19],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[31];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[99];
        tmp_level_value_3 = mod_consts[6];
        frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[100],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[100]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[15],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[101],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[101]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_direct$directnotify$Notifier,
                mod_consts[102],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[102]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[11];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$directnotify$Notifier;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[6];
        frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$directnotify$Notifier$$$class__1_Notifier_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[105], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[14], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_fd7f827da27a77f7e93779ab2f217d2c_2 = MAKE_CLASS_FRAME(tstate, codeobj_fd7f827da27a77f7e93779ab2f217d2c, module_direct$directnotify$Notifier, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fd7f827da27a77f7e93779ab2f217d2c_2);
        assert(Py_REFCNT(frame_fd7f827da27a77f7e93779ab2f217d2c_2) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_fd7f827da27a77f7e93779ab2f217d2c_2->m_frame.f_lineno = 20;
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_1, mod_consts[107]);

            if (tmp_call_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
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
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_fd7f827da27a77f7e93779ab2f217d2c_2->m_frame.f_lineno = 21;
            tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[108]);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = Py_False;
            frame_fd7f827da27a77f7e93779ab2f217d2c_2->m_frame.f_lineno = 21;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        branch_no_1:;
        {
            PyObject *tmp_called_value_3;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_fd7f827da27a77f7e93779ab2f217d2c_2->m_frame.f_lineno = 23;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[109]);

            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fd7f827da27a77f7e93779ab2f217d2c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fd7f827da27a77f7e93779ab2f217d2c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fd7f827da27a77f7e93779ab2f217d2c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fd7f827da27a77f7e93779ab2f217d2c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_fd7f827da27a77f7e93779ab2f217d2c_2);

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
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[110];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__2_setServerDelta();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__3_getTime();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__4_getOnlyTime();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__5___str__();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__6_setSeverity();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__7_getSeverity();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_1;
            tmp_tuple_element_1 = PyExc_Exception;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__8_error(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__9_warning();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__10_setWarning();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__11_getWarning();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__12_debug();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__13_setDebug();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__14_getDebug();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__15_info();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__16_getInfo();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__17_setInfo();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[39], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__18___log();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__19_getLogging();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__20_setLogging();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__21___print();

        tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[55], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[143];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__22_debugStateCall(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[146];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$directnotify$Notifier$$$function__23_debugCall(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_direct$directnotify$Notifier$$$class__1_Notifier_12, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[13];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[149];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_direct$directnotify$Notifier$$$class__1_Notifier_12;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame.f_lineno = 12;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_direct$directnotify$Notifier$$$class__1_Notifier_12);
        locals_direct$directnotify$Notifier$$$class__1_Notifier_12 = NULL;
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

        Py_DECREF(locals_direct$directnotify$Notifier$$$class__1_Notifier_12);
        locals_direct$directnotify$Notifier$$$class__1_Notifier_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7248e08fc1bf623e3e385d2d9687f71c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7248e08fc1bf623e3e385d2d9687f71c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7248e08fc1bf623e3e385d2d9687f71c, exception_lineno);
    }



    assertFrameObject(frame_7248e08fc1bf623e3e385d2d9687f71c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.directnotify.Notifier", false);

    Py_INCREF(module_direct$directnotify$Notifier);
    return module_direct$directnotify$Notifier;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$directnotify$Notifier, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$directnotify$Notifier", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
