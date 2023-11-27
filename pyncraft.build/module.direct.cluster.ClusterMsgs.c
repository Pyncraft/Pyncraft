/* Generated code for Python module 'direct.cluster.ClusterMsgs'
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

/* The "module_direct$cluster$ClusterMsgs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$cluster$ClusterMsgs;
PyDictObject *moduledict_direct$cluster$ClusterMsgs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[147];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[147];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.cluster.ClusterMsgs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 147; i++) {
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
void checkModuleConstants_direct$cluster$ClusterMsgs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 147; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5935279fafee260b19b56b3a4dcdee18;
static PyCodeObject *codeobj_c14016109f6f64ab14646c7bde200168;
static PyCodeObject *codeobj_f4226b0933d2587cff6ffd2bcb862ee4;
static PyCodeObject *codeobj_ee8f683563def7096ce1c09c3d93f78d;
static PyCodeObject *codeobj_098e6a8ff9de454fffa85ba81a44cb07;
static PyCodeObject *codeobj_4d8ecb1885b8d238179650f2d8689a7f;
static PyCodeObject *codeobj_9f6888d7b932c2e4433d1e3445a2dae0;
static PyCodeObject *codeobj_294578b4b6be925d3b4a3a27f6dccd14;
static PyCodeObject *codeobj_b63aed9e2128fae00ecab32ac0584fa3;
static PyCodeObject *codeobj_49ca088a467982cde48f9652a4c4f030;
static PyCodeObject *codeobj_29b8f09a6c77fc4155911231fcae815c;
static PyCodeObject *codeobj_6a1ce556ea79f9c227f8ed14b1713257;
static PyCodeObject *codeobj_aae693ff6f6fc07900ed4b37dc73fbf9;
static PyCodeObject *codeobj_e901ce931a5e029ff7051fc9220b18aa;
static PyCodeObject *codeobj_d7d71c13fdfafaaf913d3b4c5005dae8;
static PyCodeObject *codeobj_1c1a2c85ac8dd8299973e14b27a4b5cd;
static PyCodeObject *codeobj_ebcb171a20f6fe4e664e13da2ee8a0d9;
static PyCodeObject *codeobj_37b59e5812bb51a9d8f22cc07e5f65f7;
static PyCodeObject *codeobj_d55301a4cc8df642b5d9171510d34153;
static PyCodeObject *codeobj_120e61e2468a02a40ac6ae8560b03192;
static PyCodeObject *codeobj_7d11d5e106d903ebf98b81006c4db53e;
static PyCodeObject *codeobj_0d429d82cc45cde667d4c995ea942e8f;
static PyCodeObject *codeobj_c03a6534e06415238cc1f4ffc083ad9f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[128]); CHECK_OBJECT(module_filename_obj);
    codeobj_5935279fafee260b19b56b3a4dcdee18 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_c14016109f6f64ab14646c7bde200168 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[84], mod_consts[84], mod_consts[130], NULL, 3, 0, 0);
    codeobj_f4226b0933d2587cff6ffd2bcb862ee4 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[88], mod_consts[88], mod_consts[131], NULL, 2, 0, 0);
    codeobj_ee8f683563def7096ce1c09c3d93f78d = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], mod_consts[132], NULL, 4, 0, 0);
    codeobj_098e6a8ff9de454fffa85ba81a44cb07 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], mod_consts[133], NULL, 3, 0, 0);
    codeobj_4d8ecb1885b8d238179650f2d8689a7f = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[91], mod_consts[91], mod_consts[133], NULL, 3, 0, 0);
    codeobj_9f6888d7b932c2e4433d1e3445a2dae0 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[134], NULL, 2, 0, 0);
    codeobj_294578b4b6be925d3b4a3a27f6dccd14 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[121], mod_consts[121], mod_consts[135], NULL, 1, 0, 0);
    codeobj_b63aed9e2128fae00ecab32ac0584fa3 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[101], mod_consts[101], mod_consts[135], NULL, 1, 0, 0);
    codeobj_49ca088a467982cde48f9652a4c4f030 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], mod_consts[136], NULL, 7, 0, 0);
    codeobj_29b8f09a6c77fc4155911231fcae815c = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], mod_consts[137], NULL, 4, 0, 0);
    codeobj_6a1ce556ea79f9c227f8ed14b1713257 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], mod_consts[135], NULL, 1, 0, 0);
    codeobj_aae693ff6f6fc07900ed4b37dc73fbf9 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[119], mod_consts[119], mod_consts[135], NULL, 1, 0, 0);
    codeobj_e901ce931a5e029ff7051fc9220b18aa = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[123], mod_consts[123], mod_consts[138], NULL, 4, 0, 0);
    codeobj_d7d71c13fdfafaaf913d3b4c5005dae8 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[131], NULL, 2, 0, 0);
    codeobj_1c1a2c85ac8dd8299973e14b27a4b5cd = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[97], mod_consts[97], mod_consts[139], NULL, 2, 0, 0);
    codeobj_ebcb171a20f6fe4e664e13da2ee8a0d9 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], mod_consts[140], NULL, 2, 0, 0);
    codeobj_37b59e5812bb51a9d8f22cc07e5f65f7 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[93], mod_consts[140], NULL, 2, 0, 0);
    codeobj_d55301a4cc8df642b5d9171510d34153 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], mod_consts[141], NULL, 2, 0, 0);
    codeobj_120e61e2468a02a40ac6ae8560b03192 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], mod_consts[142], NULL, 2, 0, 0);
    codeobj_7d11d5e106d903ebf98b81006c4db53e = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], mod_consts[143], NULL, 2, 0, 0);
    codeobj_0d429d82cc45cde667d4c995ea942e8f = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[125], mod_consts[125], mod_consts[144], NULL, 2, 0, 0);
    codeobj_c03a6534e06415238cc1f4ffc083ad9f = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[145], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__1___init__();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__3_blockingRead();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__4_readHeader();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram();


static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram();


// The module function definitions.
static PyObject *impl_direct$cluster$ClusterMsgs$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_packetStart = python_pars[1];
    PyObject *par_notify = python_pars[2];
    struct Nuitka_FrameObject *frame_c14016109f6f64ab14646c7bde200168;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c14016109f6f64ab14646c7bde200168 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c14016109f6f64ab14646c7bde200168)) {
        Py_XDECREF(cache_frame_c14016109f6f64ab14646c7bde200168);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c14016109f6f64ab14646c7bde200168 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c14016109f6f64ab14646c7bde200168 = MAKE_FUNCTION_FRAME(tstate, codeobj_c14016109f6f64ab14646c7bde200168, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c14016109f6f64ab14646c7bde200168->m_type_description == NULL);
    frame_c14016109f6f64ab14646c7bde200168 = cache_frame_c14016109f6f64ab14646c7bde200168;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c14016109f6f64ab14646c7bde200168);
    assert(Py_REFCNT(frame_c14016109f6f64ab14646c7bde200168) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_packetStart);
        tmp_assattr_value_1 = par_packetStart;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_notify);
        tmp_assattr_value_2 = par_notify;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c14016109f6f64ab14646c7bde200168, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c14016109f6f64ab14646c7bde200168->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c14016109f6f64ab14646c7bde200168, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c14016109f6f64ab14646c7bde200168,
        type_description_1,
        par_self,
        par_packetStart,
        par_notify
    );


    // Release cached frame if used for exception.
    if (frame_c14016109f6f64ab14646c7bde200168 == cache_frame_c14016109f6f64ab14646c7bde200168) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c14016109f6f64ab14646c7bde200168);
        cache_frame_c14016109f6f64ab14646c7bde200168 = NULL;
    }

    assertFrameObject(frame_c14016109f6f64ab14646c7bde200168);

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
    CHECK_OBJECT(par_packetStart);
    Py_DECREF(par_packetStart);
    CHECK_OBJECT(par_notify);
    Py_DECREF(par_notify);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_packetStart);
    Py_DECREF(par_packetStart);
    CHECK_OBJECT(par_notify);
    Py_DECREF(par_notify);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_qcr = python_pars[1];
    PyObject *var_datagram = NULL;
    PyObject *var_dgi = NULL;
    PyObject *var_type = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d7d71c13fdfafaaf913d3b4c5005dae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8)) {
        Py_XDECREF(cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8 = MAKE_FUNCTION_FRAME(tstate, codeobj_d7d71c13fdfafaaf913d3b4c5005dae8, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_type_description == NULL);
    frame_d7d71c13fdfafaaf913d3b4c5005dae8 = cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d7d71c13fdfafaaf913d3b4c5005dae8);
    assert(Py_REFCNT(frame_d7d71c13fdfafaaf913d3b4c5005dae8) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_qcr);
        tmp_called_instance_1 = par_qcr;
        frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 61;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame.f_lineno = 62;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_qcr);
        tmp_called_instance_2 = par_qcr;
        CHECK_OBJECT(var_datagram);
        tmp_args_element_value_1 = var_datagram;
        frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame.f_lineno = 63;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 63;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_datagram);
        tmp_args_element_value_2 = var_datagram;
        frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame.f_lineno = 64;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[5], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 64;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 64;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 64;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[6];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 64;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_dgi == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_dgi = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_type == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_type = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_dgi == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_dgi = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assign_source_8 == NULL)) {
            tmp_assign_source_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_type == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_type = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame.f_lineno = 68;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_datagram == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_datagram = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert(var_dgi == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_dgi = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_type == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_type = tmp_assign_source_11;
    }
    branch_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_datagram == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 74;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_datagram;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_dgi);
        tmp_tuple_element_1 = var_dgi;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_type);
        tmp_tuple_element_1 = var_type;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_d7d71c13fdfafaaf913d3b4c5005dae8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7d71c13fdfafaaf913d3b4c5005dae8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7d71c13fdfafaaf913d3b4c5005dae8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7d71c13fdfafaaf913d3b4c5005dae8,
        type_description_1,
        par_self,
        par_qcr,
        var_datagram,
        var_dgi,
        var_type
    );


    // Release cached frame if used for exception.
    if (frame_d7d71c13fdfafaaf913d3b4c5005dae8 == cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8);
        cache_frame_d7d71c13fdfafaaf913d3b4c5005dae8 = NULL;
    }

    assertFrameObject(frame_d7d71c13fdfafaaf913d3b4c5005dae8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_datagram);
    var_datagram = NULL;
    CHECK_OBJECT(var_dgi);
    Py_DECREF(var_dgi);
    var_dgi = NULL;
    CHECK_OBJECT(var_type);
    Py_DECREF(var_type);
    var_type = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
    Py_XDECREF(var_dgi);
    var_dgi = NULL;
    Py_XDECREF(var_type);
    var_type = NULL;
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
    CHECK_OBJECT(par_qcr);
    Py_DECREF(par_qcr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_qcr);
    Py_DECREF(par_qcr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__3_blockingRead(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_qcr = python_pars[1];
    PyObject *var_datagram = NULL;
    PyObject *var_dgi = NULL;
    PyObject *var_type = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f4226b0933d2587cff6ffd2bcb862ee4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f4226b0933d2587cff6ffd2bcb862ee4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f4226b0933d2587cff6ffd2bcb862ee4)) {
        Py_XDECREF(cache_frame_f4226b0933d2587cff6ffd2bcb862ee4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4226b0933d2587cff6ffd2bcb862ee4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4226b0933d2587cff6ffd2bcb862ee4 = MAKE_FUNCTION_FRAME(tstate, codeobj_f4226b0933d2587cff6ffd2bcb862ee4, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4226b0933d2587cff6ffd2bcb862ee4->m_type_description == NULL);
    frame_f4226b0933d2587cff6ffd2bcb862ee4 = cache_frame_f4226b0933d2587cff6ffd2bcb862ee4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f4226b0933d2587cff6ffd2bcb862ee4);
    assert(Py_REFCNT(frame_f4226b0933d2587cff6ffd2bcb862ee4) == 2);

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_1;
        if (par_qcr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_qcr;
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 81;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 86;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 88;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        if (par_qcr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_qcr;
        CHECK_OBJECT(var_datagram);
        tmp_args_element_value_1 = var_datagram;
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 89;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_datagram);
        tmp_args_element_value_2 = var_datagram;
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 90;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[5], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 90;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[6];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_dgi == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_dgi = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_type == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_type = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_None;
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 92;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[6];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        assert(var_dgi == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_dgi = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert(var_type == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_type = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame.f_lineno = 93;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4226b0933d2587cff6ffd2bcb862ee4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4226b0933d2587cff6ffd2bcb862ee4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4226b0933d2587cff6ffd2bcb862ee4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4226b0933d2587cff6ffd2bcb862ee4,
        type_description_1,
        par_self,
        par_qcr,
        var_datagram,
        var_dgi,
        var_type
    );


    // Release cached frame if used for exception.
    if (frame_f4226b0933d2587cff6ffd2bcb862ee4 == cache_frame_f4226b0933d2587cff6ffd2bcb862ee4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4226b0933d2587cff6ffd2bcb862ee4);
        cache_frame_f4226b0933d2587cff6ffd2bcb862ee4 = NULL;
    }

    assertFrameObject(frame_f4226b0933d2587cff6ffd2bcb862ee4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_datagram);
        tmp_tuple_element_2 = var_datagram;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_dgi);
        tmp_tuple_element_2 = var_dgi;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_type);
        tmp_tuple_element_2 = var_type;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
    CHECK_OBJECT(var_dgi);
    Py_DECREF(var_dgi);
    var_dgi = NULL;
    CHECK_OBJECT(var_type);
    Py_DECREF(var_type);
    var_type = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
    Py_XDECREF(var_dgi);
    var_dgi = NULL;
    Py_XDECREF(var_type);
    var_type = NULL;
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
    CHECK_OBJECT(par_qcr);
    Py_DECREF(par_qcr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_qcr);
    Py_DECREF(par_qcr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__4_readHeader(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_datagram = python_pars[1];
    PyObject *var_dgi = NULL;
    PyObject *var_number = NULL;
    PyObject *var_type = NULL;
    struct Nuitka_FrameObject *frame_c03a6534e06415238cc1f4ffc083ad9f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c03a6534e06415238cc1f4ffc083ad9f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c03a6534e06415238cc1f4ffc083ad9f)) {
        Py_XDECREF(cache_frame_c03a6534e06415238cc1f4ffc083ad9f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c03a6534e06415238cc1f4ffc083ad9f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c03a6534e06415238cc1f4ffc083ad9f = MAKE_FUNCTION_FRAME(tstate, codeobj_c03a6534e06415238cc1f4ffc083ad9f, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c03a6534e06415238cc1f4ffc083ad9f->m_type_description == NULL);
    frame_c03a6534e06415238cc1f4ffc083ad9f = cache_frame_c03a6534e06415238cc1f4ffc083ad9f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c03a6534e06415238cc1f4ffc083ad9f);
    assert(Py_REFCNT(frame_c03a6534e06415238cc1f4ffc083ad9f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_datagram);
        tmp_args_element_value_1 = par_datagram;
        frame_c03a6534e06415238cc1f4ffc083ad9f->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dgi == NULL);
        var_dgi = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_dgi);
        tmp_called_instance_1 = var_dgi;
        frame_c03a6534e06415238cc1f4ffc083ad9f->m_frame.f_lineno = 99;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[18]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_number == NULL);
        var_number = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_dgi);
        tmp_called_instance_2 = var_dgi;
        frame_c03a6534e06415238cc1f4ffc083ad9f->m_frame.f_lineno = 100;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[19]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_type == NULL);
        var_type = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[21];
        CHECK_OBJECT(var_number);
        tmp_tuple_element_1 = var_number;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_type);
        tmp_tuple_element_1 = var_type;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c03a6534e06415238cc1f4ffc083ad9f->m_frame.f_lineno = 101;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c03a6534e06415238cc1f4ffc083ad9f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c03a6534e06415238cc1f4ffc083ad9f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c03a6534e06415238cc1f4ffc083ad9f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c03a6534e06415238cc1f4ffc083ad9f,
        type_description_1,
        par_self,
        par_datagram,
        var_dgi,
        var_number,
        var_type
    );


    // Release cached frame if used for exception.
    if (frame_c03a6534e06415238cc1f4ffc083ad9f == cache_frame_c03a6534e06415238cc1f4ffc083ad9f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c03a6534e06415238cc1f4ffc083ad9f);
        cache_frame_c03a6534e06415238cc1f4ffc083ad9f = NULL;
    }

    assertFrameObject(frame_c03a6534e06415238cc1f4ffc083ad9f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_dgi);
        tmp_tuple_element_2 = var_dgi;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_type);
        tmp_tuple_element_2 = var_type;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dgi);
    Py_DECREF(var_dgi);
    var_dgi = NULL;
    CHECK_OBJECT(var_number);
    Py_DECREF(var_number);
    var_number = NULL;
    CHECK_OBJECT(var_type);
    Py_DECREF(var_type);
    var_type = NULL;
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

    Py_XDECREF(var_dgi);
    var_dgi = NULL;
    Py_XDECREF(var_number);
    var_number = NULL;
    Py_XDECREF(var_type);
    var_type = NULL;
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
    CHECK_OBJECT(par_datagram);
    Py_DECREF(par_datagram);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_datagram);
    Py_DECREF(par_datagram);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_xyz = python_pars[1];
    PyObject *par_hpr = python_pars[2];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_4d8ecb1885b8d238179650f2d8689a7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4d8ecb1885b8d238179650f2d8689a7f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d8ecb1885b8d238179650f2d8689a7f)) {
        Py_XDECREF(cache_frame_4d8ecb1885b8d238179650f2d8689a7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d8ecb1885b8d238179650f2d8689a7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d8ecb1885b8d238179650f2d8689a7f = MAKE_FUNCTION_FRAME(tstate, codeobj_4d8ecb1885b8d238179650f2d8689a7f, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d8ecb1885b8d238179650f2d8689a7f->m_type_description == NULL);
    frame_4d8ecb1885b8d238179650f2d8689a7f = cache_frame_4d8ecb1885b8d238179650f2d8689a7f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d8ecb1885b8d238179650f2d8689a7f);
    assert(Py_REFCNT(frame_4d8ecb1885b8d238179650f2d8689a7f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 105;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 108;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_5 = var_datagram;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_6 = par_xyz;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 109;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_7 = var_datagram;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_8 = par_xyz;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 110;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_9 = var_datagram;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_10 = par_xyz;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 111;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_11 = var_datagram;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_12 = par_hpr;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 112;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_13 = var_datagram;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_14 = par_hpr;
        tmp_subscript_value_5 = mod_consts[24];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 113;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_15 = var_datagram;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_16 = par_hpr;
        tmp_subscript_value_6 = mod_consts[29];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame.f_lineno = 114;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d8ecb1885b8d238179650f2d8689a7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d8ecb1885b8d238179650f2d8689a7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d8ecb1885b8d238179650f2d8689a7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d8ecb1885b8d238179650f2d8689a7f,
        type_description_1,
        par_self,
        par_xyz,
        par_hpr,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_4d8ecb1885b8d238179650f2d8689a7f == cache_frame_4d8ecb1885b8d238179650f2d8689a7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d8ecb1885b8d238179650f2d8689a7f);
        cache_frame_4d8ecb1885b8d238179650f2d8689a7f = NULL;
    }

    assertFrameObject(frame_4d8ecb1885b8d238179650f2d8689a7f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_p = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_37b59e5812bb51a9d8f22cc07e5f65f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7)) {
        Py_XDECREF(cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_37b59e5812bb51a9d8f22cc07e5f65f7, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_type_description == NULL);
    frame_37b59e5812bb51a9d8f22cc07e5f65f7 = cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_37b59e5812bb51a9d8f22cc07e5f65f7);
    assert(Py_REFCNT(frame_37b59e5812bb51a9d8f22cc07e5f65f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 118;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[30]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 119;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_3 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 120;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_4 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 121;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[30]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_5 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 122;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[30]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_6 = par_dgi;
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 123;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[30]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[31];
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_1 = var_z;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_1 = var_h;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_1 = var_p;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_1 = var_r;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 5, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37b59e5812bb51a9d8f22cc07e5f65f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37b59e5812bb51a9d8f22cc07e5f65f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37b59e5812bb51a9d8f22cc07e5f65f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37b59e5812bb51a9d8f22cc07e5f65f7,
        type_description_1,
        par_self,
        par_dgi,
        var_x,
        var_y,
        var_z,
        var_h,
        var_p,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_37b59e5812bb51a9d8f22cc07e5f65f7 == cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7);
        cache_frame_37b59e5812bb51a9d8f22cc07e5f65f7 = NULL;
    }

    assertFrameObject(frame_37b59e5812bb51a9d8f22cc07e5f65f7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_x);
        tmp_tuple_element_2 = var_x;
        tmp_return_value = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_2 = var_y;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_2 = var_z;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_2 = var_h;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_2 = var_p;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_2 = var_r;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
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
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
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
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_focalLength = python_pars[1];
    PyObject *par_filmSize = python_pars[2];
    PyObject *par_filmOffset = python_pars[3];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_ee8f683563def7096ce1c09c3d93f78d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ee8f683563def7096ce1c09c3d93f78d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee8f683563def7096ce1c09c3d93f78d)) {
        Py_XDECREF(cache_frame_ee8f683563def7096ce1c09c3d93f78d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee8f683563def7096ce1c09c3d93f78d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee8f683563def7096ce1c09c3d93f78d = MAKE_FUNCTION_FRAME(tstate, codeobj_ee8f683563def7096ce1c09c3d93f78d, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee8f683563def7096ce1c09c3d93f78d->m_type_description == NULL);
    frame_ee8f683563def7096ce1c09c3d93f78d = cache_frame_ee8f683563def7096ce1c09c3d93f78d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ee8f683563def7096ce1c09c3d93f78d);
    assert(Py_REFCNT(frame_ee8f683563def7096ce1c09c3d93f78d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 128;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 131;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_1 = var_datagram;
        CHECK_OBJECT(par_focalLength);
        tmp_args_element_value_3 = par_focalLength;
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 132;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[27], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_5 = var_datagram;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filmSize);
        tmp_expression_value_6 = par_filmSize;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 133;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_7 = var_datagram;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filmSize);
        tmp_expression_value_8 = par_filmSize;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 134;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_9 = var_datagram;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filmOffset);
        tmp_expression_value_10 = par_filmOffset;
        tmp_subscript_value_3 = mod_consts[28];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 135;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_11 = var_datagram;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filmOffset);
        tmp_expression_value_12 = par_filmOffset;
        tmp_subscript_value_4 = mod_consts[24];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ee8f683563def7096ce1c09c3d93f78d->m_frame.f_lineno = 136;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee8f683563def7096ce1c09c3d93f78d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee8f683563def7096ce1c09c3d93f78d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee8f683563def7096ce1c09c3d93f78d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee8f683563def7096ce1c09c3d93f78d,
        type_description_1,
        par_self,
        par_focalLength,
        par_filmSize,
        par_filmOffset,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_ee8f683563def7096ce1c09c3d93f78d == cache_frame_ee8f683563def7096ce1c09c3d93f78d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee8f683563def7096ce1c09c3d93f78d);
        cache_frame_ee8f683563def7096ce1c09c3d93f78d = NULL;
    }

    assertFrameObject(frame_ee8f683563def7096ce1c09c3d93f78d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_focalLength);
    Py_DECREF(par_focalLength);
    CHECK_OBJECT(par_filmSize);
    Py_DECREF(par_filmSize);
    CHECK_OBJECT(par_filmOffset);
    Py_DECREF(par_filmOffset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_focalLength);
    Py_DECREF(par_focalLength);
    CHECK_OBJECT(par_filmSize);
    Py_DECREF(par_filmSize);
    CHECK_OBJECT(par_filmOffset);
    Py_DECREF(par_filmOffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_focalLength = NULL;
    PyObject *var_filmSize = NULL;
    PyObject *var_filmOffset = NULL;
    struct Nuitka_FrameObject *frame_1c1a2c85ac8dd8299973e14b27a4b5cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd)) {
        Py_XDECREF(cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd = MAKE_FUNCTION_FRAME(tstate, codeobj_1c1a2c85ac8dd8299973e14b27a4b5cd, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_type_description == NULL);
    frame_1c1a2c85ac8dd8299973e14b27a4b5cd = cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c1a2c85ac8dd8299973e14b27a4b5cd);
    assert(Py_REFCNT(frame_1c1a2c85ac8dd8299973e14b27a4b5cd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 140;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[30]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_focalLength == NULL);
        var_focalLength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 141;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_dgi);
            tmp_called_instance_3 = par_dgi;
            frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 141;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_filmSize == NULL);
        var_filmSize = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_4 = par_dgi;
        frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 142;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[30]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_5;
            PyTuple_SET_ITEM(tmp_assign_source_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_dgi);
            tmp_called_instance_5 = par_dgi;
            frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 142;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[30]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_filmOffset == NULL);
        var_filmOffset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[33];
        CHECK_OBJECT(var_focalLength);
        tmp_tuple_element_3 = var_focalLength;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_filmSize);
            tmp_expression_value_3 = var_filmSize;
            tmp_subscript_value_1 = mod_consts[28];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_filmSize);
            tmp_expression_value_4 = var_filmSize;
            tmp_subscript_value_2 = mod_consts[24];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_filmOffset);
            tmp_expression_value_5 = var_filmOffset;
            tmp_subscript_value_3 = mod_consts[28];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_3);
            CHECK_OBJECT(var_filmOffset);
            tmp_expression_value_6 = var_filmOffset;
            tmp_subscript_value_4 = mod_consts[24];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame.f_lineno = 143;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c1a2c85ac8dd8299973e14b27a4b5cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c1a2c85ac8dd8299973e14b27a4b5cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c1a2c85ac8dd8299973e14b27a4b5cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c1a2c85ac8dd8299973e14b27a4b5cd,
        type_description_1,
        par_self,
        par_dgi,
        var_focalLength,
        var_filmSize,
        var_filmOffset
    );


    // Release cached frame if used for exception.
    if (frame_1c1a2c85ac8dd8299973e14b27a4b5cd == cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd);
        cache_frame_1c1a2c85ac8dd8299973e14b27a4b5cd = NULL;
    }

    assertFrameObject(frame_1c1a2c85ac8dd8299973e14b27a4b5cd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_focalLength);
        tmp_tuple_element_4 = var_focalLength;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_filmSize);
        tmp_tuple_element_4 = var_filmSize;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_filmOffset);
        tmp_tuple_element_4 = var_filmOffset;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_4);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_focalLength);
    Py_DECREF(var_focalLength);
    var_focalLength = NULL;
    CHECK_OBJECT(var_filmSize);
    Py_DECREF(var_filmSize);
    var_filmSize = NULL;
    CHECK_OBJECT(var_filmOffset);
    Py_DECREF(var_filmOffset);
    var_filmOffset = NULL;
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

    Py_XDECREF(var_focalLength);
    var_focalLength = NULL;
    Py_XDECREF(var_filmSize);
    var_filmSize = NULL;
    Py_XDECREF(var_filmOffset);
    var_filmOffset = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_xyz = python_pars[1];
    PyObject *par_hpr = python_pars[2];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_098e6a8ff9de454fffa85ba81a44cb07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_098e6a8ff9de454fffa85ba81a44cb07 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_098e6a8ff9de454fffa85ba81a44cb07)) {
        Py_XDECREF(cache_frame_098e6a8ff9de454fffa85ba81a44cb07);

#if _DEBUG_REFCOUNTS
        if (cache_frame_098e6a8ff9de454fffa85ba81a44cb07 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_098e6a8ff9de454fffa85ba81a44cb07 = MAKE_FUNCTION_FRAME(tstate, codeobj_098e6a8ff9de454fffa85ba81a44cb07, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_098e6a8ff9de454fffa85ba81a44cb07->m_type_description == NULL);
    frame_098e6a8ff9de454fffa85ba81a44cb07 = cache_frame_098e6a8ff9de454fffa85ba81a44cb07;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_098e6a8ff9de454fffa85ba81a44cb07);
    assert(Py_REFCNT(frame_098e6a8ff9de454fffa85ba81a44cb07) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 149;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 152;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_5 = var_datagram;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_6 = par_xyz;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 153;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_7 = var_datagram;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_8 = par_xyz;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 154;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_9 = var_datagram;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_10 = par_xyz;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 155;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_11 = var_datagram;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_12 = par_hpr;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 156;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_13 = var_datagram;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_14 = par_hpr;
        tmp_subscript_value_5 = mod_consts[24];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 157;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_15 = var_datagram;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_16 = par_hpr;
        tmp_subscript_value_6 = mod_consts[29];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame.f_lineno = 158;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_098e6a8ff9de454fffa85ba81a44cb07, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_098e6a8ff9de454fffa85ba81a44cb07->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_098e6a8ff9de454fffa85ba81a44cb07, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_098e6a8ff9de454fffa85ba81a44cb07,
        type_description_1,
        par_self,
        par_xyz,
        par_hpr,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_098e6a8ff9de454fffa85ba81a44cb07 == cache_frame_098e6a8ff9de454fffa85ba81a44cb07) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_098e6a8ff9de454fffa85ba81a44cb07);
        cache_frame_098e6a8ff9de454fffa85ba81a44cb07 = NULL;
    }

    assertFrameObject(frame_098e6a8ff9de454fffa85ba81a44cb07);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_b63aed9e2128fae00ecab32ac0584fa3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b63aed9e2128fae00ecab32ac0584fa3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b63aed9e2128fae00ecab32ac0584fa3)) {
        Py_XDECREF(cache_frame_b63aed9e2128fae00ecab32ac0584fa3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b63aed9e2128fae00ecab32ac0584fa3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b63aed9e2128fae00ecab32ac0584fa3 = MAKE_FUNCTION_FRAME(tstate, codeobj_b63aed9e2128fae00ecab32ac0584fa3, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b63aed9e2128fae00ecab32ac0584fa3->m_type_description == NULL);
    frame_b63aed9e2128fae00ecab32ac0584fa3 = cache_frame_b63aed9e2128fae00ecab32ac0584fa3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b63aed9e2128fae00ecab32ac0584fa3);
    assert(Py_REFCNT(frame_b63aed9e2128fae00ecab32ac0584fa3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b63aed9e2128fae00ecab32ac0584fa3->m_frame.f_lineno = 164;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b63aed9e2128fae00ecab32ac0584fa3->m_frame.f_lineno = 165;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b63aed9e2128fae00ecab32ac0584fa3->m_frame.f_lineno = 167;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_b63aed9e2128fae00ecab32ac0584fa3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b63aed9e2128fae00ecab32ac0584fa3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b63aed9e2128fae00ecab32ac0584fa3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b63aed9e2128fae00ecab32ac0584fa3,
        type_description_1,
        par_self,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_b63aed9e2128fae00ecab32ac0584fa3 == cache_frame_b63aed9e2128fae00ecab32ac0584fa3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b63aed9e2128fae00ecab32ac0584fa3);
        cache_frame_b63aed9e2128fae00ecab32ac0584fa3 = NULL;
    }

    assertFrameObject(frame_b63aed9e2128fae00ecab32ac0584fa3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_xyz = python_pars[1];
    PyObject *par_hpr = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_hidden = python_pars[5];
    PyObject *par_name = python_pars[6];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_49ca088a467982cde48f9652a4c4f030;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_49ca088a467982cde48f9652a4c4f030 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49ca088a467982cde48f9652a4c4f030)) {
        Py_XDECREF(cache_frame_49ca088a467982cde48f9652a4c4f030);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49ca088a467982cde48f9652a4c4f030 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49ca088a467982cde48f9652a4c4f030 = MAKE_FUNCTION_FRAME(tstate, codeobj_49ca088a467982cde48f9652a4c4f030, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49ca088a467982cde48f9652a4c4f030->m_type_description == NULL);
    frame_49ca088a467982cde48f9652a4c4f030 = cache_frame_49ca088a467982cde48f9652a4c4f030;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_49ca088a467982cde48f9652a4c4f030);
    assert(Py_REFCNT(frame_49ca088a467982cde48f9652a4c4f030) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 172;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 173;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 175;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_1 = var_datagram;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 176;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_5 = var_datagram;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_6 = par_xyz;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 177;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_7 = var_datagram;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_8 = par_xyz;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 178;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_9 = var_datagram;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_10 = par_xyz;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 179;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 179;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_11 = var_datagram;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_12 = par_hpr;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 180;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 180;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_13 = var_datagram;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_14 = par_hpr;
        tmp_subscript_value_5 = mod_consts[24];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, 1);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 181;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 181;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_15 = var_datagram;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_16 = par_hpr;
        tmp_subscript_value_6 = mod_consts[29];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 2);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 182;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 182;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_17 = var_datagram;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[27]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_18 = par_scale;
        tmp_subscript_value_7 = mod_consts[28];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_7, 0);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 183;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 183;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_19 = var_datagram;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[27]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_20 = par_scale;
        tmp_subscript_value_8 = mod_consts[24];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_8, 1);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 184;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_21 = var_datagram;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[27]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_22 = par_scale;
        tmp_subscript_value_9 = mod_consts[29];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_9, 2);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 185;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_23 = var_datagram;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[27]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_24 = par_color;
        tmp_subscript_value_10 = mod_consts[28];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_10, 0);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 186;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_25 = var_datagram;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[27]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_26 = par_color;
        tmp_subscript_value_11 = mod_consts[24];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_11, 1);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 187;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 187;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_27 = var_datagram;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[27]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_28 = par_color;
        tmp_subscript_value_12 = mod_consts[29];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_12, 2);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 188;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_29 = var_datagram;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[27]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_30 = par_color;
        tmp_subscript_value_13 = mod_consts[38];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_13, 3);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 189;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_2 = var_datagram;
        CHECK_OBJECT(par_hidden);
        tmp_args_element_value_17 = par_hidden;
        frame_49ca088a467982cde48f9652a4c4f030->m_frame.f_lineno = 190;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[39], tmp_args_element_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49ca088a467982cde48f9652a4c4f030, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49ca088a467982cde48f9652a4c4f030->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49ca088a467982cde48f9652a4c4f030, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49ca088a467982cde48f9652a4c4f030,
        type_description_1,
        par_self,
        par_xyz,
        par_hpr,
        par_scale,
        par_color,
        par_hidden,
        par_name,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_49ca088a467982cde48f9652a4c4f030 == cache_frame_49ca088a467982cde48f9652a4c4f030) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49ca088a467982cde48f9652a4c4f030);
        cache_frame_49ca088a467982cde48f9652a4c4f030 = NULL;
    }

    assertFrameObject(frame_49ca088a467982cde48f9652a4c4f030);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_hidden);
    Py_DECREF(par_hidden);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_hidden);
    Py_DECREF(par_hidden);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_p = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_ebcb171a20f6fe4e664e13da2ee8a0d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9)) {
        Py_XDECREF(cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_ebcb171a20f6fe4e664e13da2ee8a0d9, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_type_description == NULL);
    frame_ebcb171a20f6fe4e664e13da2ee8a0d9 = cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ebcb171a20f6fe4e664e13da2ee8a0d9);
    assert(Py_REFCNT(frame_ebcb171a20f6fe4e664e13da2ee8a0d9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 194;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[30]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 195;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_3 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 196;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_4 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 197;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[30]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_5 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 198;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[30]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_6 = par_dgi;
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 199;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[30]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[40];
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_1 = var_z;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_1 = var_h;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_1 = var_p;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_1 = var_r;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 5, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame.f_lineno = 200;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ebcb171a20f6fe4e664e13da2ee8a0d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebcb171a20f6fe4e664e13da2ee8a0d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebcb171a20f6fe4e664e13da2ee8a0d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebcb171a20f6fe4e664e13da2ee8a0d9,
        type_description_1,
        par_self,
        par_dgi,
        var_x,
        var_y,
        var_z,
        var_h,
        var_p,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_ebcb171a20f6fe4e664e13da2ee8a0d9 == cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9);
        cache_frame_ebcb171a20f6fe4e664e13da2ee8a0d9 = NULL;
    }

    assertFrameObject(frame_ebcb171a20f6fe4e664e13da2ee8a0d9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_x);
        tmp_tuple_element_2 = var_x;
        tmp_return_value = MAKE_TUPLE_EMPTY(6);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_2 = var_y;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_2 = var_z;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_2 = var_h;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_2 = var_p;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_2 = var_r;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
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
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
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
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_name = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_p = NULL;
    PyObject *var_r = NULL;
    PyObject *var_sx = NULL;
    PyObject *var_sy = NULL;
    PyObject *var_sz = NULL;
    PyObject *var_red = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_a = NULL;
    PyObject *var_hidden = NULL;
    struct Nuitka_FrameObject *frame_120e61e2468a02a40ac6ae8560b03192;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_120e61e2468a02a40ac6ae8560b03192 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_120e61e2468a02a40ac6ae8560b03192)) {
        Py_XDECREF(cache_frame_120e61e2468a02a40ac6ae8560b03192);

#if _DEBUG_REFCOUNTS
        if (cache_frame_120e61e2468a02a40ac6ae8560b03192 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_120e61e2468a02a40ac6ae8560b03192 = MAKE_FUNCTION_FRAME(tstate, codeobj_120e61e2468a02a40ac6ae8560b03192, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_120e61e2468a02a40ac6ae8560b03192->m_type_description == NULL);
    frame_120e61e2468a02a40ac6ae8560b03192 = cache_frame_120e61e2468a02a40ac6ae8560b03192;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_120e61e2468a02a40ac6ae8560b03192);
    assert(Py_REFCNT(frame_120e61e2468a02a40ac6ae8560b03192) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 205;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 206;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_3 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 207;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_4 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 208;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[30]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_5 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 209;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[30]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_6 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 210;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[30]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_7 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 211;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[30]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_8 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 212;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[30]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sx == NULL);
        var_sx = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_9 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 213;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[30]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sy == NULL);
        var_sy = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_10 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 214;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[30]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sz == NULL);
        var_sz = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_11 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 215;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[30]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_red == NULL);
        var_red = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_12 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 216;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[30]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_13 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 217;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[30]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_14;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_14 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 218;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[30]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_15 = par_dgi;
        frame_120e61e2468a02a40ac6ae8560b03192->m_frame.f_lineno = 219;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[42]);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hidden == NULL);
        var_hidden = tmp_assign_source_15;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_120e61e2468a02a40ac6ae8560b03192, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_120e61e2468a02a40ac6ae8560b03192->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_120e61e2468a02a40ac6ae8560b03192, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_120e61e2468a02a40ac6ae8560b03192,
        type_description_1,
        par_self,
        par_dgi,
        var_name,
        var_x,
        var_y,
        var_z,
        var_h,
        var_p,
        var_r,
        var_sx,
        var_sy,
        var_sz,
        var_red,
        var_g,
        var_b,
        var_a,
        var_hidden
    );


    // Release cached frame if used for exception.
    if (frame_120e61e2468a02a40ac6ae8560b03192 == cache_frame_120e61e2468a02a40ac6ae8560b03192) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_120e61e2468a02a40ac6ae8560b03192);
        cache_frame_120e61e2468a02a40ac6ae8560b03192 = NULL;
    }

    assertFrameObject(frame_120e61e2468a02a40ac6ae8560b03192);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_name);
        tmp_tuple_element_1 = var_name;
        tmp_return_value = MAKE_TUPLE_EMPTY(15);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_1 = var_z;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_1 = var_h;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_1 = var_p;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_1);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_1 = var_r;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_1);
        CHECK_OBJECT(var_sx);
        tmp_tuple_element_1 = var_sx;
        PyTuple_SET_ITEM0(tmp_return_value, 7, tmp_tuple_element_1);
        CHECK_OBJECT(var_sy);
        tmp_tuple_element_1 = var_sy;
        PyTuple_SET_ITEM0(tmp_return_value, 8, tmp_tuple_element_1);
        CHECK_OBJECT(var_sz);
        tmp_tuple_element_1 = var_sz;
        PyTuple_SET_ITEM0(tmp_return_value, 9, tmp_tuple_element_1);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_1 = var_red;
        PyTuple_SET_ITEM0(tmp_return_value, 10, tmp_tuple_element_1);
        CHECK_OBJECT(var_g);
        tmp_tuple_element_1 = var_g;
        PyTuple_SET_ITEM0(tmp_return_value, 11, tmp_tuple_element_1);
        CHECK_OBJECT(var_b);
        tmp_tuple_element_1 = var_b;
        PyTuple_SET_ITEM0(tmp_return_value, 12, tmp_tuple_element_1);
        CHECK_OBJECT(var_a);
        tmp_tuple_element_1 = var_a;
        PyTuple_SET_ITEM0(tmp_return_value, 13, tmp_tuple_element_1);
        CHECK_OBJECT(var_hidden);
        tmp_tuple_element_1 = var_hidden;
        PyTuple_SET_ITEM0(tmp_return_value, 14, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    CHECK_OBJECT(var_sx);
    Py_DECREF(var_sx);
    var_sx = NULL;
    CHECK_OBJECT(var_sy);
    Py_DECREF(var_sy);
    var_sy = NULL;
    CHECK_OBJECT(var_sz);
    Py_DECREF(var_sz);
    var_sz = NULL;
    CHECK_OBJECT(var_red);
    Py_DECREF(var_red);
    var_red = NULL;
    CHECK_OBJECT(var_g);
    Py_DECREF(var_g);
    var_g = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    CHECK_OBJECT(var_hidden);
    Py_DECREF(var_hidden);
    var_hidden = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_sx);
    var_sx = NULL;
    Py_XDECREF(var_sy);
    var_sy = NULL;
    Py_XDECREF(var_sz);
    var_sz = NULL;
    Py_XDECREF(var_red);
    var_red = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_xyz = python_pars[1];
    PyObject *par_hpr = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_29b8f09a6c77fc4155911231fcae815c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_29b8f09a6c77fc4155911231fcae815c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_29b8f09a6c77fc4155911231fcae815c)) {
        Py_XDECREF(cache_frame_29b8f09a6c77fc4155911231fcae815c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29b8f09a6c77fc4155911231fcae815c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29b8f09a6c77fc4155911231fcae815c = MAKE_FUNCTION_FRAME(tstate, codeobj_29b8f09a6c77fc4155911231fcae815c, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29b8f09a6c77fc4155911231fcae815c->m_type_description == NULL);
    frame_29b8f09a6c77fc4155911231fcae815c = cache_frame_29b8f09a6c77fc4155911231fcae815c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_29b8f09a6c77fc4155911231fcae815c);
    assert(Py_REFCNT(frame_29b8f09a6c77fc4155911231fcae815c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 224;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 225;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 227;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_5 = var_datagram;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_6 = par_xyz;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 228;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_7 = var_datagram;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_8 = par_xyz;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 229;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_9 = var_datagram;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xyz);
        tmp_expression_value_10 = par_xyz;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 230;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_11 = var_datagram;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_12 = par_hpr;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 231;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_13 = var_datagram;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_14 = par_hpr;
        tmp_subscript_value_5 = mod_consts[24];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 232;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_15 = var_datagram;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hpr);
        tmp_expression_value_16 = par_hpr;
        tmp_subscript_value_6 = mod_consts[29];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 233;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_17 = var_datagram;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[27]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_18 = par_scale;
        tmp_subscript_value_7 = mod_consts[28];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_7, 0);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 234;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_19 = var_datagram;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[27]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_20 = par_scale;
        tmp_subscript_value_8 = mod_consts[24];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_8, 1);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 235;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_21 = var_datagram;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[27]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_expression_value_22 = par_scale;
        tmp_subscript_value_9 = mod_consts[29];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_9, 2);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_29b8f09a6c77fc4155911231fcae815c->m_frame.f_lineno = 236;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29b8f09a6c77fc4155911231fcae815c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29b8f09a6c77fc4155911231fcae815c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29b8f09a6c77fc4155911231fcae815c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29b8f09a6c77fc4155911231fcae815c,
        type_description_1,
        par_self,
        par_xyz,
        par_hpr,
        par_scale,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_29b8f09a6c77fc4155911231fcae815c == cache_frame_29b8f09a6c77fc4155911231fcae815c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29b8f09a6c77fc4155911231fcae815c);
        cache_frame_29b8f09a6c77fc4155911231fcae815c = NULL;
    }

    assertFrameObject(frame_29b8f09a6c77fc4155911231fcae815c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xyz);
    Py_DECREF(par_xyz);
    CHECK_OBJECT(par_hpr);
    Py_DECREF(par_hpr);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_h = NULL;
    PyObject *var_p = NULL;
    PyObject *var_r = NULL;
    PyObject *var_sx = NULL;
    PyObject *var_sy = NULL;
    PyObject *var_sz = NULL;
    struct Nuitka_FrameObject *frame_7d11d5e106d903ebf98b81006c4db53e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7d11d5e106d903ebf98b81006c4db53e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7d11d5e106d903ebf98b81006c4db53e)) {
        Py_XDECREF(cache_frame_7d11d5e106d903ebf98b81006c4db53e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d11d5e106d903ebf98b81006c4db53e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d11d5e106d903ebf98b81006c4db53e = MAKE_FUNCTION_FRAME(tstate, codeobj_7d11d5e106d903ebf98b81006c4db53e, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d11d5e106d903ebf98b81006c4db53e->m_type_description == NULL);
    frame_7d11d5e106d903ebf98b81006c4db53e = cache_frame_7d11d5e106d903ebf98b81006c4db53e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d11d5e106d903ebf98b81006c4db53e);
    assert(Py_REFCNT(frame_7d11d5e106d903ebf98b81006c4db53e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 241;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[30]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 242;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_3 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 243;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_4 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 244;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[30]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_5 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 245;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[30]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_6 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 246;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[30]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_7 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 247;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[30]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sx == NULL);
        var_sx = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_8 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 248;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[30]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sy == NULL);
        var_sy = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_9 = par_dgi;
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 249;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[30]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sz == NULL);
        var_sz = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[44];
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(9);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_1 = var_z;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_1 = var_h;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_1 = var_p;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_1 = var_r;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 5, tmp_tuple_element_1);
        CHECK_OBJECT(var_sx);
        tmp_tuple_element_1 = var_sx;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 6, tmp_tuple_element_1);
        CHECK_OBJECT(var_sy);
        tmp_tuple_element_1 = var_sy;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 7, tmp_tuple_element_1);
        CHECK_OBJECT(var_sz);
        tmp_tuple_element_1 = var_sz;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 8, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 251;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7d11d5e106d903ebf98b81006c4db53e->m_frame.f_lineno = 250;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d11d5e106d903ebf98b81006c4db53e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d11d5e106d903ebf98b81006c4db53e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d11d5e106d903ebf98b81006c4db53e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d11d5e106d903ebf98b81006c4db53e,
        type_description_1,
        par_self,
        par_dgi,
        var_x,
        var_y,
        var_z,
        var_h,
        var_p,
        var_r,
        var_sx,
        var_sy,
        var_sz
    );


    // Release cached frame if used for exception.
    if (frame_7d11d5e106d903ebf98b81006c4db53e == cache_frame_7d11d5e106d903ebf98b81006c4db53e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d11d5e106d903ebf98b81006c4db53e);
        cache_frame_7d11d5e106d903ebf98b81006c4db53e = NULL;
    }

    assertFrameObject(frame_7d11d5e106d903ebf98b81006c4db53e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_x);
        tmp_tuple_element_2 = var_x;
        tmp_return_value = MAKE_TUPLE_EMPTY(9);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_2 = var_y;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_z);
        tmp_tuple_element_2 = var_z;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_2 = var_h;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(var_p);
        tmp_tuple_element_2 = var_p;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_2 = var_r;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_2);
        CHECK_OBJECT(var_sx);
        tmp_tuple_element_2 = var_sx;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_2);
        CHECK_OBJECT(var_sy);
        tmp_tuple_element_2 = var_sy;
        PyTuple_SET_ITEM0(tmp_return_value, 7, tmp_tuple_element_2);
        CHECK_OBJECT(var_sz);
        tmp_tuple_element_2 = var_sz;
        PyTuple_SET_ITEM0(tmp_return_value, 8, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
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
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    CHECK_OBJECT(var_sx);
    Py_DECREF(var_sx);
    var_sx = NULL;
    CHECK_OBJECT(var_sy);
    Py_DECREF(var_sy);
    var_sy = NULL;
    CHECK_OBJECT(var_sz);
    Py_DECREF(var_sz);
    var_sz = NULL;
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
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_sx);
    var_sx = NULL;
    Py_XDECREF(var_sy);
    var_sy = NULL;
    Py_XDECREF(var_sz);
    var_sz = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_commandString = python_pars[1];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_9f6888d7b932c2e4433d1e3445a2dae0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9f6888d7b932c2e4433d1e3445a2dae0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9f6888d7b932c2e4433d1e3445a2dae0)) {
        Py_XDECREF(cache_frame_9f6888d7b932c2e4433d1e3445a2dae0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f6888d7b932c2e4433d1e3445a2dae0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f6888d7b932c2e4433d1e3445a2dae0 = MAKE_FUNCTION_FRAME(tstate, codeobj_9f6888d7b932c2e4433d1e3445a2dae0, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f6888d7b932c2e4433d1e3445a2dae0->m_type_description == NULL);
    frame_9f6888d7b932c2e4433d1e3445a2dae0 = cache_frame_9f6888d7b932c2e4433d1e3445a2dae0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9f6888d7b932c2e4433d1e3445a2dae0);
    assert(Py_REFCNT(frame_9f6888d7b932c2e4433d1e3445a2dae0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9f6888d7b932c2e4433d1e3445a2dae0->m_frame.f_lineno = 255;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9f6888d7b932c2e4433d1e3445a2dae0->m_frame.f_lineno = 256;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9f6888d7b932c2e4433d1e3445a2dae0->m_frame.f_lineno = 258;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_1 = var_datagram;
        CHECK_OBJECT(par_commandString);
        tmp_args_element_value_3 = par_commandString;
        frame_9f6888d7b932c2e4433d1e3445a2dae0->m_frame.f_lineno = 259;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f6888d7b932c2e4433d1e3445a2dae0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f6888d7b932c2e4433d1e3445a2dae0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f6888d7b932c2e4433d1e3445a2dae0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f6888d7b932c2e4433d1e3445a2dae0,
        type_description_1,
        par_self,
        par_commandString,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_9f6888d7b932c2e4433d1e3445a2dae0 == cache_frame_9f6888d7b932c2e4433d1e3445a2dae0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f6888d7b932c2e4433d1e3445a2dae0);
        cache_frame_9f6888d7b932c2e4433d1e3445a2dae0 = NULL;
    }

    assertFrameObject(frame_9f6888d7b932c2e4433d1e3445a2dae0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_commandString);
    Py_DECREF(par_commandString);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_commandString);
    Py_DECREF(par_commandString);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_d55301a4cc8df642b5d9171510d34153;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d55301a4cc8df642b5d9171510d34153 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d55301a4cc8df642b5d9171510d34153)) {
        Py_XDECREF(cache_frame_d55301a4cc8df642b5d9171510d34153);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d55301a4cc8df642b5d9171510d34153 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d55301a4cc8df642b5d9171510d34153 = MAKE_FUNCTION_FRAME(tstate, codeobj_d55301a4cc8df642b5d9171510d34153, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d55301a4cc8df642b5d9171510d34153->m_type_description == NULL);
    frame_d55301a4cc8df642b5d9171510d34153 = cache_frame_d55301a4cc8df642b5d9171510d34153;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d55301a4cc8df642b5d9171510d34153);
    assert(Py_REFCNT(frame_d55301a4cc8df642b5d9171510d34153) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_d55301a4cc8df642b5d9171510d34153->m_frame.f_lineno = 263;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d55301a4cc8df642b5d9171510d34153, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d55301a4cc8df642b5d9171510d34153->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d55301a4cc8df642b5d9171510d34153, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d55301a4cc8df642b5d9171510d34153,
        type_description_1,
        par_self,
        par_dgi,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_d55301a4cc8df642b5d9171510d34153 == cache_frame_d55301a4cc8df642b5d9171510d34153) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d55301a4cc8df642b5d9171510d34153);
        cache_frame_d55301a4cc8df642b5d9171510d34153 = NULL;
    }

    assertFrameObject(frame_d55301a4cc8df642b5d9171510d34153);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_command);
    tmp_return_value = var_command;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_6a1ce556ea79f9c227f8ed14b1713257;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6a1ce556ea79f9c227f8ed14b1713257 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a1ce556ea79f9c227f8ed14b1713257)) {
        Py_XDECREF(cache_frame_6a1ce556ea79f9c227f8ed14b1713257);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a1ce556ea79f9c227f8ed14b1713257 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a1ce556ea79f9c227f8ed14b1713257 = MAKE_FUNCTION_FRAME(tstate, codeobj_6a1ce556ea79f9c227f8ed14b1713257, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a1ce556ea79f9c227f8ed14b1713257->m_type_description == NULL);
    frame_6a1ce556ea79f9c227f8ed14b1713257 = cache_frame_6a1ce556ea79f9c227f8ed14b1713257;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6a1ce556ea79f9c227f8ed14b1713257);
    assert(Py_REFCNT(frame_6a1ce556ea79f9c227f8ed14b1713257) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6a1ce556ea79f9c227f8ed14b1713257->m_frame.f_lineno = 267;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6a1ce556ea79f9c227f8ed14b1713257->m_frame.f_lineno = 268;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6a1ce556ea79f9c227f8ed14b1713257->m_frame.f_lineno = 270;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_6a1ce556ea79f9c227f8ed14b1713257, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a1ce556ea79f9c227f8ed14b1713257->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a1ce556ea79f9c227f8ed14b1713257, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a1ce556ea79f9c227f8ed14b1713257,
        type_description_1,
        par_self,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_6a1ce556ea79f9c227f8ed14b1713257 == cache_frame_6a1ce556ea79f9c227f8ed14b1713257) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a1ce556ea79f9c227f8ed14b1713257);
        cache_frame_6a1ce556ea79f9c227f8ed14b1713257 = NULL;
    }

    assertFrameObject(frame_6a1ce556ea79f9c227f8ed14b1713257);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_aae693ff6f6fc07900ed4b37dc73fbf9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9)) {
        Py_XDECREF(cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9 = MAKE_FUNCTION_FRAME(tstate, codeobj_aae693ff6f6fc07900ed4b37dc73fbf9, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9->m_type_description == NULL);
    frame_aae693ff6f6fc07900ed4b37dc73fbf9 = cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aae693ff6f6fc07900ed4b37dc73fbf9);
    assert(Py_REFCNT(frame_aae693ff6f6fc07900ed4b37dc73fbf9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_aae693ff6f6fc07900ed4b37dc73fbf9->m_frame.f_lineno = 274;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 275;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_aae693ff6f6fc07900ed4b37dc73fbf9->m_frame.f_lineno = 275;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_aae693ff6f6fc07900ed4b37dc73fbf9->m_frame.f_lineno = 277;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_aae693ff6f6fc07900ed4b37dc73fbf9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aae693ff6f6fc07900ed4b37dc73fbf9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aae693ff6f6fc07900ed4b37dc73fbf9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aae693ff6f6fc07900ed4b37dc73fbf9,
        type_description_1,
        par_self,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_aae693ff6f6fc07900ed4b37dc73fbf9 == cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9);
        cache_frame_aae693ff6f6fc07900ed4b37dc73fbf9 = NULL;
    }

    assertFrameObject(frame_aae693ff6f6fc07900ed4b37dc73fbf9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_294578b4b6be925d3b4a3a27f6dccd14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_294578b4b6be925d3b4a3a27f6dccd14 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_294578b4b6be925d3b4a3a27f6dccd14)) {
        Py_XDECREF(cache_frame_294578b4b6be925d3b4a3a27f6dccd14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_294578b4b6be925d3b4a3a27f6dccd14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_294578b4b6be925d3b4a3a27f6dccd14 = MAKE_FUNCTION_FRAME(tstate, codeobj_294578b4b6be925d3b4a3a27f6dccd14, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_294578b4b6be925d3b4a3a27f6dccd14->m_type_description == NULL);
    frame_294578b4b6be925d3b4a3a27f6dccd14 = cache_frame_294578b4b6be925d3b4a3a27f6dccd14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_294578b4b6be925d3b4a3a27f6dccd14);
    assert(Py_REFCNT(frame_294578b4b6be925d3b4a3a27f6dccd14) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_294578b4b6be925d3b4a3a27f6dccd14->m_frame.f_lineno = 281;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_294578b4b6be925d3b4a3a27f6dccd14->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_294578b4b6be925d3b4a3a27f6dccd14->m_frame.f_lineno = 284;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
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
        exception_tb = MAKE_TRACEBACK(frame_294578b4b6be925d3b4a3a27f6dccd14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_294578b4b6be925d3b4a3a27f6dccd14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_294578b4b6be925d3b4a3a27f6dccd14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_294578b4b6be925d3b4a3a27f6dccd14,
        type_description_1,
        par_self,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_294578b4b6be925d3b4a3a27f6dccd14 == cache_frame_294578b4b6be925d3b4a3a27f6dccd14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_294578b4b6be925d3b4a3a27f6dccd14);
        cache_frame_294578b4b6be925d3b4a3a27f6dccd14 = NULL;
    }

    assertFrameObject(frame_294578b4b6be925d3b4a3a27f6dccd14);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frameCount = python_pars[1];
    PyObject *par_frameTime = python_pars[2];
    PyObject *par_dt = python_pars[3];
    PyObject *var_datagram = NULL;
    struct Nuitka_FrameObject *frame_e901ce931a5e029ff7051fc9220b18aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e901ce931a5e029ff7051fc9220b18aa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e901ce931a5e029ff7051fc9220b18aa)) {
        Py_XDECREF(cache_frame_e901ce931a5e029ff7051fc9220b18aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e901ce931a5e029ff7051fc9220b18aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e901ce931a5e029ff7051fc9220b18aa = MAKE_FUNCTION_FRAME(tstate, codeobj_e901ce931a5e029ff7051fc9220b18aa, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e901ce931a5e029ff7051fc9220b18aa->m_type_description == NULL);
    frame_e901ce931a5e029ff7051fc9220b18aa = cache_frame_e901ce931a5e029ff7051fc9220b18aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e901ce931a5e029ff7051fc9220b18aa);
    assert(Py_REFCNT(frame_e901ce931a5e029ff7051fc9220b18aa) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 288;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_datagram == NULL);
        var_datagram = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_1 = var_datagram;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 289;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_datagram);
        tmp_expression_value_4 = var_datagram;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 291;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_1 = var_datagram;
        CHECK_OBJECT(par_frameCount);
        tmp_args_element_value_3 = par_frameCount;
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 292;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[23], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_2 = var_datagram;
        CHECK_OBJECT(par_frameTime);
        tmp_args_element_value_4 = par_frameTime;
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 293;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[27], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_datagram);
        tmp_called_instance_3 = var_datagram;
        CHECK_OBJECT(par_dt);
        tmp_args_element_value_5 = par_dt;
        frame_e901ce931a5e029ff7051fc9220b18aa->m_frame.f_lineno = 294;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[27], tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e901ce931a5e029ff7051fc9220b18aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e901ce931a5e029ff7051fc9220b18aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e901ce931a5e029ff7051fc9220b18aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e901ce931a5e029ff7051fc9220b18aa,
        type_description_1,
        par_self,
        par_frameCount,
        par_frameTime,
        par_dt,
        var_datagram
    );


    // Release cached frame if used for exception.
    if (frame_e901ce931a5e029ff7051fc9220b18aa == cache_frame_e901ce931a5e029ff7051fc9220b18aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e901ce931a5e029ff7051fc9220b18aa);
        cache_frame_e901ce931a5e029ff7051fc9220b18aa = NULL;
    }

    assertFrameObject(frame_e901ce931a5e029ff7051fc9220b18aa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_datagram);
    tmp_return_value = var_datagram;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_datagram);
    Py_DECREF(var_datagram);
    var_datagram = NULL;
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

    Py_XDECREF(var_datagram);
    var_datagram = NULL;
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
    CHECK_OBJECT(par_frameCount);
    Py_DECREF(par_frameCount);
    CHECK_OBJECT(par_frameTime);
    Py_DECREF(par_frameTime);
    CHECK_OBJECT(par_dt);
    Py_DECREF(par_dt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frameCount);
    Py_DECREF(par_frameCount);
    CHECK_OBJECT(par_frameTime);
    Py_DECREF(par_frameTime);
    CHECK_OBJECT(par_dt);
    Py_DECREF(par_dt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dgi = python_pars[1];
    PyObject *var_frameCount = NULL;
    PyObject *var_frameTime = NULL;
    PyObject *var_dt = NULL;
    struct Nuitka_FrameObject *frame_0d429d82cc45cde667d4c995ea942e8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0d429d82cc45cde667d4c995ea942e8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0d429d82cc45cde667d4c995ea942e8f)) {
        Py_XDECREF(cache_frame_0d429d82cc45cde667d4c995ea942e8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d429d82cc45cde667d4c995ea942e8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d429d82cc45cde667d4c995ea942e8f = MAKE_FUNCTION_FRAME(tstate, codeobj_0d429d82cc45cde667d4c995ea942e8f, module_direct$cluster$ClusterMsgs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d429d82cc45cde667d4c995ea942e8f->m_type_description == NULL);
    frame_0d429d82cc45cde667d4c995ea942e8f = cache_frame_0d429d82cc45cde667d4c995ea942e8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d429d82cc45cde667d4c995ea942e8f);
    assert(Py_REFCNT(frame_0d429d82cc45cde667d4c995ea942e8f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_1 = par_dgi;
        frame_0d429d82cc45cde667d4c995ea942e8f->m_frame.f_lineno = 298;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frameCount == NULL);
        var_frameCount = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_2 = par_dgi;
        frame_0d429d82cc45cde667d4c995ea942e8f->m_frame.f_lineno = 299;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frameTime == NULL);
        var_frameTime = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dgi);
        tmp_called_instance_3 = par_dgi;
        frame_0d429d82cc45cde667d4c995ea942e8f->m_frame.f_lineno = 300;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dt == NULL);
        var_dt = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[50];
        CHECK_OBJECT(var_frameTime);
        tmp_tuple_element_1 = var_frameTime;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_dt);
        tmp_tuple_element_1 = var_dt;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0d429d82cc45cde667d4c995ea942e8f->m_frame.f_lineno = 301;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d429d82cc45cde667d4c995ea942e8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d429d82cc45cde667d4c995ea942e8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d429d82cc45cde667d4c995ea942e8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d429d82cc45cde667d4c995ea942e8f,
        type_description_1,
        par_self,
        par_dgi,
        var_frameCount,
        var_frameTime,
        var_dt
    );


    // Release cached frame if used for exception.
    if (frame_0d429d82cc45cde667d4c995ea942e8f == cache_frame_0d429d82cc45cde667d4c995ea942e8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d429d82cc45cde667d4c995ea942e8f);
        cache_frame_0d429d82cc45cde667d4c995ea942e8f = NULL;
    }

    assertFrameObject(frame_0d429d82cc45cde667d4c995ea942e8f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_frameCount);
        tmp_tuple_element_2 = var_frameCount;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_frameTime);
        tmp_tuple_element_2 = var_frameTime;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_dt);
        tmp_tuple_element_2 = var_dt;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_frameCount);
    Py_DECREF(var_frameCount);
    var_frameCount = NULL;
    CHECK_OBJECT(var_frameTime);
    Py_DECREF(var_frameTime);
    var_frameTime = NULL;
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

    Py_XDECREF(var_frameCount);
    var_frameCount = NULL;
    Py_XDECREF(var_frameTime);
    var_frameTime = NULL;
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
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dgi);
    Py_DECREF(par_dgi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_b63aed9e2128fae00ecab32ac0584fa3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_49ca088a467982cde48f9652a4c4f030,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_ebcb171a20f6fe4e664e13da2ee8a0d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_120e61e2468a02a40ac6ae8560b03192,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_29b8f09a6c77fc4155911231fcae815c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_7d11d5e106d903ebf98b81006c4db53e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_9f6888d7b932c2e4433d1e3445a2dae0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_d55301a4cc8df642b5d9171510d34153,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_6a1ce556ea79f9c227f8ed14b1713257,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_aae693ff6f6fc07900ed4b37dc73fbf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__1___init__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_c14016109f6f64ab14646c7bde200168,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_294578b4b6be925d3b4a3a27f6dccd14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_e901ce931a5e029ff7051fc9220b18aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_0d429d82cc45cde667d4c995ea942e8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_d7d71c13fdfafaaf913d3b4c5005dae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__3_blockingRead() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__3_blockingRead,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_f4226b0933d2587cff6ffd2bcb862ee4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__4_readHeader() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__4_readHeader,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_c03a6534e06415238cc1f4ffc083ad9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4d8ecb1885b8d238179650f2d8689a7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_37b59e5812bb51a9d8f22cc07e5f65f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_ee8f683563def7096ce1c09c3d93f78d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_1c1a2c85ac8dd8299973e14b27a4b5cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_098e6a8ff9de454fffa85ba81a44cb07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$cluster$ClusterMsgs,
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

function_impl_code functable_direct$cluster$ClusterMsgs[] = {
    impl_direct$cluster$ClusterMsgs$$$function__1___init__,
    impl_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead,
    impl_direct$cluster$ClusterMsgs$$$function__3_blockingRead,
    impl_direct$cluster$ClusterMsgs$$$function__4_readHeader,
    impl_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone,
    impl_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram,
    impl_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram,
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

    function_impl_code *current = functable_direct$cluster$ClusterMsgs;
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

    if (offset > sizeof(functable_direct$cluster$ClusterMsgs) || offset < 0) {
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
        functable_direct$cluster$ClusterMsgs[offset],
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
        module_direct$cluster$ClusterMsgs,
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
PyObject *modulecode_direct$cluster$ClusterMsgs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.cluster.ClusterMsgs");

    // Store the module for future use.
    module_direct$cluster$ClusterMsgs = module;

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
        PRINT_STRING("direct.cluster.ClusterMsgs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.cluster.ClusterMsgs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$cluster$ClusterMsgs\n");

    moduledict_direct$cluster$ClusterMsgs = MODULE_DICT(module_direct$cluster$ClusterMsgs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$cluster$ClusterMsgs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$cluster$ClusterMsgs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[146]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$cluster$ClusterMsgs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$cluster$ClusterMsgs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$cluster$ClusterMsgs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$cluster$ClusterMsgs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$cluster$ClusterMsgs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_5935279fafee260b19b56b3a4dcdee18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        tmp_assign_source_1 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_2);
    }
    frame_5935279fafee260b19b56b3a4dcdee18 = MAKE_MODULE_FRAME(codeobj_5935279fafee260b19b56b3a4dcdee18, module_direct$cluster$ClusterMsgs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5935279fafee260b19b56b3a4dcdee18);
    assert(Py_REFCNT(frame_5935279fafee260b19b56b3a4dcdee18) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[55], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[56], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[58];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$cluster$ClusterMsgs;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$cluster$ClusterMsgs;
        tmp_fromlist_value_1 = mod_consts[59];
        tmp_level_value_1 = mod_consts[28];
        frame_5935279fafee260b19b56b3a4dcdee18->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$cluster$ClusterMsgs, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[60];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$cluster$ClusterMsgs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[61];
        tmp_level_value_2 = mod_consts[28];
        frame_5935279fafee260b19b56b3a4dcdee18->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$cluster$ClusterMsgs,
                mod_consts[22],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[62];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$cluster$ClusterMsgs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[63];
        tmp_level_value_3 = mod_consts[28];
        frame_5935279fafee260b19b56b3a4dcdee18->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$cluster$ClusterMsgs,
                mod_consts[17],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[13];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$cluster$ClusterMsgs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[28];
        frame_5935279fafee260b19b56b3a4dcdee18->m_frame.f_lineno = 9;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = mod_consts[76];
        tmp_add_expr_right_1 = mod_consts[77];
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        assert(!(tmp_assign_source_21 == NULL));
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[83], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[84], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__2_nonBlockingRead();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__3_blockingRead();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[88], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__4_readHeader();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[5], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__5_makeCamOffsetDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__6_parseCamOffsetDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__7_makeCamFrustumDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__8_parseCamFrustumDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__9_makeCamMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__10_makeNamedMovementDone();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[101], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__11_makeNamedObjectMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__12_parseCamMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[105], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__13_parseNamedMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__14_makeSelectedMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[109], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__15_parseSelectedMovementDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__16_makeCommandStringDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__17_parseCommandStringDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__18_makeSwapNowDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__19_makeSwapReadyDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__20_makeExitDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__21_makeTimeDataDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[123], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_direct$cluster$ClusterMsgs$$$function__22_parseTimeDataDatagram();

        tmp_res = PyDict_SetItem(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[82];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[127];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_5935279fafee260b19b56b3a4dcdee18->m_frame.f_lineno = 48;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48);
        locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48 = NULL;
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

        Py_DECREF(locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48);
        locals_direct$cluster$ClusterMsgs$$$class__1_ClusterMsgHandler_48 = NULL;
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
        exception_lineno = 48;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_24);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
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

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5935279fafee260b19b56b3a4dcdee18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5935279fafee260b19b56b3a4dcdee18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5935279fafee260b19b56b3a4dcdee18, exception_lineno);
    }



    assertFrameObject(frame_5935279fafee260b19b56b3a4dcdee18);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.cluster.ClusterMsgs", false);

    Py_INCREF(module_direct$cluster$ClusterMsgs);
    return module_direct$cluster$ClusterMsgs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterMsgs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$cluster$ClusterMsgs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
