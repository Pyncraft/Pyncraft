/* Generated code for Python module 'direct.gui.DirectGuiGlobals'
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

/* The "module_direct$gui$DirectGuiGlobals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$gui$DirectGuiGlobals;
PyDictObject *moduledict_direct$gui$DirectGuiGlobals;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[176];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[176];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.gui.DirectGuiGlobals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 176; i++) {
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
void checkModuleConstants_direct$gui$DirectGuiGlobals(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 176; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7c41361e399ab6d847488c43dc3cf3dc;
static PyCodeObject *codeobj_04edf010d64a03cd670da02f8047f456;
static PyCodeObject *codeobj_62463c5e7337ef5c59b17dab4935a799;
static PyCodeObject *codeobj_03e3984b5e67e56ee8d5efb46fe825eb;
static PyCodeObject *codeobj_bcf03b20070700edf8d7e8d8e3ff9843;
static PyCodeObject *codeobj_e6dfcf60557ba58f6d8c3c0f66ce06c0;
static PyCodeObject *codeobj_0cfc32b89093eb3cc683eecab6750b98;
static PyCodeObject *codeobj_4a02a02d9345ee22949667d0ba239acf;
static PyCodeObject *codeobj_76b757dd7ce3f5054c903b05d3a20b42;
static PyCodeObject *codeobj_0d1a947ad31af15dea9bd3f2315e7b0b;
static PyCodeObject *codeobj_ec502fc648d4476c2300fe12fe534f3c;
static PyCodeObject *codeobj_ff8b1c1d57dabe2c1ba31d74337a7a53;
static PyCodeObject *codeobj_f0af36b678ab3382264748c070a87714;
static PyCodeObject *codeobj_336b3c71e07bbb267973b3080dd141cd;
static PyCodeObject *codeobj_ee58db9094eaead7754cee02271a99f0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[167]); CHECK_OBJECT(module_filename_obj);
    codeobj_7c41361e399ab6d847488c43dc3cf3dc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_04edf010d64a03cd670da02f8047f456 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_62463c5e7337ef5c59b17dab4935a799 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_03e3984b5e67e56ee8d5efb46fe825eb = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], NULL, NULL, 0, 0, 0);
    codeobj_bcf03b20070700edf8d7e8d8e3ff9843 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_e6dfcf60557ba58f6d8c3c0f66ce06c0 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], NULL, NULL, 0, 0, 0);
    codeobj_0cfc32b89093eb3cc683eecab6750b98 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_4a02a02d9345ee22949667d0ba239acf = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_76b757dd7ce3f5054c903b05d3a20b42 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[143], mod_consts[169], NULL, 1, 0, 0);
    codeobj_0d1a947ad31af15dea9bd3f2315e7b0b = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[149], mod_consts[149], mod_consts[170], NULL, 2, 0, 0);
    codeobj_ec502fc648d4476c2300fe12fe534f3c = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[151], mod_consts[151], mod_consts[171], NULL, 1, 0, 0);
    codeobj_ff8b1c1d57dabe2c1ba31d74337a7a53 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], mod_consts[172], NULL, 1, 0, 0);
    codeobj_f0af36b678ab3382264748c070a87714 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[145], mod_consts[145], mod_consts[173], NULL, 1, 0, 0);
    codeobj_336b3c71e07bbb267973b3080dd141cd = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], mod_consts[174], NULL, 1, 0, 0);
    codeobj_ee58db9094eaead7754cee02271a99f0 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[169], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom();


static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief();


// The module function definitions.
static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4a02a02d9345ee22949667d0ba239acf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a02a02d9345ee22949667d0ba239acf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a02a02d9345ee22949667d0ba239acf)) {
        Py_XDECREF(cache_frame_4a02a02d9345ee22949667d0ba239acf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a02a02d9345ee22949667d0ba239acf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a02a02d9345ee22949667d0ba239acf = MAKE_FUNCTION_FRAME(tstate, codeobj_4a02a02d9345ee22949667d0ba239acf, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a02a02d9345ee22949667d0ba239acf->m_type_description == NULL);
    frame_4a02a02d9345ee22949667d0ba239acf = cache_frame_4a02a02d9345ee22949667d0ba239acf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4a02a02d9345ee22949667d0ba239acf);
    assert(Py_REFCNT(frame_4a02a02d9345ee22949667d0ba239acf) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 109;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a02a02d9345ee22949667d0ba239acf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a02a02d9345ee22949667d0ba239acf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a02a02d9345ee22949667d0ba239acf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a02a02d9345ee22949667d0ba239acf,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4a02a02d9345ee22949667d0ba239acf == cache_frame_4a02a02d9345ee22949667d0ba239acf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a02a02d9345ee22949667d0ba239acf);
        cache_frame_4a02a02d9345ee22949667d0ba239acf = NULL;
    }

    assertFrameObject(frame_4a02a02d9345ee22949667d0ba239acf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newSound = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newSound);
        tmp_assign_source_1 = par_newSound;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newSound);
    Py_DECREF(par_newSound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_04edf010d64a03cd670da02f8047f456;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04edf010d64a03cd670da02f8047f456 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04edf010d64a03cd670da02f8047f456)) {
        Py_XDECREF(cache_frame_04edf010d64a03cd670da02f8047f456);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04edf010d64a03cd670da02f8047f456 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04edf010d64a03cd670da02f8047f456 = MAKE_FUNCTION_FRAME(tstate, codeobj_04edf010d64a03cd670da02f8047f456, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04edf010d64a03cd670da02f8047f456->m_type_description == NULL);
    frame_04edf010d64a03cd670da02f8047f456 = cache_frame_04edf010d64a03cd670da02f8047f456;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_04edf010d64a03cd670da02f8047f456);
    assert(Py_REFCNT(frame_04edf010d64a03cd670da02f8047f456) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 116;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04edf010d64a03cd670da02f8047f456, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04edf010d64a03cd670da02f8047f456->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04edf010d64a03cd670da02f8047f456, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04edf010d64a03cd670da02f8047f456,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_04edf010d64a03cd670da02f8047f456 == cache_frame_04edf010d64a03cd670da02f8047f456) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04edf010d64a03cd670da02f8047f456);
        cache_frame_04edf010d64a03cd670da02f8047f456 = NULL;
    }

    assertFrameObject(frame_04edf010d64a03cd670da02f8047f456);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newSound = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newSound);
        tmp_assign_source_1 = par_newSound;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newSound);
    Py_DECREF(par_newSound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e6dfcf60557ba58f6d8c3c0f66ce06c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0)) {
        Py_XDECREF(cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6dfcf60557ba58f6d8c3c0f66ce06c0, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0->m_type_description == NULL);
    frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 = cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6dfcf60557ba58f6d8c3c0f66ce06c0);
    assert(Py_REFCNT(frame_e6dfcf60557ba58f6d8c3c0f66ce06c0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_e6dfcf60557ba58f6d8c3c0f66ce06c0->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[2]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 126;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6dfcf60557ba58f6d8c3c0f66ce06c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6dfcf60557ba58f6d8c3c0f66ce06c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6dfcf60557ba58f6d8c3c0f66ce06c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6dfcf60557ba58f6d8c3c0f66ce06c0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 == cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0);
        cache_frame_e6dfcf60557ba58f6d8c3c0f66ce06c0 = NULL;
    }

    assertFrameObject(frame_e6dfcf60557ba58f6d8c3c0f66ce06c0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newFont = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newFont);
        tmp_assign_source_1 = par_newFont;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newFont);
    Py_DECREF(par_newFont);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newFontFunc = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newFontFunc);
        tmp_assign_source_1 = par_newFontFunc;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newFontFunc);
    Py_DECREF(par_newFontFunc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_62463c5e7337ef5c59b17dab4935a799;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62463c5e7337ef5c59b17dab4935a799 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62463c5e7337ef5c59b17dab4935a799)) {
        Py_XDECREF(cache_frame_62463c5e7337ef5c59b17dab4935a799);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62463c5e7337ef5c59b17dab4935a799 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62463c5e7337ef5c59b17dab4935a799 = MAKE_FUNCTION_FRAME(tstate, codeobj_62463c5e7337ef5c59b17dab4935a799, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62463c5e7337ef5c59b17dab4935a799->m_type_description == NULL);
    frame_62463c5e7337ef5c59b17dab4935a799 = cache_frame_62463c5e7337ef5c59b17dab4935a799;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_62463c5e7337ef5c59b17dab4935a799);
    assert(Py_REFCNT(frame_62463c5e7337ef5c59b17dab4935a799) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[5]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 140;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62463c5e7337ef5c59b17dab4935a799, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62463c5e7337ef5c59b17dab4935a799->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62463c5e7337ef5c59b17dab4935a799, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62463c5e7337ef5c59b17dab4935a799,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_62463c5e7337ef5c59b17dab4935a799 == cache_frame_62463c5e7337ef5c59b17dab4935a799) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62463c5e7337ef5c59b17dab4935a799);
        cache_frame_62463c5e7337ef5c59b17dab4935a799 = NULL;
    }

    assertFrameObject(frame_62463c5e7337ef5c59b17dab4935a799);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_03e3984b5e67e56ee8d5efb46fe825eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03e3984b5e67e56ee8d5efb46fe825eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03e3984b5e67e56ee8d5efb46fe825eb)) {
        Py_XDECREF(cache_frame_03e3984b5e67e56ee8d5efb46fe825eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03e3984b5e67e56ee8d5efb46fe825eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03e3984b5e67e56ee8d5efb46fe825eb = MAKE_FUNCTION_FRAME(tstate, codeobj_03e3984b5e67e56ee8d5efb46fe825eb, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03e3984b5e67e56ee8d5efb46fe825eb->m_type_description == NULL);
    frame_03e3984b5e67e56ee8d5efb46fe825eb = cache_frame_03e3984b5e67e56ee8d5efb46fe825eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_03e3984b5e67e56ee8d5efb46fe825eb);
    assert(Py_REFCNT(frame_03e3984b5e67e56ee8d5efb46fe825eb) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03e3984b5e67e56ee8d5efb46fe825eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03e3984b5e67e56ee8d5efb46fe825eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03e3984b5e67e56ee8d5efb46fe825eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03e3984b5e67e56ee8d5efb46fe825eb,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_03e3984b5e67e56ee8d5efb46fe825eb == cache_frame_03e3984b5e67e56ee8d5efb46fe825eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03e3984b5e67e56ee8d5efb46fe825eb);
        cache_frame_03e3984b5e67e56ee8d5efb46fe825eb = NULL;
    }

    assertFrameObject(frame_03e3984b5e67e56ee8d5efb46fe825eb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newDialogGeom = python_pars[0];
    PyObject *par_relief = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newDialogGeom);
        tmp_assign_source_1 = par_newDialogGeom;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_relief);
        tmp_assign_source_2 = par_relief;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newDialogGeom);
    Py_DECREF(par_newDialogGeom);
    CHECK_OBJECT(par_relief);
    Py_DECREF(par_relief);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_bcf03b20070700edf8d7e8d8e3ff9843;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcf03b20070700edf8d7e8d8e3ff9843 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bcf03b20070700edf8d7e8d8e3ff9843)) {
        Py_XDECREF(cache_frame_bcf03b20070700edf8d7e8d8e3ff9843);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcf03b20070700edf8d7e8d8e3ff9843 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcf03b20070700edf8d7e8d8e3ff9843 = MAKE_FUNCTION_FRAME(tstate, codeobj_bcf03b20070700edf8d7e8d8e3ff9843, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcf03b20070700edf8d7e8d8e3ff9843->m_type_description == NULL);
    frame_bcf03b20070700edf8d7e8d8e3ff9843 = cache_frame_bcf03b20070700edf8d7e8d8e3ff9843;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bcf03b20070700edf8d7e8d8e3ff9843);
    assert(Py_REFCNT(frame_bcf03b20070700edf8d7e8d8e3ff9843) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[7]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcf03b20070700edf8d7e8d8e3ff9843, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcf03b20070700edf8d7e8d8e3ff9843->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcf03b20070700edf8d7e8d8e3ff9843, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcf03b20070700edf8d7e8d8e3ff9843,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_bcf03b20070700edf8d7e8d8e3ff9843 == cache_frame_bcf03b20070700edf8d7e8d8e3ff9843) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcf03b20070700edf8d7e8d8e3ff9843);
        cache_frame_bcf03b20070700edf8d7e8d8e3ff9843 = NULL;
    }

    assertFrameObject(frame_bcf03b20070700edf8d7e8d8e3ff9843);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newDrawOrder = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newDrawOrder);
        tmp_assign_source_1 = par_newDrawOrder;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newDrawOrder);
    Py_DECREF(par_newDrawOrder);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0cfc32b89093eb3cc683eecab6750b98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0cfc32b89093eb3cc683eecab6750b98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0cfc32b89093eb3cc683eecab6750b98)) {
        Py_XDECREF(cache_frame_0cfc32b89093eb3cc683eecab6750b98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0cfc32b89093eb3cc683eecab6750b98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0cfc32b89093eb3cc683eecab6750b98 = MAKE_FUNCTION_FRAME(tstate, codeobj_0cfc32b89093eb3cc683eecab6750b98, module_direct$gui$DirectGuiGlobals, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0cfc32b89093eb3cc683eecab6750b98->m_type_description == NULL);
    frame_0cfc32b89093eb3cc683eecab6750b98 = cache_frame_0cfc32b89093eb3cc683eecab6750b98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0cfc32b89093eb3cc683eecab6750b98);
    assert(Py_REFCNT(frame_0cfc32b89093eb3cc683eecab6750b98) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[8]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0cfc32b89093eb3cc683eecab6750b98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0cfc32b89093eb3cc683eecab6750b98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0cfc32b89093eb3cc683eecab6750b98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0cfc32b89093eb3cc683eecab6750b98,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0cfc32b89093eb3cc683eecab6750b98 == cache_frame_0cfc32b89093eb3cc683eecab6750b98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0cfc32b89093eb3cc683eecab6750b98);
        cache_frame_0cfc32b89093eb3cc683eecab6750b98 = NULL;
    }

    assertFrameObject(frame_0cfc32b89093eb3cc683eecab6750b98);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_newPanel = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_newPanel);
        tmp_assign_source_1 = par_newPanel;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_newPanel);
    Py_DECREF(par_newPanel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d1a947ad31af15dea9bd3f2315e7b0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bcf03b20070700edf8d7e8d8e3ff9843,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec502fc648d4476c2300fe12fe534f3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0cfc32b89093eb3cc683eecab6750b98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_336b3c71e07bbb267973b3080dd141cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a02a02d9345ee22949667d0ba239acf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee58db9094eaead7754cee02271a99f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04edf010d64a03cd670da02f8047f456,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76b757dd7ce3f5054c903b05d3a20b42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6dfcf60557ba58f6d8c3c0f66ce06c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff8b1c1d57dabe2c1ba31d74337a7a53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0af36b678ab3382264748c070a87714,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62463c5e7337ef5c59b17dab4935a799,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03e3984b5e67e56ee8d5efb46fe825eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$DirectGuiGlobals,
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

function_impl_code functable_direct$gui$DirectGuiGlobals[] = {
    impl_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound,
    impl_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound,
    impl_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound,
    impl_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound,
    impl_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont,
    impl_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont,
    impl_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc,
    impl_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom,
    impl_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief,
    impl_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom,
    impl_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder,
    impl_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder,
    impl_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel,
    impl_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel,
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

    function_impl_code *current = functable_direct$gui$DirectGuiGlobals;
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

    if (offset > sizeof(functable_direct$gui$DirectGuiGlobals) || offset < 0) {
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
        functable_direct$gui$DirectGuiGlobals[offset],
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
        module_direct$gui$DirectGuiGlobals,
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
PyObject *modulecode_direct$gui$DirectGuiGlobals(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.gui.DirectGuiGlobals");

    // Store the module for future use.
    module_direct$gui$DirectGuiGlobals = module;

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
        PRINT_STRING("direct.gui.DirectGuiGlobals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.gui.DirectGuiGlobals: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$gui$DirectGuiGlobals\n");

    moduledict_direct$gui$DirectGuiGlobals = MODULE_DICT(module_direct$gui$DirectGuiGlobals);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$gui$DirectGuiGlobals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$gui$DirectGuiGlobals,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[175]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$gui$DirectGuiGlobals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$gui$DirectGuiGlobals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$gui$DirectGuiGlobals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$gui$DirectGuiGlobals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$gui$DirectGuiGlobals);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7c41361e399ab6d847488c43dc3cf3dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_2);
    }
    frame_7c41361e399ab6d847488c43dc3cf3dc = MAKE_MODULE_FRAME(codeobj_7c41361e399ab6d847488c43dc3cf3dc, module_direct$gui$DirectGuiGlobals);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c41361e399ab6d847488c43dc3cf3dc);
    assert(Py_REFCNT(frame_7c41361e399ab6d847488c43dc3cf3dc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$gui$DirectGuiGlobals;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$gui$DirectGuiGlobals;
        tmp_fromlist_value_1 = mod_consts[18];
        tmp_level_value_1 = mod_consts[19];
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 8;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$gui$DirectGuiGlobals, true, tmp_star_imported_1);
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
        tmp_assign_source_5 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[23]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_LIST1(mod_consts[25]);
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[36]);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[23]);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[39]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[41]);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[43]);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[45]);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[47];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[48];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[49];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[50];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[51];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[52];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 60;
        tmp_assign_source_36 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[71]);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 61;
        tmp_assign_source_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[73]);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 62;
        tmp_assign_source_38 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[75]);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 63;
        tmp_assign_source_39 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[77]);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 64;
        tmp_add_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[79]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 64;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[81]);
        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 64;
        tmp_add_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[82]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[83];
        tmp_assign_source_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 65;
        tmp_add_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[79]);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 65;
        tmp_called_instance_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[85]);
        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 65;
        tmp_add_expr_right_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[82]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[83];
        tmp_assign_source_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 66;
        tmp_add_expr_left_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[79]);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 66;
        tmp_called_instance_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[87]);
        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 66;
        tmp_add_expr_right_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[82]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_5 = mod_consts[83];
        tmp_assign_source_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 67;
        tmp_add_expr_left_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[89]);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 67;
        tmp_called_instance_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[81]);
        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 67;
        tmp_add_expr_right_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[82]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[83];
        tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_called_instance_19;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 68;
        tmp_add_expr_left_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[89]);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 68;
        tmp_called_instance_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[85]);
        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 68;
        tmp_add_expr_right_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[82]);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_9 = mod_consts[83];
        tmp_assign_source_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 69;
        tmp_add_expr_left_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[89]);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 69;
        tmp_called_instance_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[87]);
        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 69;
        tmp_add_expr_right_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[82]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_11 = mod_consts[83];
        tmp_assign_source_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_called_instance_25;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 70;
        tmp_add_expr_left_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[93]);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 70;
        tmp_called_instance_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[81]);
        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 70;
        tmp_add_expr_right_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[82]);
        Py_DECREF(tmp_called_instance_24);
        if (tmp_add_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_13 = mod_consts[83];
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_called_instance_28;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 71;
        tmp_add_expr_left_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[93]);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 71;
        tmp_called_instance_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_28, mod_consts[85]);
        if (tmp_called_instance_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 71;
        tmp_add_expr_right_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[82]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_add_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_15 = mod_consts[83];
        tmp_assign_source_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_called_instance_31;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 72;
        tmp_add_expr_left_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_29, mod_consts[93]);
        if (tmp_add_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 72;
        tmp_called_instance_30 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_31, mod_consts[87]);
        if (tmp_called_instance_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 72;
        tmp_add_expr_right_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[82]);
        Py_DECREF(tmp_called_instance_30);
        if (tmp_add_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_17 = mod_consts[83];
        tmp_assign_source_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_instance_32;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 74;
        tmp_assign_source_49 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_32, mod_consts[98]);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_called_instance_35;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 75;
        tmp_add_expr_left_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_33, mod_consts[100]);
        if (tmp_add_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 75;
        tmp_called_instance_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_35, mod_consts[102]);
        if (tmp_called_instance_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 75;
        tmp_add_expr_right_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_34, mod_consts[82]);
        Py_DECREF(tmp_called_instance_34);
        if (tmp_add_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        Py_DECREF(tmp_add_expr_right_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_19 = mod_consts[83];
        tmp_assign_source_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_called_instance_38;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 76;
        tmp_add_expr_left_22 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_36, mod_consts[104]);
        if (tmp_add_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 76;
        tmp_called_instance_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_38, mod_consts[102]);
        if (tmp_called_instance_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 76;
        tmp_add_expr_right_22 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_37, mod_consts[82]);
        Py_DECREF(tmp_called_instance_37);
        if (tmp_add_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        Py_DECREF(tmp_add_expr_right_22);
        if (tmp_add_expr_left_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_21 = mod_consts[83];
        tmp_assign_source_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_21, tmp_add_expr_right_21);
        Py_DECREF(tmp_add_expr_left_21);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_instance_39;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 77;
        tmp_assign_source_52 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_39, mod_consts[106]);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_40;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 78;
        tmp_assign_source_53 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_40, mod_consts[108]);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_instance_41;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 79;
        tmp_assign_source_54 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_41, mod_consts[110]);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_42;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame.f_lineno = 81;
        tmp_assign_source_55 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_42, mod_consts[113]);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[132]);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[134]);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[136]);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[138]);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_70);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c41361e399ab6d847488c43dc3cf3dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c41361e399ab6d847488c43dc3cf3dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c41361e399ab6d847488c43dc3cf3dc, exception_lineno);
    }



    assertFrameObject(frame_7c41361e399ab6d847488c43dc3cf3dc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__1_getDefaultRolloverSound();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__2_setDefaultRolloverSound();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__3_getDefaultClickSound();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__4_setDefaultClickSound();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__5_getDefaultFont();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__6_setDefaultFont();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__7_setDefaultFontFunc();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__8_getDefaultDialogGeom();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__9_getDefaultDialogRelief();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[148];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_80 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__10_setDefaultDialogGeom(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;


        tmp_assign_source_81 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__11_getDefaultDrawOrder();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__12_setDefaultDrawOrder();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;


        tmp_assign_source_83 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__13_getDefaultPanel();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_direct$gui$DirectGuiGlobals$$$function__14_setDefaultPanel();

        UPDATE_STRING_DICT1(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assign_source_85 == NULL)) {
            tmp_assign_source_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        assert(!(tmp_assign_source_85 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assign_source_86 == NULL)) {
            tmp_assign_source_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        assert(!(tmp_assign_source_86 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_assign_source_87 == NULL)) {
            tmp_assign_source_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        assert(!(tmp_assign_source_87 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assign_source_88 == NULL)) {
            tmp_assign_source_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        assert(!(tmp_assign_source_88 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assign_source_89 == NULL)) {
            tmp_assign_source_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        assert(!(tmp_assign_source_89 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_assign_source_90 == NULL)) {
            tmp_assign_source_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        assert(!(tmp_assign_source_90 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_assign_source_91 == NULL)) {
            tmp_assign_source_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
        }

        assert(!(tmp_assign_source_91 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_assign_source_92 == NULL)) {
            tmp_assign_source_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        assert(!(tmp_assign_source_92 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assign_source_93 == NULL)) {
            tmp_assign_source_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        assert(!(tmp_assign_source_93 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_assign_source_94 == NULL)) {
            tmp_assign_source_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
        }

        assert(!(tmp_assign_source_94 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assign_source_95 == NULL)) {
            tmp_assign_source_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        assert(!(tmp_assign_source_95 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assign_source_96 == NULL)) {
            tmp_assign_source_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        assert(!(tmp_assign_source_96 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_assign_source_97 == NULL)) {
            tmp_assign_source_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        assert(!(tmp_assign_source_97 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_97);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.gui.DirectGuiGlobals", false);

    Py_INCREF(module_direct$gui$DirectGuiGlobals);
    return module_direct$gui$DirectGuiGlobals;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$DirectGuiGlobals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$gui$DirectGuiGlobals", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
