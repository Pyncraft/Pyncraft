/* Generated code for Python module 'ursina.prefabs.ursfx'
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

/* The "module_ursina$prefabs$ursfx" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ursina$prefabs$ursfx;
PyDictObject *moduledict_ursina$prefabs$ursfx;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[284];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[284];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("ursina.prefabs.ursfx"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 284; i++) {
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
void checkModuleConstants_ursina$prefabs$ursfx(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 284; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7c9833a986d8542db92d810281b0c9b4;
static PyCodeObject *codeobj_fbfe81c88e9d0e98e61056d20300fe9b;
static PyCodeObject *codeobj_607b84046de7125720c3dee98a4758da;
static PyCodeObject *codeobj_037fce70aba8f282653770f249981ccb;
static PyCodeObject *codeobj_338b613fafd3c2034c3aeeae417754a2;
static PyCodeObject *codeobj_43216d2f9a55561fa7d5908f2d879a88;
static PyCodeObject *codeobj_0874d3f41d6e1180f5ca0efdf5504473;
static PyCodeObject *codeobj_04b585daf244d4b7825f5182f89899be;
static PyCodeObject *codeobj_87f32bb6feea49be672fcf68b6e8977c;
static PyCodeObject *codeobj_3ce121731c3142aa4e0b1f496db01e6c;
static PyCodeObject *codeobj_e718f376d838855e12a236ad920c77b4;
static PyCodeObject *codeobj_4c775b34f0b5dddf5d79cc6370247c41;
static PyCodeObject *codeobj_83a4e4ef162eff42ab055e549e06180c;
static PyCodeObject *codeobj_523f68857d0d2fa008eaed0f66a9d3b5;
static PyCodeObject *codeobj_084206b7eb0a24fd6ffd1af17b29e97b;
static PyCodeObject *codeobj_30411d4df8ef0959808bd531edfdff3e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[269]); CHECK_OBJECT(module_filename_obj);
    codeobj_7c9833a986d8542db92d810281b0c9b4 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[169], mod_consts[169], mod_consts[270], NULL, 1, 0, 0);
    codeobj_fbfe81c88e9d0e98e61056d20300fe9b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[271], mod_consts[271], NULL, NULL, 0, 0, 0);
    codeobj_607b84046de7125720c3dee98a4758da = MAKE_CODE_OBJECT(module_filename_obj, 54, 0, mod_consts[245], mod_consts[245], mod_consts[272], NULL, 0, 0, 0);
    codeobj_037fce70aba8f282653770f249981ccb = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[25], mod_consts[25], mod_consts[273], mod_consts[272], 1, 0, 0);
    codeobj_338b613fafd3c2034c3aeeae417754a2 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[77], mod_consts[77], mod_consts[274], mod_consts[274], 0, 0, 0);
    codeobj_43216d2f9a55561fa7d5908f2d879a88 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], mod_consts[275], NULL, 1, 0, 0);
    codeobj_0874d3f41d6e1180f5ca0efdf5504473 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], mod_consts[276], mod_consts[274], 1, 0, 0);
    codeobj_04b585daf244d4b7825f5182f89899be = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[148], mod_consts[148], mod_consts[277], NULL, 1, 0, 0);
    codeobj_87f32bb6feea49be672fcf68b6e8977c = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], mod_consts[278], mod_consts[274], 1, 0, 0);
    codeobj_3ce121731c3142aa4e0b1f496db01e6c = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[256], mod_consts[256], mod_consts[279], NULL, 2, 0, 0);
    codeobj_e718f376d838855e12a236ad920c77b4 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[126], mod_consts[126], mod_consts[280], NULL, 2, 0, 0);
    codeobj_4c775b34f0b5dddf5d79cc6370247c41 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[274], NULL, 1, 0, 0);
    codeobj_83a4e4ef162eff42ab055e549e06180c = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], mod_consts[281], NULL, 1, 0, 0);
    codeobj_523f68857d0d2fa008eaed0f66a9d3b5 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[267], mod_consts[267], mod_consts[282], NULL, 1, 0, 0);
    codeobj_084206b7eb0a24fd6ffd1af17b29e97b = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[254], mod_consts[254], mod_consts[277], NULL, 1, 0, 0);
    codeobj_30411d4df8ef0959808bd531edfdff3e = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[231], mod_consts[231], mod_consts[283], NULL, 7, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__10_toggle_gui_input();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__1_ursfx(PyObject *defaults);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__3_update();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__4_input();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__5_copy_code();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__6_paste_code(PyObject *defaults);


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__7_recipe();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__8_draw();


static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__9_play();


// The module function definitions.
static PyObject *impl_ursina$prefabs$ursfx$$$function__1_ursfx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_volume_curve = python_pars[0];
    PyObject *par_volume = python_pars[1];
    PyObject *par_wave = python_pars[2];
    PyObject *par_pitch = python_pars[3];
    PyObject *par_pitch_change = python_pars[4];
    PyObject *par_speed = python_pars[5];
    PyObject *par_pitch_curve = python_pars[6];
    PyObject *var_a = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_30411d4df8ef0959808bd531edfdff3e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_30411d4df8ef0959808bd531edfdff3e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_30411d4df8ef0959808bd531edfdff3e)) {
        Py_XDECREF(cache_frame_30411d4df8ef0959808bd531edfdff3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30411d4df8ef0959808bd531edfdff3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30411d4df8ef0959808bd531edfdff3e = MAKE_FUNCTION_FRAME(tstate, codeobj_30411d4df8ef0959808bd531edfdff3e, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30411d4df8ef0959808bd531edfdff3e->m_type_description == NULL);
    frame_30411d4df8ef0959808bd531edfdff3e = cache_frame_30411d4df8ef0959808bd531edfdff3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30411d4df8ef0959808bd531edfdff3e);
    assert(Py_REFCNT(frame_30411d4df8ef0959808bd531edfdff3e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_wave);
        tmp_kw_call_arg_value_0_1 = par_wave;
        tmp_kw_call_dict_value_0_1 = Py_True;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        CHECK_OBJECT(par_pitch);
        tmp_operand_value_1 = par_pitch;
        tmp_args_element_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_2 = par_volume_curve;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[4];
        tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume);
        tmp_mult_expr_right_1 = par_volume;
        tmp_kw_call_dict_value_2_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 41;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_args_element_value_4 = par_volume_curve;
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 44;
        tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[4];
        tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 44;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooNo";
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
                type_description_1 = "ooooooooNo";
                exception_lineno = 44;
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_expression_value_12;
        if (var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_a;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[10];
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_5 = par_volume_curve;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = mod_consts[4];
        tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[4];
        tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        if (par_volume == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_mult_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_2 = par_volume;
        tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_7 = par_volume_curve;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_2 = var_i;
        tmp_add_expr_right_2 = mod_consts[4];
        tmp_subscript_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_subscript_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[3];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_9 = par_volume_curve;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_8 = mod_consts[3];
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        if (par_speed == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_right_1 = par_speed;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_11 = par_volume_curve;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_9 = var_i;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_9);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_10 = mod_consts[3];
        tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_10, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        if (par_speed == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_right_2 = par_speed;
        tmp_kw_call_dict_value_1_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[13]);
        if (tmp_kw_call_dict_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);

            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 45;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_2_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooNo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;
        type_description_1 = "ooooooooNo";
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_kw_call_dict_value_1_3;
        if (var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_a;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[9]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[15];
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[2];
        CHECK_OBJECT(par_pitch);
        tmp_operand_value_2 = par_pitch;
        tmp_sub_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pitch_change);
        tmp_sub_expr_right_3 = par_pitch_change;
        tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_arg_value_1_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_15 = par_volume_curve;
        if (var_i == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_4 = var_i;
        tmp_sub_expr_right_4 = mod_consts[4];
        tmp_subscript_value_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_subscript_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[3];
        tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        if (par_speed == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_3 = par_speed;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pitch_curve);
        tmp_kw_call_dict_value_1_3 = par_pitch_curve;
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 47;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_subscript_value_14;
        if (var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_a;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[18]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[19]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        if (var_a == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_a;
        tmp_kw_call_arg_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[21]);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_20 = par_volume_curve;
        tmp_subscript_value_13 = mod_consts[22];
        tmp_expression_value_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_13, 4);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[3];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_14, 0);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        if (par_speed == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_arg_value_0_4);
            Py_DECREF(tmp_truediv_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_4 = par_speed;
        tmp_kw_call_dict_value_0_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 48;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 48;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_subscript_value_16;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        if (var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = var_a;
        tmp_kw_call_arg_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[21]);
        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_volume_curve);
        tmp_expression_value_23 = par_volume_curve;
        tmp_subscript_value_15 = mod_consts[22];
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_15, 4);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[3];
        tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_16, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        if (par_speed == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_5 = par_speed;
        tmp_kw_call_dict_value_0_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_5);

            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        frame_30411d4df8ef0959808bd531edfdff3e->m_frame.f_lineno = 50;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_5);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (var_a == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 51;
        type_description_1 = "ooooooooNo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_a;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30411d4df8ef0959808bd531edfdff3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30411d4df8ef0959808bd531edfdff3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30411d4df8ef0959808bd531edfdff3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30411d4df8ef0959808bd531edfdff3e,
        type_description_1,
        par_volume_curve,
        par_volume,
        par_wave,
        par_pitch,
        par_pitch_change,
        par_speed,
        par_pitch_curve,
        var_a,
        NULL,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_30411d4df8ef0959808bd531edfdff3e == cache_frame_30411d4df8ef0959808bd531edfdff3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30411d4df8ef0959808bd531edfdff3e);
        cache_frame_30411d4df8ef0959808bd531edfdff3e = NULL;
    }

    assertFrameObject(frame_30411d4df8ef0959808bd531edfdff3e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_a);
    var_a = NULL;
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

    Py_XDECREF(var_a);
    var_a = NULL;
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
    CHECK_OBJECT(par_volume_curve);
    Py_DECREF(par_volume_curve);
    CHECK_OBJECT(par_volume);
    Py_DECREF(par_volume);
    CHECK_OBJECT(par_wave);
    Py_DECREF(par_wave);
    CHECK_OBJECT(par_pitch);
    Py_DECREF(par_pitch);
    CHECK_OBJECT(par_pitch_change);
    Py_DECREF(par_pitch_change);
    CHECK_OBJECT(par_speed);
    Py_DECREF(par_speed);
    CHECK_OBJECT(par_pitch_curve);
    Py_DECREF(par_pitch_curve);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_volume_curve);
    Py_DECREF(par_volume_curve);
    CHECK_OBJECT(par_volume);
    Py_DECREF(par_volume);
    CHECK_OBJECT(par_wave);
    Py_DECREF(par_wave);
    CHECK_OBJECT(par_pitch);
    Py_DECREF(par_pitch);
    CHECK_OBJECT(par_pitch_change);
    Py_DECREF(par_pitch_change);
    CHECK_OBJECT(par_speed);
    Py_DECREF(par_speed);
    CHECK_OBJECT(par_pitch_curve);
    Py_DECREF(par_pitch_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_default_positions = NULL;
    PyObject *var_e = NULL;
    PyObject *var_coin_sound = NULL;
    PyObject *var_i = NULL;
    PyObject *var_knob = NULL;
    PyObject *var_drag = NULL;
    PyObject *var_drop = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_037fce70aba8f282653770f249981ccb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_037fce70aba8f282653770f249981ccb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_037fce70aba8f282653770f249981ccb)) {
        Py_XDECREF(cache_frame_037fce70aba8f282653770f249981ccb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_037fce70aba8f282653770f249981ccb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_037fce70aba8f282653770f249981ccb = MAKE_FUNCTION_FRAME(tstate, codeobj_037fce70aba8f282653770f249981ccb, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_037fce70aba8f282653770f249981ccb->m_type_description == NULL);
    frame_037fce70aba8f282653770f249981ccb = cache_frame_037fce70aba8f282653770f249981ccb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_037fce70aba8f282653770f249981ccb);
    assert(Py_REFCNT(frame_037fce70aba8f282653770f249981ccb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_object_arg_value_1 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_ursina$prefabs$ursfx, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[26];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[28]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[29];
        tmp_dict_value_1 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__7_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST5(mod_consts[31]);
        assert(var_default_positions == NULL);
        var_default_positions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_1 = mod_consts[33];
        tmp_kw_call_value_2_1 = mod_consts[3];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 59;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[34]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[36];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[39];
        tmp_kw_call_value_2_2 = mod_consts[40];
        tmp_kw_call_value_3_1 = mod_consts[41];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[43]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[45], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[35]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = mod_consts[47];
        tmp_kw_call_value_2_3 = Py_True;
        tmp_kw_call_value_3_2 = mod_consts[48];
        tmp_kw_call_value_4_2 = mod_consts[49];
        tmp_kw_call_value_5_1 = mod_consts[4];
        tmp_kw_call_value_6_1 = mod_consts[36];
        tmp_kw_call_value_7_1 = mod_consts[41];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[50]);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 63;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_3, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[51]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        Py_DECREF(tmp_kw_call_value_8_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[52], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[35]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = mod_consts[54];
        tmp_kw_call_value_2_4 = mod_consts[55];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_4};
            tmp_assattr_value_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_5, mod_consts[56], kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_5 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[58], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[58]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[59]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "cooooooooc";
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
                type_description_1 = "cooooooooc";
                exception_lineno = 66;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_4;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_11;
        tmp_assattr_value_6 = mod_consts[60];
        CHECK_OBJECT(var_e);
        tmp_expression_value_11 = var_e;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[61]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "cooooooooc";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[62], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "cooooooooc";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;
        type_description_1 = "cooooooooc";
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
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_8_2;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[35]);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = mod_consts[63];
        tmp_kw_call_value_2_5 = mod_consts[48];
        tmp_kw_call_value_3_3 = mod_consts[64];
        tmp_kw_call_value_4_3 = mod_consts[65];
        tmp_kw_call_value_5_2 = mod_consts[3];
        tmp_kw_call_value_6_2 = mod_consts[4];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_13 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_7_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[50]);
        if (tmp_kw_call_value_7_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_6);

            exception_lineno = 69;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_2 = mod_consts[15];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 69;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_5, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2};

            tmp_assattr_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_kw_call_value_0_6);
        Py_DECREF(tmp_kw_call_value_7_2);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_7 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[67], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_kw_call_value_7_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_8_3;
        PyObject *tmp_assattr_target_8;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[35]);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = mod_consts[68];
        tmp_kw_call_value_2_6 = mod_consts[48];
        tmp_kw_call_value_3_4 = mod_consts[69];
        tmp_kw_call_value_4_4 = mod_consts[70];
        tmp_kw_call_value_5_3 = mod_consts[3];
        tmp_kw_call_value_6_3 = mod_consts[4];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_15 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_7_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[50]);
        if (tmp_kw_call_value_7_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_7);

            exception_lineno = 70;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_8_3 = mod_consts[71];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 70;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_6, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3};

            tmp_assattr_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_kw_call_value_0_7);
        Py_DECREF(tmp_kw_call_value_7_3);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_8 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[72], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_5;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_7_4;
        PyObject *tmp_kw_call_value_8_4;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_16 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[35]);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = mod_consts[48];
        tmp_kw_call_value_2_7 = mod_consts[60];
        tmp_kw_call_value_3_5 = mod_consts[22];
        tmp_kw_call_value_4_5 = mod_consts[4];
        tmp_kw_call_value_5_4 = mod_consts[73];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_17 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_6_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[50]);
        if (tmp_kw_call_value_6_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 71;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_7_4 = mod_consts[74];
        tmp_kw_call_value_8_4 = mod_consts[11];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 71;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_7, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4};

            tmp_assattr_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_kw_call_value_0_8);
        Py_DECREF(tmp_kw_call_value_6_4);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_9 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[76], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound(tmp_closure_1);

        assert(var_coin_sound == NULL);
        var_coin_sound = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_kw_call_value_4_6;
        PyObject *tmp_kw_call_value_5_5;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[80];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_18 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[35]);
        if (tmp_kw_call_value_1_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_8 = mod_consts[81];
        tmp_kw_call_value_3_6 = mod_consts[82];
        tmp_kw_call_value_4_6 = mod_consts[83];
        CHECK_OBJECT(var_coin_sound);
        tmp_kw_call_value_5_5 = var_coin_sound;
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 77;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_8, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_5};

            tmp_assattr_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_kw_call_value_1_9);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_10 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[85], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_10;
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_3;
            }
            frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 79;
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[86]);

            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_3;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "cooooooooc";
                    exception_lineno = 79;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_9;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_11;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_kw_call_value_1_10;
            PyObject *tmp_kw_call_value_2_9;
            PyObject *tmp_kw_call_value_3_7;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_kw_call_value_4_7;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_kw_call_value_5_6;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_kw_call_value_6_5;
            PyObject *tmp_kw_call_value_7_5;
            PyObject *tmp_kw_call_value_8_5;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            if (Nuitka_Cell_GET(par_self) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }

            tmp_expression_value_19 = Nuitka_Cell_GET(par_self);
            tmp_kw_call_value_0_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[38]);
            if (tmp_kw_call_value_0_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            tmp_kw_call_value_1_10 = mod_consts[49];
            tmp_kw_call_value_2_9 = mod_consts[89];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            tmp_kw_call_value_3_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[90]);
            if (tmp_kw_call_value_3_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_3_7);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            tmp_kw_call_value_4_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[91]);
            if (tmp_kw_call_value_4_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_3_7);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(var_default_positions);
            tmp_expression_value_22 = var_default_positions;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_1 = outline_0_var_i;
            tmp_kw_call_value_5_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_1);
            if (tmp_kw_call_value_5_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_3_7);
                Py_DECREF(tmp_kw_call_value_4_7);

                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(outline_0_var_i);
            tmp_kw_call_value_6_5 = outline_0_var_i;
            tmp_kw_call_value_7_5 = mod_consts[3];
            tmp_kw_call_value_8_5 = mod_consts[4];
            frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 79;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_9, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_6, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5};

                tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[92]);
            }

            Py_DECREF(tmp_kw_call_value_0_10);
            Py_DECREF(tmp_kw_call_value_3_7);
            Py_DECREF(tmp_kw_call_value_4_7);
            Py_DECREF(tmp_kw_call_value_5_6);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "cooooooooc";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "cooooooooc";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_11 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_11);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
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

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
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
        exception_lineno = 79;
        goto frame_exception_exit_1;
        outline_result_1:;
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 79;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[93], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_2;
        tmp_assattr_value_12 = mod_consts[94];
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 80;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[93]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[3];
        tmp_assattr_target_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[95], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_assattr_target_13;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[38]);
        if (tmp_kw_call_value_0_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 82;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[98]);

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_15;
            PyList_SET_ITEM(tmp_kw_call_value_0_12, 0, tmp_list_element_1);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "cooooooooc";
                goto list_build_exception_1;
            }
            frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 82;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_15, mod_consts[99]);

            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "cooooooooc";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_0_12, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_0_11);
        Py_DECREF(tmp_kw_call_value_0_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_1_12 = mod_consts[100];
        tmp_kw_call_value_2_10 = mod_consts[101];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_10};

            tmp_kw_call_value_1_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, kw_values, mod_consts[102]);
        }

        Py_DECREF(tmp_kw_call_value_0_12);
        if (tmp_kw_call_value_1_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_11 = mod_consts[41];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);
            Py_DECREF(tmp_kw_call_value_1_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[90]);
        if (tmp_kw_call_value_3_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_11);
            Py_DECREF(tmp_kw_call_value_1_11);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_8};

            tmp_assattr_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_kw_call_value_0_11);
        Py_DECREF(tmp_kw_call_value_1_11);
        Py_DECREF(tmp_kw_call_value_3_8);
        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[100], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_assattr_target_14;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[35]);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_13 = mod_consts[104];
        tmp_kw_call_value_2_12 = mod_consts[40];
        tmp_kw_call_value_3_9 = mod_consts[105];
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_13);

            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[106]);
        if (tmp_kw_call_value_4_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_13);

            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_7 = mod_consts[4];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 83;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_12, tmp_kw_call_value_3_9, tmp_kw_call_value_4_8, tmp_kw_call_value_5_7};

            tmp_assattr_value_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_16, kw_values, mod_consts[107]);
        }

        Py_DECREF(tmp_kw_call_value_0_13);
        Py_DECREF(tmp_kw_call_value_4_8);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[108], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_value_2_13;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_5_8;
        PyObject *tmp_kw_call_value_6_6;
        PyObject *tmp_kw_call_value_7_6;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_assattr_target_15;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = mod_consts[109];
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[35]);
        if (tmp_kw_call_value_1_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_13 = mod_consts[89];
        tmp_kw_call_value_3_10 = mod_consts[110];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[91]);
        if (tmp_kw_call_value_4_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_8 = mod_consts[40];
        tmp_kw_call_value_6_6 = mod_consts[111];
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_4_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_7_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[50]);
        if (tmp_kw_call_value_7_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_4_9);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 85;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_13, tmp_kw_call_value_3_10, tmp_kw_call_value_4_9, tmp_kw_call_value_5_8, tmp_kw_call_value_6_6, tmp_kw_call_value_7_6};

            tmp_assattr_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, kw_values, mod_consts[112]);
        }

        Py_DECREF(tmp_kw_call_value_1_14);
        Py_DECREF(tmp_kw_call_value_4_9);
        Py_DECREF(tmp_kw_call_value_7_6);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[113], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_15;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_value_2_14;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_4_10;
        PyObject *tmp_kw_call_value_5_9;
        PyObject *tmp_kw_call_value_6_7;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_16;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_15 = mod_consts[114];
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[35]);
        if (tmp_kw_call_value_1_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_14 = mod_consts[81];
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[115]);
        if (tmp_kw_call_value_3_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_10 = mod_consts[40];
        tmp_kw_call_value_5_9 = mod_consts[116];
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_3_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_6_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[117]);
        if (tmp_kw_call_value_6_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_3_11);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 86;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_14, tmp_kw_call_value_3_11, tmp_kw_call_value_4_10, tmp_kw_call_value_5_9, tmp_kw_call_value_6_7};

            tmp_assattr_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_kw_call_value_1_15);
        Py_DECREF(tmp_kw_call_value_3_11);
        Py_DECREF(tmp_kw_call_value_6_7);
        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[119], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[119]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[61]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[120]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_imult_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_imult_expr_right_1 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_FLOAT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto try_except_handler_5;
        }
        tmp_assign_source_11 = tmp_imult_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_17 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_39 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[119]);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto try_except_handler_5;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[61]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto try_except_handler_5;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[120], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cooooooooc";
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_16;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_2_15;
        PyObject *tmp_kw_call_value_3_12;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_value_4_11;
        PyObject *tmp_kw_call_value_5_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_kw_call_value_6_8;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = mod_consts[121];
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[35]);
        if (tmp_kw_call_value_1_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_15 = mod_consts[81];
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[115]);
        if (tmp_kw_call_value_3_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_11 = mod_consts[40];
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[119]);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[122]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[119]);
        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[123]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[124];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_kw_call_value_5_10, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[125];
        PyTuple_SET_ITEM0(tmp_kw_call_value_5_10, 1, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_kw_call_value_5_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_6_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[126]);
        if (tmp_kw_call_value_6_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_3_12);
            Py_DECREF(tmp_kw_call_value_5_10);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 89;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_15, tmp_kw_call_value_3_12, tmp_kw_call_value_4_11, tmp_kw_call_value_5_10, tmp_kw_call_value_6_8};

            tmp_assattr_value_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, kw_values, mod_consts[118]);
        }

        Py_DECREF(tmp_kw_call_value_1_16);
        Py_DECREF(tmp_kw_call_value_3_12);
        Py_DECREF(tmp_kw_call_value_5_10);
        Py_DECREF(tmp_kw_call_value_6_8);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_18 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[127], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_49 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[127]);
        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[61]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[120]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_imult_expr_left_2;
        PyObject *tmp_imult_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_imult_expr_left_2 = tmp_inplace_assign_2__value;
        tmp_imult_expr_right_2 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_FLOAT(&tmp_imult_expr_left_2, tmp_imult_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto try_except_handler_6;
        }
        tmp_assign_source_13 = tmp_imult_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_13;

    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_19 = tmp_inplace_assign_2__value;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto try_except_handler_6;
        }

        tmp_expression_value_51 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[127]);
        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto try_except_handler_6;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[61]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[120], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cooooooooc";
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_20;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_kw_call_value_1_17;
        PyObject *tmp_kw_call_value_2_16;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_assattr_target_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_0_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[35]);
        if (tmp_kw_call_value_0_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_17 = mod_consts[129];
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_0_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_54 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[127]);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[122]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[127]);
        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[123]);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[124];
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_17);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_kw_call_value_2_16, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[130];
        PyTuple_SET_ITEM0(tmp_kw_call_value_2_16, 1, tmp_tuple_element_2);
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 92;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_16};
            tmp_assattr_value_20 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_20, mod_consts[131], kw_values, mod_consts[132]);
        }

        Py_DECREF(tmp_kw_call_value_0_17);
        Py_DECREF(tmp_kw_call_value_2_16);
        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_20 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[133], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_58;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 94;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = Nuitka_Cell_GET(par_self);
        tmp_assattr_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[50]);
        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 94;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_58 = Nuitka_Cell_GET(par_self);
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[58]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 94;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[134], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_called_value_22;
        PyObject *tmp_kw_call_value_1_18;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_kw_call_value_2_17;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_3_13;
        PyObject *tmp_kw_call_value_4_12;
        PyObject *tmp_kw_call_value_5_11;
        PyObject *tmp_kw_call_value_6_9;
        PyObject *tmp_assattr_target_22;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 95;
        tmp_kw_call_value_0_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[137]);
        if (tmp_kw_call_value_0_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_kw_call_value_0_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = Nuitka_Cell_GET(par_self);
        tmp_kw_call_value_1_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[35]);
        if (tmp_kw_call_value_1_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_18);

            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_18);
            Py_DECREF(tmp_kw_call_value_1_18);

            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[43]);
        if (tmp_kw_call_value_2_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_18);
            Py_DECREF(tmp_kw_call_value_1_18);

            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_13 = mod_consts[4];
        tmp_kw_call_value_4_12 = mod_consts[40];
        tmp_kw_call_value_5_11 = mod_consts[138];
        tmp_kw_call_value_6_9 = mod_consts[139];
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 95;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_17, tmp_kw_call_value_3_13, tmp_kw_call_value_4_12, tmp_kw_call_value_5_11, tmp_kw_call_value_6_9};

            tmp_assattr_value_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, kw_values, mod_consts[140]);
        }

        Py_DECREF(tmp_kw_call_value_0_18);
        Py_DECREF(tmp_kw_call_value_1_18);
        Py_DECREF(tmp_kw_call_value_2_17);
        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_assattr_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_22 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[141], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_61;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_61 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[93]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 97;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooc";
                exception_lineno = 97;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cooooooooc";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "cooooooooc";
            exception_lineno = 97;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "cooooooooc";
            exception_lineno = 97;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "cooooooooc";
                    exception_lineno = 97;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[143];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "cooooooooc";
            exception_lineno = 97;
            goto try_except_handler_9;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_19;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_knob;
            var_knob = tmp_assign_source_20;
            Py_INCREF(var_knob);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_3;
        struct Nuitka_CellObject *tmp_closure_2[1];
        CHECK_OBJECT(var_knob);
        tmp_tuple_element_3 = var_knob;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_3);

        tmp_closure_2[0] = par_self;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_21 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag(tmp_defaults_1, tmp_closure_2);

        {
            PyObject *old = var_drag;
            var_drag = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        CHECK_OBJECT(var_drag);
        tmp_assattr_value_23 = var_drag;
        CHECK_OBJECT(var_knob);
        tmp_assattr_target_23 = var_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[144], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "cooooooooc";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_4;
        struct Nuitka_CellObject *tmp_closure_3[1];
        CHECK_OBJECT(var_knob);
        tmp_tuple_element_4 = var_knob;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_4);

        tmp_closure_3[0] = par_self;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_22 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop(tmp_defaults_2, tmp_closure_3);

        {
            PyObject *old = var_drop;
            var_drop = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        CHECK_OBJECT(var_drop);
        tmp_assattr_value_24 = var_drop;
        CHECK_OBJECT(var_knob);
        tmp_assattr_target_24 = var_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[146], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "cooooooooc";
            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;
        type_description_1 = "cooooooooc";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(par_self);
        frame_037fce70aba8f282653770f249981ccb->m_frame.f_lineno = 122;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[148]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "cooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_037fce70aba8f282653770f249981ccb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_037fce70aba8f282653770f249981ccb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_037fce70aba8f282653770f249981ccb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_037fce70aba8f282653770f249981ccb,
        type_description_1,
        par_self,
        par_kwargs,
        var_default_positions,
        var_e,
        var_coin_sound,
        var_i,
        var_knob,
        var_drag,
        var_drop,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_037fce70aba8f282653770f249981ccb == cache_frame_037fce70aba8f282653770f249981ccb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_037fce70aba8f282653770f249981ccb);
        cache_frame_037fce70aba8f282653770f249981ccb = NULL;
    }

    assertFrameObject(frame_037fce70aba8f282653770f249981ccb);

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
    CHECK_OBJECT(var_default_positions);
    Py_DECREF(var_default_positions);
    var_default_positions = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    CHECK_OBJECT(var_coin_sound);
    Py_DECREF(var_coin_sound);
    var_coin_sound = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_knob);
    var_knob = NULL;
    Py_XDECREF(var_drag);
    var_drag = NULL;
    Py_XDECREF(var_drop);
    var_drop = NULL;
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

    Py_XDECREF(var_default_positions);
    var_default_positions = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_coin_sound);
    var_coin_sound = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_knob);
    var_knob = NULL;
    Py_XDECREF(var_drag);
    var_drag = NULL;
    Py_XDECREF(var_drop);
    var_drop = NULL;
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


static PyObject *impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_338b613fafd3c2034c3aeeae417754a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_338b613fafd3c2034c3aeeae417754a2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_338b613fafd3c2034c3aeeae417754a2)) {
        Py_XDECREF(cache_frame_338b613fafd3c2034c3aeeae417754a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_338b613fafd3c2034c3aeeae417754a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_338b613fafd3c2034c3aeeae417754a2 = MAKE_FUNCTION_FRAME(tstate, codeobj_338b613fafd3c2034c3aeeae417754a2, module_ursina$prefabs$ursfx, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_338b613fafd3c2034c3aeeae417754a2->m_type_description == NULL);
    frame_338b613fafd3c2034c3aeeae417754a2 = cache_frame_338b613fafd3c2034c3aeeae417754a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_338b613fafd3c2034c3aeeae417754a2);
    assert(Py_REFCNT(frame_338b613fafd3c2034c3aeeae417754a2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 74;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[126]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[149];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 74;
            tmp_format_value_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[151],
                &PyTuple_GET_ITEM(mod_consts[152], 0)
            );

            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[153];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[154];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 74;
            tmp_format_value_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[151],
                &PyTuple_GET_ITEM(mod_consts[155], 0)
            );

            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[153];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[156];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 74;
            tmp_format_value_3 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[157],
                &PyTuple_GET_ITEM(mod_consts[158], 0)
            );

            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[153];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[159];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 74;
            tmp_format_value_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[151],
                &PyTuple_GET_ITEM(mod_consts[160], 0)
            );

            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[153];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[161];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[153], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 75;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_338b613fafd3c2034c3aeeae417754a2->m_frame.f_lineno = 75;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[50]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_338b613fafd3c2034c3aeeae417754a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_338b613fafd3c2034c3aeeae417754a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_338b613fafd3c2034c3aeeae417754a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_338b613fafd3c2034c3aeeae417754a2,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_338b613fafd3c2034c3aeeae417754a2 == cache_frame_338b613fafd3c2034c3aeeae417754a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_338b613fafd3c2034c3aeeae417754a2);
        cache_frame_338b613fafd3c2034c3aeeae417754a2 = NULL;
    }

    assertFrameObject(frame_338b613fafd3c2034c3aeeae417754a2);

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


static PyObject *impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_this_knob = python_pars[0];
    struct Nuitka_FrameObject *frame_0874d3f41d6e1180f5ca0efdf5504473;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0874d3f41d6e1180f5ca0efdf5504473 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0874d3f41d6e1180f5ca0efdf5504473)) {
        Py_XDECREF(cache_frame_0874d3f41d6e1180f5ca0efdf5504473);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0874d3f41d6e1180f5ca0efdf5504473 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0874d3f41d6e1180f5ca0efdf5504473 = MAKE_FUNCTION_FRAME(tstate, codeobj_0874d3f41d6e1180f5ca0efdf5504473, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0874d3f41d6e1180f5ca0efdf5504473->m_type_description == NULL);
    frame_0874d3f41d6e1180f5ca0efdf5504473 = cache_frame_0874d3f41d6e1180f5ca0efdf5504473;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0874d3f41d6e1180f5ca0efdf5504473);
    assert(Py_REFCNT(frame_0874d3f41d6e1180f5ca0efdf5504473) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_this_knob);
        tmp_expression_value_1 = par_this_knob;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oc";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[3];
        CHECK_OBJECT(par_this_knob);
        tmp_assattr_target_1 = par_this_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[162], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[93]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_this_knob);
        tmp_expression_value_5 = par_this_knob;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[16]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[4];
        tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[122]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0874d3f41d6e1180f5ca0efdf5504473->m_frame.f_lineno = 102;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[93]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_this_knob);
        tmp_expression_value_9 = par_this_knob;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[16]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[4];
        tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[122]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[41];
        tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_this_knob);
        tmp_assattr_target_2 = par_this_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[162], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_this_knob);
        tmp_expression_value_10 = par_this_knob;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[16]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[22];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oc";
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
        tmp_assattr_value_3 = mod_consts[101];
        CHECK_OBJECT(par_this_knob);
        tmp_assattr_target_3 = par_this_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[164], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[93]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_this_knob);
        tmp_expression_value_14 = par_this_knob;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[16]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_12);

            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[4];
        tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_12);

            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_12);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[122]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_3 = mod_consts[41];
        tmp_assattr_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_this_knob);
        tmp_assattr_target_4 = par_this_knob;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[164], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0874d3f41d6e1180f5ca0efdf5504473, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0874d3f41d6e1180f5ca0efdf5504473->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0874d3f41d6e1180f5ca0efdf5504473, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0874d3f41d6e1180f5ca0efdf5504473,
        type_description_1,
        par_this_knob,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0874d3f41d6e1180f5ca0efdf5504473 == cache_frame_0874d3f41d6e1180f5ca0efdf5504473) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0874d3f41d6e1180f5ca0efdf5504473);
        cache_frame_0874d3f41d6e1180f5ca0efdf5504473 = NULL;
    }

    assertFrameObject(frame_0874d3f41d6e1180f5ca0efdf5504473);

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
    CHECK_OBJECT(par_this_knob);
    Py_DECREF(par_this_knob);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_this_knob);
    Py_DECREF(par_this_knob);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_this_knob = python_pars[0];
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_87f32bb6feea49be672fcf68b6e8977c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_87f32bb6feea49be672fcf68b6e8977c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_87f32bb6feea49be672fcf68b6e8977c)) {
        Py_XDECREF(cache_frame_87f32bb6feea49be672fcf68b6e8977c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87f32bb6feea49be672fcf68b6e8977c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87f32bb6feea49be672fcf68b6e8977c = MAKE_FUNCTION_FRAME(tstate, codeobj_87f32bb6feea49be672fcf68b6e8977c, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87f32bb6feea49be672fcf68b6e8977c->m_type_description == NULL);
    frame_87f32bb6feea49be672fcf68b6e8977c = cache_frame_87f32bb6feea49be672fcf68b6e8977c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_87f32bb6feea49be672fcf68b6e8977c);
    assert(Py_REFCNT(frame_87f32bb6feea49be672fcf68b6e8977c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_87f32bb6feea49be672fcf68b6e8977c->m_frame.f_lineno = 113;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[50]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[22];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 4);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[122]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[108]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 116;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[93]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooc";
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
                type_description_1 = "ooc";
                exception_lineno = 116;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_3;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[3];
        CHECK_OBJECT(var_e);
        tmp_assattr_target_2 = var_e;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[162], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[101];
        CHECK_OBJECT(var_e);
        tmp_assattr_target_3 = var_e;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[164], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 116;
        type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_87f32bb6feea49be672fcf68b6e8977c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87f32bb6feea49be672fcf68b6e8977c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87f32bb6feea49be672fcf68b6e8977c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87f32bb6feea49be672fcf68b6e8977c,
        type_description_1,
        par_this_knob,
        var_e,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_87f32bb6feea49be672fcf68b6e8977c == cache_frame_87f32bb6feea49be672fcf68b6e8977c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87f32bb6feea49be672fcf68b6e8977c);
        cache_frame_87f32bb6feea49be672fcf68b6e8977c = NULL;
    }

    assertFrameObject(frame_87f32bb6feea49be672fcf68b6e8977c);

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
    Py_XDECREF(var_e);
    var_e = NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;
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
    CHECK_OBJECT(par_this_knob);
    Py_DECREF(par_this_knob);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_this_knob);
    Py_DECREF(par_this_knob);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__3_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_084206b7eb0a24fd6ffd1af17b29e97b;
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
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_084206b7eb0a24fd6ffd1af17b29e97b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_084206b7eb0a24fd6ffd1af17b29e97b)) {
        Py_XDECREF(cache_frame_084206b7eb0a24fd6ffd1af17b29e97b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_084206b7eb0a24fd6ffd1af17b29e97b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_084206b7eb0a24fd6ffd1af17b29e97b = MAKE_FUNCTION_FRAME(tstate, codeobj_084206b7eb0a24fd6ffd1af17b29e97b, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_084206b7eb0a24fd6ffd1af17b29e97b->m_type_description == NULL);
    frame_084206b7eb0a24fd6ffd1af17b29e97b = cache_frame_084206b7eb0a24fd6ffd1af17b29e97b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_084206b7eb0a24fd6ffd1af17b29e97b);
    assert(Py_REFCNT(frame_084206b7eb0a24fd6ffd1af17b29e97b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[93]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
                exception_lineno = 126;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_3;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[165];
        CHECK_OBJECT(var_e);
        tmp_assattr_target_1 = var_e;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[62], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 126;
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
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[93]);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_value_1 = MAKE_GENERATOR_ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_084206b7eb0a24fd6ffd1af17b29e97b->m_frame.f_lineno = 128;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_084206b7eb0a24fd6ffd1af17b29e97b->m_frame.f_lineno = 131;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[148]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_084206b7eb0a24fd6ffd1af17b29e97b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_084206b7eb0a24fd6ffd1af17b29e97b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_084206b7eb0a24fd6ffd1af17b29e97b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_084206b7eb0a24fd6ffd1af17b29e97b,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_084206b7eb0a24fd6ffd1af17b29e97b == cache_frame_084206b7eb0a24fd6ffd1af17b29e97b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_084206b7eb0a24fd6ffd1af17b29e97b);
        cache_frame_084206b7eb0a24fd6ffd1af17b29e97b = NULL;
    }

    assertFrameObject(frame_084206b7eb0a24fd6ffd1af17b29e97b);

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
    Py_XDECREF(var_e);
    var_e = NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;
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



#if 1
struct ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_locals {
    PyObject *var_e;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_locals *generator_heap = (struct ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_e = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_7c9833a986d8542db92d810281b0c9b4, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 128;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_e;
            generator_heap->var_e = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_e);
        tmp_expression_value_2 = generator_heap->var_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[168]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 128;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 128;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_e
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_context,
        module_ursina$prefabs$ursfx,
        mod_consts[169],
#if PYTHON_VERSION >= 0x350
        mod_consts[170],
#endif
        codeobj_7c9833a986d8542db92d810281b0c9b4,
        closure,
        1,
#if 1
        sizeof(struct ursina$prefabs$ursfx$$$function__3_update$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__4_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_3ce121731c3142aa4e0b1f496db01e6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3ce121731c3142aa4e0b1f496db01e6c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ce121731c3142aa4e0b1f496db01e6c)) {
        Py_XDECREF(cache_frame_3ce121731c3142aa4e0b1f496db01e6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ce121731c3142aa4e0b1f496db01e6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ce121731c3142aa4e0b1f496db01e6c = MAKE_FUNCTION_FRAME(tstate, codeobj_3ce121731c3142aa4e0b1f496db01e6c, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ce121731c3142aa4e0b1f496db01e6c->m_type_description == NULL);
    frame_3ce121731c3142aa4e0b1f496db01e6c = cache_frame_3ce121731c3142aa4e0b1f496db01e6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3ce121731c3142aa4e0b1f496db01e6c);
    assert(Py_REFCNT(frame_3ce121731c3142aa4e0b1f496db01e6c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[172];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[173];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[174]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_3ce121731c3142aa4e0b1f496db01e6c->m_frame.f_lineno = 136;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[126]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_3ce121731c3142aa4e0b1f496db01e6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ce121731c3142aa4e0b1f496db01e6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ce121731c3142aa4e0b1f496db01e6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ce121731c3142aa4e0b1f496db01e6c,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_3ce121731c3142aa4e0b1f496db01e6c == cache_frame_3ce121731c3142aa4e0b1f496db01e6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ce121731c3142aa4e0b1f496db01e6c);
        cache_frame_3ce121731c3142aa4e0b1f496db01e6c = NULL;
    }

    assertFrameObject(frame_3ce121731c3142aa4e0b1f496db01e6c);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__5_copy_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_pyperclip = NULL;
    struct Nuitka_FrameObject *frame_43216d2f9a55561fa7d5908f2d879a88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43216d2f9a55561fa7d5908f2d879a88 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_43216d2f9a55561fa7d5908f2d879a88)) {
        Py_XDECREF(cache_frame_43216d2f9a55561fa7d5908f2d879a88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43216d2f9a55561fa7d5908f2d879a88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43216d2f9a55561fa7d5908f2d879a88 = MAKE_FUNCTION_FRAME(tstate, codeobj_43216d2f9a55561fa7d5908f2d879a88, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43216d2f9a55561fa7d5908f2d879a88->m_type_description == NULL);
    frame_43216d2f9a55561fa7d5908f2d879a88 = cache_frame_43216d2f9a55561fa7d5908f2d879a88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_43216d2f9a55561fa7d5908f2d879a88);
    assert(Py_REFCNT(frame_43216d2f9a55561fa7d5908f2d879a88) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[175]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_43216d2f9a55561fa7d5908f2d879a88->m_frame.f_lineno = 140;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[176];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_ursina$prefabs$ursfx;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_43216d2f9a55561fa7d5908f2d879a88->m_frame.f_lineno = 141;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_pyperclip == NULL);
        var_pyperclip = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_pyperclip);
        tmp_expression_value_2 = var_pyperclip;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[114]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[175]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_43216d2f9a55561fa7d5908f2d879a88->m_frame.f_lineno = 142;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_43216d2f9a55561fa7d5908f2d879a88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43216d2f9a55561fa7d5908f2d879a88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43216d2f9a55561fa7d5908f2d879a88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43216d2f9a55561fa7d5908f2d879a88,
        type_description_1,
        par_self,
        var_pyperclip
    );


    // Release cached frame if used for exception.
    if (frame_43216d2f9a55561fa7d5908f2d879a88 == cache_frame_43216d2f9a55561fa7d5908f2d879a88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43216d2f9a55561fa7d5908f2d879a88);
        cache_frame_43216d2f9a55561fa7d5908f2d879a88 = NULL;
    }

    assertFrameObject(frame_43216d2f9a55561fa7d5908f2d879a88);

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
    CHECK_OBJECT(var_pyperclip);
    Py_DECREF(var_pyperclip);
    var_pyperclip = NULL;
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

    Py_XDECREF(var_pyperclip);
    var_pyperclip = NULL;
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


static PyObject *impl_ursina$prefabs$ursfx$$$function__6_paste_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_code = python_pars[1];
    PyObject *var_pyperclip = NULL;
    PyObject *var_curve = NULL;
    PyObject *var_i = NULL;
    PyObject *var_e = NULL;
    PyObject *var_volume = NULL;
    PyObject *var_wave = NULL;
    PyObject *var_pitch = NULL;
    PyObject *var_pitch_change = NULL;
    PyObject *var_speed = NULL;
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_eval_call_2__globals = NULL;
    PyObject *tmp_eval_call_2__locals = NULL;
    PyObject *tmp_eval_call_2__source = NULL;
    PyObject *tmp_eval_call_3__globals = NULL;
    PyObject *tmp_eval_call_3__locals = NULL;
    PyObject *tmp_eval_call_3__source = NULL;
    PyObject *tmp_eval_call_4__globals = NULL;
    PyObject *tmp_eval_call_4__locals = NULL;
    PyObject *tmp_eval_call_4__source = NULL;
    PyObject *tmp_eval_call_5__globals = NULL;
    PyObject *tmp_eval_call_5__locals = NULL;
    PyObject *tmp_eval_call_5__source = NULL;
    PyObject *tmp_eval_call_6__globals = NULL;
    PyObject *tmp_eval_call_6__locals = NULL;
    PyObject *tmp_eval_call_6__source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e718f376d838855e12a236ad920c77b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_ursina$prefabs$ursfx$$$function__6_paste_code = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_e718f376d838855e12a236ad920c77b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e718f376d838855e12a236ad920c77b4)) {
        Py_XDECREF(cache_frame_e718f376d838855e12a236ad920c77b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e718f376d838855e12a236ad920c77b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e718f376d838855e12a236ad920c77b4 = MAKE_FUNCTION_FRAME(tstate, codeobj_e718f376d838855e12a236ad920c77b4, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e718f376d838855e12a236ad920c77b4->m_type_description == NULL);
    frame_e718f376d838855e12a236ad920c77b4 = cache_frame_e718f376d838855e12a236ad920c77b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e718f376d838855e12a236ad920c77b4);
    assert(Py_REFCNT(frame_e718f376d838855e12a236ad920c77b4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[176];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_ursina$prefabs$ursfx;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 146;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyperclip == NULL);
        var_pyperclip = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_code);
        tmp_operand_value_1 = par_code;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_pyperclip);
        tmp_called_instance_1 = var_pyperclip;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 148;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[121]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_code;
            assert(old != NULL);
            par_code = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[177];
        CHECK_OBJECT(par_code);
        tmp_args_element_value_2 = par_code;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_code);
        tmp_expression_value_4 = par_code;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[178]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 152;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[179]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[178]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 152;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[180]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[3];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = mod_consts[181];
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_curve == NULL);
        var_curve = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_None;
            assert(tmp_eval_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_5);
            tmp_eval_call_1__globals = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = Py_None;
            assert(tmp_eval_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_6);
            tmp_eval_call_1__locals = tmp_assign_source_6;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_cmp_expr_left_1 = tmp_eval_call_1__locals;
            tmp_cmp_expr_right_1 = Py_None;
            tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_7;
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_cmp_expr_left_2 = tmp_eval_call_1__globals;
            tmp_cmp_expr_right_2 = Py_None;
            tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_7 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_7);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_7, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_7, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_assign_source_7 = tmp_eval_call_1__globals;
            Py_INCREF(tmp_assign_source_7);
            condexpr_end_1:;
            {
                PyObject *old = tmp_eval_call_1__locals;
                assert(old != NULL);
                tmp_eval_call_1__locals = tmp_assign_source_7;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
        {
            bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_cmp_expr_left_3 = tmp_eval_call_1__globals;
            tmp_cmp_expr_right_3 = Py_None;
            tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
            if (tmp_condition_result_4 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_1__globals;
                assert(old != NULL);
                tmp_eval_call_1__globals = tmp_assign_source_8;
                Py_INCREF(tmp_eval_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(var_curve);
            tmp_assign_source_9 = var_curve;
            assert(tmp_eval_call_1__source == NULL);
            Py_INCREF(tmp_assign_source_9);
            tmp_eval_call_1__source = tmp_assign_source_9;
        }
        // Tried code:
        {
            bool tmp_condition_result_5;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_isinstance_inst_1 = tmp_eval_call_1__source;
            tmp_isinstance_cls_1 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_value_1;
            bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_expression_value_5 = tmp_eval_call_1__source;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[184]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_type_arg_1 = tmp_eval_call_1__source;
            tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_cmp_expr_left_4 == NULL));
            tmp_cmp_expr_right_4 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_4);
            if (tmp_condition_result_6 != false) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_args_value_1 = mod_consts[185];
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_args_value_1 = mod_consts[186];
            condexpr_end_2:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 153;
            tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_4, tmp_args_value_1);
            Py_DECREF(tmp_called_value_4);
            if (tmp_assign_source_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_eval_call_1__source;
                assert(old != NULL);
                tmp_eval_call_1__source = tmp_assign_source_10;
                Py_DECREF(old);
            }

        }
        branch_no_4:;
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_eval_source_1 = tmp_eval_call_1__source;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_eval_globals_1 = tmp_eval_call_1__globals;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_eval_locals_1 = tmp_eval_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tstate, tmp_eval_source_1, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_4 = EVAL_CODE(tstate, tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1, NULL);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        {
            PyObject *old = var_curve;
            assert(old != NULL);
            var_curve = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_3 = var_curve;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 154;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 154;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 154;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[143];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 154;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_16;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_17;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_e);
        tmp_assattr_value_1 = var_e;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[93]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assattr_target_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[189], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_4 = mod_consts[190];
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_5 = var_curve;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[36];
        assert(var_volume == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_volume = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = mod_consts[191];
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_right_5 = par_code;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_code);
        tmp_expression_value_11 = par_code;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[178]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 160;
        tmp_expression_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[192]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[4];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[178]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 160;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[193]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_5 = mod_consts[3];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_volume;
            assert(old != NULL);
            var_volume = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = Py_None;
            assert(tmp_eval_call_2__globals == NULL);
            Py_INCREF(tmp_assign_source_21);
            tmp_eval_call_2__globals = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_None;
            assert(tmp_eval_call_2__locals == NULL);
            Py_INCREF(tmp_assign_source_22);
            tmp_eval_call_2__locals = tmp_assign_source_22;
        }
        {
            bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_eval_call_2__locals);
            tmp_cmp_expr_left_6 = tmp_eval_call_2__locals;
            tmp_cmp_expr_right_6 = Py_None;
            tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
            if (tmp_condition_result_8 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_23;
            bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_cmp_expr_left_7 = tmp_eval_call_2__globals;
            tmp_cmp_expr_right_7 = Py_None;
            tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_23 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_23);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_i != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_i);
                value = var_i;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_e != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_e);
                value = var_e;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[194], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[194]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_volume != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_volume);
                value = var_volume;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_23, (Nuitka_StringObject *)mod_consts[10], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_23, mod_consts[10]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_assign_source_23 = tmp_eval_call_2__globals;
            Py_INCREF(tmp_assign_source_23);
            condexpr_end_3:;
            {
                PyObject *old = tmp_eval_call_2__locals;
                assert(old != NULL);
                tmp_eval_call_2__locals = tmp_assign_source_23;
                Py_DECREF(old);
            }

        }
        branch_no_6:;
        {
            bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_cmp_expr_left_8 = tmp_eval_call_2__globals;
            tmp_cmp_expr_right_8 = Py_None;
            tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_2__globals;
                assert(old != NULL);
                tmp_eval_call_2__globals = tmp_assign_source_24;
                Py_INCREF(tmp_eval_call_2__globals);
                Py_DECREF(old);
            }

        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(var_volume);
            tmp_assign_source_25 = var_volume;
            assert(tmp_eval_call_2__source == NULL);
            Py_INCREF(tmp_assign_source_25);
            tmp_eval_call_2__source = tmp_assign_source_25;
        }
        // Tried code:
        {
            bool tmp_condition_result_11;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_isinstance_inst_2 = tmp_eval_call_2__source;
            tmp_isinstance_cls_2 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_11 != false) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_value_2;
            bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            PyObject *tmp_type_arg_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_expression_value_12 = tmp_eval_call_2__source;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[184]);
            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_type_arg_2 = tmp_eval_call_2__source;
            tmp_cmp_expr_left_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_cmp_expr_left_9 == NULL));
            tmp_cmp_expr_right_9 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_9);
            if (tmp_condition_result_12 != false) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_args_value_2 = mod_consts[185];
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_args_value_2 = mod_consts[186];
            condexpr_end_4:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 161;
            tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_9, tmp_args_value_2);
            Py_DECREF(tmp_called_value_9);
            if (tmp_assign_source_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_eval_call_2__source;
                assert(old != NULL);
                tmp_eval_call_2__source = tmp_assign_source_26;
                Py_DECREF(old);
            }

        }
        branch_no_8:;
        {
            PyObject *tmp_eval_source_2;
            PyObject *tmp_eval_globals_2;
            PyObject *tmp_eval_locals_2;
            PyObject *tmp_eval_compiled_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_eval_source_2 = tmp_eval_call_2__source;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_eval_globals_2 = tmp_eval_call_2__globals;
            CHECK_OBJECT(tmp_eval_call_2__locals);
            tmp_eval_locals_2 = tmp_eval_call_2__locals;
            tmp_eval_compiled_2 = COMPILE_CODE(tstate, tmp_eval_source_2, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_20 = EVAL_CODE(tstate, tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2, NULL);
            Py_DECREF(tmp_eval_compiled_2);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;
        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        goto outline_result_2;
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

        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;
        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        {
            PyObject *old = var_volume;
            assert(old != NULL);
            var_volume = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_volume);
        tmp_assattr_value_2 = var_volume;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[52]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[195], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = mod_consts[196];
        CHECK_OBJECT(var_volume);
        tmp_args_element_value_7 = var_volume;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[197];
        assert(var_wave == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_wave = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = mod_consts[198];
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_right_10 = par_code;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_13 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_code);
        tmp_expression_value_17 = par_code;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[178]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 167;
        tmp_expression_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[199]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[4];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 1);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[178]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 167;
        tmp_expression_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[193]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_7 = mod_consts[3];
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_wave;
            assert(old != NULL);
            var_wave = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = Py_None;
            assert(tmp_eval_call_3__globals == NULL);
            Py_INCREF(tmp_assign_source_30);
            tmp_eval_call_3__globals = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = Py_None;
            assert(tmp_eval_call_3__locals == NULL);
            Py_INCREF(tmp_assign_source_31);
            tmp_eval_call_3__locals = tmp_assign_source_31;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_eval_call_3__locals);
            tmp_cmp_expr_left_11 = tmp_eval_call_3__locals;
            tmp_cmp_expr_right_11 = Py_None;
            tmp_condition_result_14 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_32;
            bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_cmp_expr_left_12 = tmp_eval_call_3__globals;
            tmp_cmp_expr_right_12 = Py_None;
            tmp_condition_result_15 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
            if (tmp_condition_result_15 != false) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_32 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_32);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_i != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_i);
                value = var_i;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_e != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_e);
                value = var_e;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[194], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[194]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_volume != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_volume);
                value = var_volume;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[10], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[10]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_wave != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_wave);
                value = var_wave;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_32, (Nuitka_StringObject *)mod_consts[200], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_32, mod_consts[200]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_5;
            condexpr_false_5:;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_assign_source_32 = tmp_eval_call_3__globals;
            Py_INCREF(tmp_assign_source_32);
            condexpr_end_5:;
            {
                PyObject *old = tmp_eval_call_3__locals;
                assert(old != NULL);
                tmp_eval_call_3__locals = tmp_assign_source_32;
                Py_DECREF(old);
            }

        }
        branch_no_10:;
        {
            bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_cmp_expr_left_13 = tmp_eval_call_3__globals;
            tmp_cmp_expr_right_13 = Py_None;
            tmp_condition_result_16 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
            if (tmp_condition_result_16 != false) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_3__globals;
                assert(old != NULL);
                tmp_eval_call_3__globals = tmp_assign_source_33;
                Py_INCREF(tmp_eval_call_3__globals);
                Py_DECREF(old);
            }

        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(var_wave);
            tmp_assign_source_34 = var_wave;
            assert(tmp_eval_call_3__source == NULL);
            Py_INCREF(tmp_assign_source_34);
            tmp_eval_call_3__source = tmp_assign_source_34;
        }
        // Tried code:
        {
            bool tmp_condition_result_17;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_isinstance_inst_3 = tmp_eval_call_3__source;
            tmp_isinstance_cls_3 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_17 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_17 != false) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_value_3;
            bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            PyObject *tmp_type_arg_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_expression_value_18 = tmp_eval_call_3__source;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[184]);
            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_type_arg_3 = tmp_eval_call_3__source;
            tmp_cmp_expr_left_14 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_cmp_expr_left_14 == NULL));
            tmp_cmp_expr_right_14 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_18 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_14);
            if (tmp_condition_result_18 != false) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_args_value_3 = mod_consts[185];
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_args_value_3 = mod_consts[186];
            condexpr_end_6:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 168;
            tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_13, tmp_args_value_3);
            Py_DECREF(tmp_called_value_13);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_eval_call_3__source;
                assert(old != NULL);
                tmp_eval_call_3__source = tmp_assign_source_35;
                Py_DECREF(old);
            }

        }
        branch_no_12:;
        {
            PyObject *tmp_eval_source_3;
            PyObject *tmp_eval_globals_3;
            PyObject *tmp_eval_locals_3;
            PyObject *tmp_eval_compiled_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_eval_source_3 = tmp_eval_call_3__source;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_eval_globals_3 = tmp_eval_call_3__globals;
            CHECK_OBJECT(tmp_eval_call_3__locals);
            tmp_eval_locals_3 = tmp_eval_call_3__locals;
            tmp_eval_compiled_3 = COMPILE_CODE(tstate, tmp_eval_source_3, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_29 = EVAL_CODE(tstate, tmp_eval_compiled_3, tmp_eval_globals_3, tmp_eval_locals_3, NULL);
            Py_DECREF(tmp_eval_compiled_3);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;
        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;
        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        {
            PyObject *old = var_wave;
            assert(old != NULL);
            var_wave = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_wave);
        tmp_assattr_value_3 = var_wave;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_19 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[58]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[195], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_8 = mod_consts[201];
        CHECK_OBJECT(var_wave);
        tmp_args_element_value_9 = var_wave;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[4];
        assert(var_pitch == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_pitch = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = mod_consts[202];
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_right_15 = par_code;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_15, tmp_cmp_expr_left_15);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_19 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_code);
        tmp_expression_value_21 = par_code;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[178]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 174;
        tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[203]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_8 = mod_consts[4];
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_8, 1);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch;
            assert(old != NULL);
            var_pitch = tmp_assign_source_37;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = mod_consts[204];
        CHECK_OBJECT(var_pitch);
        tmp_cmp_expr_right_16 = var_pitch;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_20 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_pitch);
        tmp_expression_value_23 = var_pitch;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[178]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 176;
        tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[193]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_9 = mod_consts[3];
        tmp_assign_source_38 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_9, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch;
            assert(old != NULL);
            var_pitch = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_pitch);
        tmp_expression_value_24 = var_pitch;
        tmp_subscript_value_10 = mod_consts[205];
        tmp_assign_source_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_10);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch;
            assert(old != NULL);
            var_pitch = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = Py_None;
            assert(tmp_eval_call_4__globals == NULL);
            Py_INCREF(tmp_assign_source_41);
            tmp_eval_call_4__globals = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = Py_None;
            assert(tmp_eval_call_4__locals == NULL);
            Py_INCREF(tmp_assign_source_42);
            tmp_eval_call_4__locals = tmp_assign_source_42;
        }
        {
            bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_eval_call_4__locals);
            tmp_cmp_expr_left_17 = tmp_eval_call_4__locals;
            tmp_cmp_expr_right_17 = Py_None;
            tmp_condition_result_21 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
            if (tmp_condition_result_21 != false) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_43;
            bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_cmp_expr_left_18 = tmp_eval_call_4__globals;
            tmp_cmp_expr_right_18 = Py_None;
            tmp_condition_result_22 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_43 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_43);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_i != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_i);
                value = var_i;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_e != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_e);
                value = var_e;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[194], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[194]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_volume != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_volume);
                value = var_volume;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[10], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[10]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_wave != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_wave);
                value = var_wave;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[200], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[200]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pitch != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pitch);
                value = var_pitch;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_43, (Nuitka_StringObject *)mod_consts[15], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_43, mod_consts[15]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_7;
            condexpr_false_7:;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_assign_source_43 = tmp_eval_call_4__globals;
            Py_INCREF(tmp_assign_source_43);
            condexpr_end_7:;
            {
                PyObject *old = tmp_eval_call_4__locals;
                assert(old != NULL);
                tmp_eval_call_4__locals = tmp_assign_source_43;
                Py_DECREF(old);
            }

        }
        branch_no_15:;
        {
            bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_cmp_expr_left_19 = tmp_eval_call_4__globals;
            tmp_cmp_expr_right_19 = Py_None;
            tmp_condition_result_23 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
            if (tmp_condition_result_23 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_4__globals;
                assert(old != NULL);
                tmp_eval_call_4__globals = tmp_assign_source_44;
                Py_INCREF(tmp_eval_call_4__globals);
                Py_DECREF(old);
            }

        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(var_pitch);
            tmp_assign_source_45 = var_pitch;
            assert(tmp_eval_call_4__source == NULL);
            Py_INCREF(tmp_assign_source_45);
            tmp_eval_call_4__source = tmp_assign_source_45;
        }
        // Tried code:
        {
            bool tmp_condition_result_24;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_isinstance_inst_4 = tmp_eval_call_4__source;
            tmp_isinstance_cls_4 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            tmp_condition_result_24 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_24 != false) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_value_4;
            bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            PyObject *tmp_type_arg_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_expression_value_25 = tmp_eval_call_4__source;
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[184]);
            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_type_arg_4 = tmp_eval_call_4__source;
            tmp_cmp_expr_left_20 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_cmp_expr_left_20 == NULL));
            tmp_cmp_expr_right_20 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_25 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_20);
            if (tmp_condition_result_25 != false) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_args_value_4 = mod_consts[185];
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_args_value_4 = mod_consts[186];
            condexpr_end_8:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 179;
            tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_17, tmp_args_value_4);
            Py_DECREF(tmp_called_value_17);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_eval_call_4__source;
                assert(old != NULL);
                tmp_eval_call_4__source = tmp_assign_source_46;
                Py_DECREF(old);
            }

        }
        branch_no_17:;
        {
            PyObject *tmp_eval_source_4;
            PyObject *tmp_eval_globals_4;
            PyObject *tmp_eval_locals_4;
            PyObject *tmp_eval_compiled_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_eval_source_4 = tmp_eval_call_4__source;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_eval_globals_4 = tmp_eval_call_4__globals;
            CHECK_OBJECT(tmp_eval_call_4__locals);
            tmp_eval_locals_4 = tmp_eval_call_4__locals;
            tmp_eval_compiled_4 = COMPILE_CODE(tstate, tmp_eval_source_4, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_40 = EVAL_CODE(tstate, tmp_eval_compiled_4, tmp_eval_globals_4, tmp_eval_locals_4, NULL);
            Py_DECREF(tmp_eval_compiled_4);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_9;
            }
            goto try_return_handler_9;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;
        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        goto outline_result_4;
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

        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;
        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        {
            PyObject *old = var_pitch;
            assert(old != NULL);
            var_pitch = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_pitch);
        tmp_assattr_value_4 = var_pitch;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_26 = par_self;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[67]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[195], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_10 = mod_consts[206];
        CHECK_OBJECT(var_pitch);
        tmp_args_element_value_11 = var_pitch;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[3];
        assert(var_pitch_change == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_pitch_change = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        tmp_cmp_expr_left_21 = mod_consts[207];
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_right_21 = par_code;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_21, tmp_cmp_expr_left_21);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_26 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(par_code);
        tmp_expression_value_28 = par_code;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[178]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 186;
        tmp_expression_value_27 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[208]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_11 = mod_consts[4];
        tmp_assign_source_48 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_11, 1);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch_change;
            assert(old != NULL);
            var_pitch_change = tmp_assign_source_48;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = mod_consts[204];
        CHECK_OBJECT(var_pitch_change);
        tmp_cmp_expr_right_22 = var_pitch_change;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_22, tmp_cmp_expr_left_22);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_27 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_pitch_change);
        tmp_expression_value_30 = var_pitch_change;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[178]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 188;
        tmp_expression_value_29 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[193]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_12 = mod_consts[3];
        tmp_assign_source_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch_change;
            assert(old != NULL);
            var_pitch_change = tmp_assign_source_49;
            Py_DECREF(old);
        }

    }
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_pitch_change);
        tmp_expression_value_31 = var_pitch_change;
        tmp_subscript_value_13 = mod_consts[205];
        tmp_assign_source_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_13);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pitch_change;
            assert(old != NULL);
            var_pitch_change = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = Py_None;
            assert(tmp_eval_call_5__globals == NULL);
            Py_INCREF(tmp_assign_source_52);
            tmp_eval_call_5__globals = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = Py_None;
            assert(tmp_eval_call_5__locals == NULL);
            Py_INCREF(tmp_assign_source_53);
            tmp_eval_call_5__locals = tmp_assign_source_53;
        }
        {
            bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_eval_call_5__locals);
            tmp_cmp_expr_left_23 = tmp_eval_call_5__locals;
            tmp_cmp_expr_right_23 = Py_None;
            tmp_condition_result_28 = (tmp_cmp_expr_left_23 == tmp_cmp_expr_right_23) ? true : false;
            if (tmp_condition_result_28 != false) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        {
            PyObject *tmp_assign_source_54;
            bool tmp_condition_result_29;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_cmp_expr_left_24 = tmp_eval_call_5__globals;
            tmp_cmp_expr_right_24 = Py_None;
            tmp_condition_result_29 = (tmp_cmp_expr_left_24 == tmp_cmp_expr_right_24) ? true : false;
            if (tmp_condition_result_29 != false) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_54 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_54);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_i != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_i);
                value = var_i;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_e != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_e);
                value = var_e;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[194], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[194]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_volume != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_volume);
                value = var_volume;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[10], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[10]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_wave != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_wave);
                value = var_wave;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[200], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[200]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pitch != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pitch);
                value = var_pitch;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[15], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[15]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pitch_change != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pitch_change);
                value = var_pitch_change;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_54, (Nuitka_StringObject *)mod_consts[209], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_54, mod_consts[209]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_9;
            condexpr_false_9:;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_assign_source_54 = tmp_eval_call_5__globals;
            Py_INCREF(tmp_assign_source_54);
            condexpr_end_9:;
            {
                PyObject *old = tmp_eval_call_5__locals;
                assert(old != NULL);
                tmp_eval_call_5__locals = tmp_assign_source_54;
                Py_DECREF(old);
            }

        }
        branch_no_20:;
        {
            bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_cmp_expr_left_25 = tmp_eval_call_5__globals;
            tmp_cmp_expr_right_25 = Py_None;
            tmp_condition_result_30 = (tmp_cmp_expr_left_25 == tmp_cmp_expr_right_25) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_5__globals;
                assert(old != NULL);
                tmp_eval_call_5__globals = tmp_assign_source_55;
                Py_INCREF(tmp_eval_call_5__globals);
                Py_DECREF(old);
            }

        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(var_pitch_change);
            tmp_assign_source_56 = var_pitch_change;
            assert(tmp_eval_call_5__source == NULL);
            Py_INCREF(tmp_assign_source_56);
            tmp_eval_call_5__source = tmp_assign_source_56;
        }
        // Tried code:
        {
            bool tmp_condition_result_31;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_isinstance_inst_5;
            PyObject *tmp_isinstance_cls_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_isinstance_inst_5 = tmp_eval_call_5__source;
            tmp_isinstance_cls_5 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            tmp_condition_result_31 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_31 != false) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_value_5;
            bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            PyObject *tmp_type_arg_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_expression_value_32 = tmp_eval_call_5__source;
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[184]);
            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_type_arg_5 = tmp_eval_call_5__source;
            tmp_cmp_expr_left_26 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_cmp_expr_left_26 == NULL));
            tmp_cmp_expr_right_26 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_32 = (tmp_cmp_expr_left_26 == tmp_cmp_expr_right_26) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_26);
            if (tmp_condition_result_32 != false) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_args_value_5 = mod_consts[185];
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_args_value_5 = mod_consts[186];
            condexpr_end_10:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 191;
            tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_21, tmp_args_value_5);
            Py_DECREF(tmp_called_value_21);
            if (tmp_assign_source_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_eval_call_5__source;
                assert(old != NULL);
                tmp_eval_call_5__source = tmp_assign_source_57;
                Py_DECREF(old);
            }

        }
        branch_no_22:;
        {
            PyObject *tmp_eval_source_5;
            PyObject *tmp_eval_globals_5;
            PyObject *tmp_eval_locals_5;
            PyObject *tmp_eval_compiled_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_eval_source_5 = tmp_eval_call_5__source;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_eval_globals_5 = tmp_eval_call_5__globals;
            CHECK_OBJECT(tmp_eval_call_5__locals);
            tmp_eval_locals_5 = tmp_eval_call_5__locals;
            tmp_eval_compiled_5 = COMPILE_CODE(tstate, tmp_eval_source_5, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_51 = EVAL_CODE(tstate, tmp_eval_compiled_5, tmp_eval_globals_5, tmp_eval_locals_5, NULL);
            Py_DECREF(tmp_eval_compiled_5);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_10;
            }
            goto try_return_handler_10;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;
        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        goto outline_result_5;
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

        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;
        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        {
            PyObject *old = var_pitch_change;
            assert(old != NULL);
            var_pitch_change = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    branch_no_18:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(var_pitch_change);
        tmp_assattr_value_5 = var_pitch_change;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_33 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[72]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[195], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_6;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 193;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[210]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[4];
        assert(var_speed == NULL);
        Py_INCREF(tmp_assign_source_58);
        var_speed = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        tmp_cmp_expr_left_27 = mod_consts[211];
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_right_27 = par_code;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_27, tmp_cmp_expr_left_27);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_33 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(par_code);
        tmp_expression_value_35 = par_code;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[178]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 197;
        tmp_expression_value_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[212]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_14 = mod_consts[4];
        tmp_assign_source_59 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_14, 1);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_speed;
            assert(old != NULL);
            var_speed = tmp_assign_source_59;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        tmp_cmp_expr_left_28 = mod_consts[204];
        CHECK_OBJECT(var_speed);
        tmp_cmp_expr_right_28 = var_speed;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_28, tmp_cmp_expr_left_28);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_34 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_speed);
        tmp_expression_value_37 = var_speed;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[178]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 199;
        tmp_expression_value_36 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[193]);

        Py_DECREF(tmp_called_value_24);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_15 = mod_consts[3];
        tmp_assign_source_60 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_15, 0);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_speed;
            assert(old != NULL);
            var_speed = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_speed);
        tmp_expression_value_38 = var_speed;
        tmp_subscript_value_16 = mod_consts[205];
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_16);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_speed;
            assert(old != NULL);
            var_speed = tmp_assign_source_61;
            Py_DECREF(old);
        }

    }
    branch_end_24:;
    {
        PyObject *tmp_assign_source_62;
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = Py_None;
            assert(tmp_eval_call_6__globals == NULL);
            Py_INCREF(tmp_assign_source_63);
            tmp_eval_call_6__globals = tmp_assign_source_63;
        }
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = Py_None;
            assert(tmp_eval_call_6__locals == NULL);
            Py_INCREF(tmp_assign_source_64);
            tmp_eval_call_6__locals = tmp_assign_source_64;
        }
        {
            bool tmp_condition_result_35;
            PyObject *tmp_cmp_expr_left_29;
            PyObject *tmp_cmp_expr_right_29;
            CHECK_OBJECT(tmp_eval_call_6__locals);
            tmp_cmp_expr_left_29 = tmp_eval_call_6__locals;
            tmp_cmp_expr_right_29 = Py_None;
            tmp_condition_result_35 = (tmp_cmp_expr_left_29 == tmp_cmp_expr_right_29) ? true : false;
            if (tmp_condition_result_35 != false) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
        }
        branch_yes_25:;
        {
            PyObject *tmp_assign_source_65;
            bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_30;
            PyObject *tmp_cmp_expr_right_30;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_cmp_expr_left_30 = tmp_eval_call_6__globals;
            tmp_cmp_expr_right_30 = Py_None;
            tmp_condition_result_36 = (tmp_cmp_expr_left_30 == tmp_cmp_expr_right_30) ? true : false;
            if (tmp_condition_result_36 != false) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            if (locals_ursina$prefabs$ursfx$$$function__6_paste_code == NULL) locals_ursina$prefabs$ursfx$$$function__6_paste_code = MAKE_DICT_EMPTY();
            tmp_assign_source_65 = locals_ursina$prefabs$ursfx$$$function__6_paste_code;
            Py_INCREF(tmp_assign_source_65);
            if (par_self != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_self);
                value = par_self;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[88], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[88]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (par_code != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_code);
                value = par_code;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[182], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[182]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pyperclip != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pyperclip);
                value = var_pyperclip;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[176], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[176]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_curve != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_curve);
                value = var_curve;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[12], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[12]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_i != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_i);
                value = var_i;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_e != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_e);
                value = var_e;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[194], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[194]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_volume != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_volume);
                value = var_volume;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[10], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[10]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_wave != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_wave);
                value = var_wave;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[200], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[200]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pitch != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pitch);
                value = var_pitch;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[15], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[15]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_pitch_change != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_pitch_change);
                value = var_pitch_change;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[209], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[209]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            if (var_speed != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_speed);
                value = var_speed;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_65, (Nuitka_StringObject *)mod_consts[11], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_65, mod_consts[11]) == false) {
                    CLEAR_ERROR_OCCURRED(tstate);
                }
            }

            goto condexpr_end_11;
            condexpr_false_11:;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_assign_source_65 = tmp_eval_call_6__globals;
            Py_INCREF(tmp_assign_source_65);
            condexpr_end_11:;
            {
                PyObject *old = tmp_eval_call_6__locals;
                assert(old != NULL);
                tmp_eval_call_6__locals = tmp_assign_source_65;
                Py_DECREF(old);
            }

        }
        branch_no_25:;
        {
            bool tmp_condition_result_37;
            PyObject *tmp_cmp_expr_left_31;
            PyObject *tmp_cmp_expr_right_31;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_cmp_expr_left_31 = tmp_eval_call_6__globals;
            tmp_cmp_expr_right_31 = Py_None;
            tmp_condition_result_37 = (tmp_cmp_expr_left_31 == tmp_cmp_expr_right_31) ? true : false;
            if (tmp_condition_result_37 != false) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = (PyObject *)moduledict_ursina$prefabs$ursfx;
            {
                PyObject *old = tmp_eval_call_6__globals;
                assert(old != NULL);
                tmp_eval_call_6__globals = tmp_assign_source_66;
                Py_INCREF(tmp_eval_call_6__globals);
                Py_DECREF(old);
            }

        }
        branch_no_26:;
        {
            PyObject *tmp_assign_source_67;
            CHECK_OBJECT(var_speed);
            tmp_assign_source_67 = var_speed;
            assert(tmp_eval_call_6__source == NULL);
            Py_INCREF(tmp_assign_source_67);
            tmp_eval_call_6__source = tmp_assign_source_67;
        }
        // Tried code:
        {
            bool tmp_condition_result_38;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_isinstance_inst_6;
            PyObject *tmp_isinstance_cls_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_isinstance_inst_6 = tmp_eval_call_6__source;
            tmp_isinstance_cls_6 = mod_consts[183];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_38 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_38 != false) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_args_value_6;
            bool tmp_condition_result_39;
            PyObject *tmp_cmp_expr_left_32;
            PyObject *tmp_cmp_expr_right_32;
            PyObject *tmp_type_arg_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_expression_value_39 = tmp_eval_call_6__source;
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[184]);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_type_arg_6 = tmp_eval_call_6__source;
            tmp_cmp_expr_left_32 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_cmp_expr_left_32 == NULL));
            tmp_cmp_expr_right_32 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_39 = (tmp_cmp_expr_left_32 == tmp_cmp_expr_right_32) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_32);
            if (tmp_condition_result_39 != false) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_args_value_6 = mod_consts[185];
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_args_value_6 = mod_consts[186];
            condexpr_end_12:;
            frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 202;
            tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS(tstate, tmp_called_value_25, tmp_args_value_6);
            Py_DECREF(tmp_called_value_25);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_eval_call_6__source;
                assert(old != NULL);
                tmp_eval_call_6__source = tmp_assign_source_68;
                Py_DECREF(old);
            }

        }
        branch_no_27:;
        {
            PyObject *tmp_eval_source_6;
            PyObject *tmp_eval_globals_6;
            PyObject *tmp_eval_locals_6;
            PyObject *tmp_eval_compiled_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_eval_source_6 = tmp_eval_call_6__source;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_eval_globals_6 = tmp_eval_call_6__globals;
            CHECK_OBJECT(tmp_eval_call_6__locals);
            tmp_eval_locals_6 = tmp_eval_call_6__locals;
            tmp_eval_compiled_6 = COMPILE_CODE(tstate, tmp_eval_source_6, mod_consts[187], mod_consts[188], NULL, NULL, NULL);
            if (tmp_eval_compiled_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_62 = EVAL_CODE(tstate, tmp_eval_compiled_6, tmp_eval_globals_6, tmp_eval_locals_6, NULL);
            Py_DECREF(tmp_eval_compiled_6);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            goto try_return_handler_11;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;
        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        goto outline_result_6;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;
        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        {
            PyObject *old = var_speed;
            assert(old != NULL);
            var_speed = tmp_assign_source_62;
            Py_DECREF(old);
        }

    }
    branch_no_23:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(var_speed);
        tmp_assattr_value_6 = var_speed;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_40 = par_self;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[76]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[195], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_7;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 204;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[213]);

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_12 = var_curve;
        if (var_volume == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_13 = var_volume;
        if (var_wave == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_14 = var_wave;
        CHECK_OBJECT(var_pitch);
        tmp_args_element_value_15 = var_pitch;
        CHECK_OBJECT(var_pitch_change);
        tmp_args_element_value_16 = var_pitch_change;
        CHECK_OBJECT(var_speed);
        tmp_args_element_value_17 = var_speed;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = par_self;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 208;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[148]);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_e718f376d838855e12a236ad920c77b4, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_e718f376d838855e12a236ad920c77b4, exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_12;
        }
        tmp_args_element_value_18 = mod_consts[214];
        CHECK_OBJECT(par_code);
        tmp_args_element_value_19 = par_code;
        frame_e718f376d838855e12a236ad920c77b4->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e718f376d838855e12a236ad920c77b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e718f376d838855e12a236ad920c77b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e718f376d838855e12a236ad920c77b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e718f376d838855e12a236ad920c77b4,
        type_description_1,
        par_self,
        par_code,
        var_pyperclip,
        var_curve,
        var_i,
        var_e,
        var_volume,
        var_wave,
        var_pitch,
        var_pitch_change,
        var_speed
    );


    // Release cached frame if used for exception.
    if (frame_e718f376d838855e12a236ad920c77b4 == cache_frame_e718f376d838855e12a236ad920c77b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e718f376d838855e12a236ad920c77b4);
        cache_frame_e718f376d838855e12a236ad920c77b4 = NULL;
    }

    assertFrameObject(frame_e718f376d838855e12a236ad920c77b4);

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
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    par_code = NULL;
    Py_XDECREF(var_pyperclip);
    var_pyperclip = NULL;
    Py_XDECREF(var_curve);
    var_curve = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_volume);
    var_volume = NULL;
    Py_XDECREF(var_wave);
    var_wave = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_pitch_change);
    var_pitch_change = NULL;
    Py_XDECREF(var_speed);
    var_speed = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_code);
    par_code = NULL;
    Py_XDECREF(var_pyperclip);
    var_pyperclip = NULL;
    Py_XDECREF(var_curve);
    var_curve = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_volume);
    var_volume = NULL;
    Py_XDECREF(var_wave);
    var_wave = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_pitch_change);
    var_pitch_change = NULL;
    Py_XDECREF(var_speed);
    var_speed = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_ursina$prefabs$ursfx$$$function__6_paste_code);

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_ursina$prefabs$ursfx$$$function__6_paste_code);

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_ursina$prefabs$ursfx$$$function__7_recipe(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_pitch_code = NULL;
    PyObject *var_pitch_change_code = NULL;
    PyObject *var_speed_code = NULL;
    struct Nuitka_FrameObject *frame_83a4e4ef162eff42ab055e549e06180c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83a4e4ef162eff42ab055e549e06180c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[153];
        assert(var_pitch_code == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_pitch_code = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_83a4e4ef162eff42ab055e549e06180c)) {
        Py_XDECREF(cache_frame_83a4e4ef162eff42ab055e549e06180c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83a4e4ef162eff42ab055e549e06180c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83a4e4ef162eff42ab055e549e06180c = MAKE_FUNCTION_FRAME(tstate, codeobj_83a4e4ef162eff42ab055e549e06180c, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83a4e4ef162eff42ab055e549e06180c->m_type_description == NULL);
    frame_83a4e4ef162eff42ab055e549e06180c = cache_frame_83a4e4ef162eff42ab055e549e06180c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_83a4e4ef162eff42ab055e549e06180c);
    assert(Py_REFCNT(frame_83a4e4ef162eff42ab055e549e06180c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[67]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[195]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 217;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[215];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[67]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[195]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[153];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[153], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pitch_code;
            assert(old != NULL);
            var_pitch_code = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[153];
        assert(var_pitch_change_code == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_pitch_change_code = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[72]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[195]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_attribute_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[216];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[72]);
            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[195]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[153];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_4 = PyUnicode_Join(mod_consts[153], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pitch_change_code;
            assert(old != NULL);
            var_pitch_change_code = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[159];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_self);
            tmp_expression_value_10 = par_self;
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[76]);
            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[195]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_2 = mod_consts[4];
            frame_83a4e4ef162eff42ab055e549e06180c->m_frame.f_lineno = 226;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_format_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[153];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_5 = PyUnicode_Join(mod_consts[153], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_speed_code == NULL);
        var_speed_code = tmp_assign_source_5;
    }
    {
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[218];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[219]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[219]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            CHECK_OBJECT(par_self);
            tmp_expression_value_11 = par_self;
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[220]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            frame_83a4e4ef162eff42ab055e549e06180c->m_frame.f_lineno = 228;
            tmp_format_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_4 = mod_consts[153];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[221];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            CHECK_OBJECT(par_self);
            tmp_expression_value_13 = par_self;
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[52]);
            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[195]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_5 = mod_consts[101];
            frame_83a4e4ef162eff42ab055e549e06180c->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_format_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_args_element_value_4);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_5 = mod_consts[153];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[222];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
            CHECK_OBJECT(par_self);
            tmp_expression_value_15 = par_self;
            tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[58]);
            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[195]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_6 = mod_consts[153];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 5, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 6, tmp_tuple_element_4);
            CHECK_OBJECT(var_pitch_code);
            tmp_tuple_element_4 = var_pitch_code;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 7, tmp_tuple_element_4);
            CHECK_OBJECT(var_pitch_change_code);
            tmp_tuple_element_4 = var_pitch_change_code;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 8, tmp_tuple_element_4);
            CHECK_OBJECT(var_speed_code);
            tmp_tuple_element_4 = var_speed_code;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 9, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[161];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 10, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_return_value = PyUnicode_Join(mod_consts[153], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
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
        exception_tb = MAKE_TRACEBACK(frame_83a4e4ef162eff42ab055e549e06180c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83a4e4ef162eff42ab055e549e06180c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83a4e4ef162eff42ab055e549e06180c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83a4e4ef162eff42ab055e549e06180c,
        type_description_1,
        par_self,
        var_pitch_code,
        var_pitch_change_code,
        var_speed_code
    );


    // Release cached frame if used for exception.
    if (frame_83a4e4ef162eff42ab055e549e06180c == cache_frame_83a4e4ef162eff42ab055e549e06180c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83a4e4ef162eff42ab055e549e06180c);
        cache_frame_83a4e4ef162eff42ab055e549e06180c = NULL;
    }

    assertFrameObject(frame_83a4e4ef162eff42ab055e549e06180c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pitch_code);
    Py_DECREF(var_pitch_code);
    var_pitch_code = NULL;
    CHECK_OBJECT(var_pitch_change_code);
    Py_DECREF(var_pitch_change_code);
    var_pitch_change_code = NULL;
    CHECK_OBJECT(var_speed_code);
    Py_DECREF(var_speed_code);
    var_speed_code = NULL;
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

    CHECK_OBJECT(var_pitch_code);
    Py_DECREF(var_pitch_code);
    var_pitch_code = NULL;
    Py_XDECREF(var_pitch_change_code);
    var_pitch_change_code = NULL;
    Py_XDECREF(var_speed_code);
    var_speed_code = NULL;
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


static PyObject *impl_ursina$prefabs$ursfx$$$function__8_draw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_e = NULL;
    PyObject *outline_0_var_e = NULL;
    PyObject *outline_1_var_e = NULL;
    PyObject *outline_2_var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_04b585daf244d4b7825f5182f89899be;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_04b585daf244d4b7825f5182f89899be = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_04b585daf244d4b7825f5182f89899be)) {
        Py_XDECREF(cache_frame_04b585daf244d4b7825f5182f89899be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04b585daf244d4b7825f5182f89899be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04b585daf244d4b7825f5182f89899be = MAKE_FUNCTION_FRAME(tstate, codeobj_04b585daf244d4b7825f5182f89899be, module_ursina$prefabs$ursfx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04b585daf244d4b7825f5182f89899be->m_type_description == NULL);
    frame_04b585daf244d4b7825f5182f89899be = cache_frame_04b585daf244d4b7825f5182f89899be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_04b585daf244d4b7825f5182f89899be);
    assert(Py_REFCNT(frame_04b585daf244d4b7825f5182f89899be) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[22];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 4);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[122]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[45]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[93]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[22];
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 4);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[122]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[108]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[123], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[93]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
                exception_lineno = 240;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_3;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_10 = var_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[122]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = mod_consts[129];
        frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_4;
            PyTuple_SET_ITEM(tmp_assattr_value_3, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_e);
            tmp_expression_value_11 = var_e;
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[224]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_4 = mod_consts[129];
            frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 241;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_3, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_e);
        tmp_assattr_target_3 = var_e;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[189], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 240;
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
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[93]);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oo";
                    exception_lineno = 244;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_e;
                outline_0_var_e = tmp_assign_source_7;
                Py_INCREF(outline_0_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_e);
            tmp_expression_value_13 = outline_0_var_e;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[225]);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            if (par_self == NULL) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }

            tmp_expression_value_14 = par_self;
            tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[38]);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 244;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[226]);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_4 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_4);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
        Py_XDECREF(outline_0_var_e);
        outline_0_var_e = NULL;
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

        Py_XDECREF(outline_0_var_e);
        outline_0_var_e = NULL;
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
        exception_lineno = 244;
        goto frame_exception_exit_1;
        outline_result_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[100]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[227]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[228], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[100]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[227]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 245;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[229]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_19;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }

            tmp_expression_value_19 = par_self;
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[93]);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oo";
                    exception_lineno = 247;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_e;
                outline_1_var_e = tmp_assign_source_11;
                Py_INCREF(outline_1_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_21;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_e);
            tmp_expression_value_20 = outline_1_var_e;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[225]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            if (par_self == NULL) {
                Py_DECREF(tmp_called_value_4);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }

            tmp_expression_value_21 = par_self;
            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[38]);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 247;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_append_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[226]);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_append_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assattr_value_5 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assattr_value_5);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
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
        Py_XDECREF(outline_1_var_e);
        outline_1_var_e = NULL;
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

        Py_XDECREF(outline_1_var_e);
        outline_1_var_e = NULL;
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
        exception_lineno = 247;
        goto frame_exception_exit_1;
        outline_result_2:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[220], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_expression_value_22;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_7;
            }

            tmp_expression_value_22 = par_self;
            tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[220]);
            if (tmp_iter_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_7;
            }
            tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_7;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_13;
        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_4 = tmp_listcomp_3__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oo";
                    exception_lineno = 248;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_e;
                outline_2_var_e = tmp_assign_source_15;
                Py_INCREF(outline_2_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_args_element_value_6;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT(outline_2_var_e);
            tmp_expression_value_23 = outline_2_var_e;
            tmp_subscript_value_3 = mod_consts[3];
            tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_3, 0);
            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_8;
            }
            tmp_args_element_value_6 = mod_consts[129];
            frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_args_element_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_8;
            }
            tmp_append_value_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_6;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_args_element_value_8;
                PyTuple_SET_ITEM(tmp_append_value_3, 0, tmp_tuple_element_2);
                tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[217]);

                if (unlikely(tmp_called_value_6 == NULL)) {
                    tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
                }

                if (tmp_called_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_1 = "oo";
                    goto tuple_build_exception_2;
                }
                CHECK_OBJECT(outline_2_var_e);
                tmp_expression_value_24 = outline_2_var_e;
                tmp_subscript_value_4 = mod_consts[4];
                tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_4, 1);
                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_1 = "oo";
                    goto tuple_build_exception_2;
                }
                tmp_args_element_value_8 = mod_consts[129];
                frame_04b585daf244d4b7825f5182f89899be->m_frame.f_lineno = 248;
                {
                    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
                }

                Py_DECREF(tmp_args_element_value_7);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_1 = "oo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_append_value_3, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_append_value_3);
            goto try_except_handler_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oo";
            goto try_except_handler_8;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assattr_value_6 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assattr_value_6);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_2_var_e);
        outline_2_var_e = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_e);
        outline_2_var_e = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 248;
        goto frame_exception_exit_1;
        outline_result_3:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[220], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_27;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_self;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[52]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[195]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_self;
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[38]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[230], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04b585daf244d4b7825f5182f89899be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04b585daf244d4b7825f5182f89899be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04b585daf244d4b7825f5182f89899be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04b585daf244d4b7825f5182f89899be,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_04b585daf244d4b7825f5182f89899be == cache_frame_04b585daf244d4b7825f5182f89899be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04b585daf244d4b7825f5182f89899be);
        cache_frame_04b585daf244d4b7825f5182f89899be = NULL;
    }

    assertFrameObject(frame_04b585daf244d4b7825f5182f89899be);

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
    Py_XDECREF(var_e);
    var_e = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_ursina$prefabs$ursfx$$$function__9_play(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_e = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4c775b34f0b5dddf5d79cc6370247c41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_4c775b34f0b5dddf5d79cc6370247c41 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c775b34f0b5dddf5d79cc6370247c41)) {
        Py_XDECREF(cache_frame_4c775b34f0b5dddf5d79cc6370247c41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c775b34f0b5dddf5d79cc6370247c41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c775b34f0b5dddf5d79cc6370247c41 = MAKE_FUNCTION_FRAME(tstate, codeobj_4c775b34f0b5dddf5d79cc6370247c41, module_ursina$prefabs$ursfx, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c775b34f0b5dddf5d79cc6370247c41->m_type_description == NULL);
    frame_4c775b34f0b5dddf5d79cc6370247c41 = cache_frame_4c775b34f0b5dddf5d79cc6370247c41;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4c775b34f0b5dddf5d79cc6370247c41);
    assert(Py_REFCNT(frame_4c775b34f0b5dddf5d79cc6370247c41) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4c775b34f0b5dddf5d79cc6370247c41->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[148]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[93]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "o";
                    exception_lineno = 263;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_e;
                outline_0_var_e = tmp_assign_source_4;
                Py_INCREF(outline_0_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_e);
            tmp_expression_value_2 = outline_0_var_e;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[225]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            if (par_self == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_2;
            }

            tmp_expression_value_3 = par_self;
            tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            frame_4c775b34f0b5dddf5d79cc6370247c41->m_frame.f_lineno = 263;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[226]);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_kw_call_arg_value_0_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_kw_call_arg_value_0_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_1;
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

        goto try_except_handler_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_e);
        outline_0_var_e = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_e);
        outline_0_var_e = NULL;
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
        exception_lineno = 263;
        goto frame_exception_exit_1;
        outline_result_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[52]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[195]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[58]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[195]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[67]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[195]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[67]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[195]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[72]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[195]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_3_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_kw_call_dict_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[76]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_kw_call_dict_value_3_1);

            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[195]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_kw_call_dict_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_2_1);
            Py_DECREF(tmp_kw_call_dict_value_3_1);

            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4c775b34f0b5dddf5d79cc6370247c41->m_frame.f_lineno = 262;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[232]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        Py_DECREF(tmp_kw_call_dict_value_4_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_17;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[175]);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[133]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[233], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c775b34f0b5dddf5d79cc6370247c41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c775b34f0b5dddf5d79cc6370247c41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c775b34f0b5dddf5d79cc6370247c41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c775b34f0b5dddf5d79cc6370247c41,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4c775b34f0b5dddf5d79cc6370247c41 == cache_frame_4c775b34f0b5dddf5d79cc6370247c41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c775b34f0b5dddf5d79cc6370247c41);
        cache_frame_4c775b34f0b5dddf5d79cc6370247c41 = NULL;
    }

    assertFrameObject(frame_4c775b34f0b5dddf5d79cc6370247c41);

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


static PyObject *impl_ursina$prefabs$ursfx$$$function__10_toggle_gui_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    struct Nuitka_FrameObject *frame_523f68857d0d2fa008eaed0f66a9d3b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_523f68857d0d2fa008eaed0f66a9d3b5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_523f68857d0d2fa008eaed0f66a9d3b5)) {
        Py_XDECREF(cache_frame_523f68857d0d2fa008eaed0f66a9d3b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_523f68857d0d2fa008eaed0f66a9d3b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_523f68857d0d2fa008eaed0f66a9d3b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_523f68857d0d2fa008eaed0f66a9d3b5, module_ursina$prefabs$ursfx, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_523f68857d0d2fa008eaed0f66a9d3b5->m_type_description == NULL);
    frame_523f68857d0d2fa008eaed0f66a9d3b5 = cache_frame_523f68857d0d2fa008eaed0f66a9d3b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_523f68857d0d2fa008eaed0f66a9d3b5);
    assert(Py_REFCNT(frame_523f68857d0d2fa008eaed0f66a9d3b5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[234];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[174]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[174], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_523f68857d0d2fa008eaed0f66a9d3b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_523f68857d0d2fa008eaed0f66a9d3b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_523f68857d0d2fa008eaed0f66a9d3b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_523f68857d0d2fa008eaed0f66a9d3b5,
        type_description_1,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_523f68857d0d2fa008eaed0f66a9d3b5 == cache_frame_523f68857d0d2fa008eaed0f66a9d3b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_523f68857d0d2fa008eaed0f66a9d3b5);
        cache_frame_523f68857d0d2fa008eaed0f66a9d3b5 = NULL;
    }

    assertFrameObject(frame_523f68857d0d2fa008eaed0f66a9d3b5);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__10_toggle_gui_input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__10_toggle_gui_input,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_523f68857d0d2fa008eaed0f66a9d3b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__1_ursfx(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__1_ursfx,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30411d4df8ef0959808bd531edfdff3e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__2___init__,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_037fce70aba8f282653770f249981ccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_338b613fafd3c2034c3aeeae417754a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_0874d3f41d6e1180f5ca0efdf5504473,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_87f32bb6feea49be672fcf68b6e8977c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__3_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__3_update,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_084206b7eb0a24fd6ffd1af17b29e97b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__4_input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__4_input,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_3ce121731c3142aa4e0b1f496db01e6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__5_copy_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__5_copy_code,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_43216d2f9a55561fa7d5908f2d879a88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__6_paste_code(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__6_paste_code,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_e718f376d838855e12a236ad920c77b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__7_recipe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__7_recipe,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_83a4e4ef162eff42ab055e549e06180c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__8_draw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__8_draw,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_04b585daf244d4b7825f5182f89899be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__9_play() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ursina$prefabs$ursfx$$$function__9_play,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_4c775b34f0b5dddf5d79cc6370247c41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_ursina$prefabs$ursfx,
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

function_impl_code functable_ursina$prefabs$ursfx[] = {
    impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__1_coin_sound,
    impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__2_drag,
    impl_ursina$prefabs$ursfx$$$function__2___init__$$$function__3_drop,
    impl_ursina$prefabs$ursfx$$$function__1_ursfx,
    impl_ursina$prefabs$ursfx$$$function__2___init__,
    impl_ursina$prefabs$ursfx$$$function__3_update,
    impl_ursina$prefabs$ursfx$$$function__4_input,
    impl_ursina$prefabs$ursfx$$$function__5_copy_code,
    impl_ursina$prefabs$ursfx$$$function__6_paste_code,
    impl_ursina$prefabs$ursfx$$$function__7_recipe,
    impl_ursina$prefabs$ursfx$$$function__8_draw,
    impl_ursina$prefabs$ursfx$$$function__9_play,
    impl_ursina$prefabs$ursfx$$$function__10_toggle_gui_input,
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

    function_impl_code *current = functable_ursina$prefabs$ursfx;
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

    if (offset > sizeof(functable_ursina$prefabs$ursfx) || offset < 0) {
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
        functable_ursina$prefabs$ursfx[offset],
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
        module_ursina$prefabs$ursfx,
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
PyObject *modulecode_ursina$prefabs$ursfx(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("ursina.prefabs.ursfx");

    // Store the module for future use.
    module_ursina$prefabs$ursfx = module;

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
        PRINT_STRING("ursina.prefabs.ursfx: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("ursina.prefabs.ursfx: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initursina$prefabs$ursfx\n");

    moduledict_ursina$prefabs$ursfx = MODULE_DICT(module_ursina$prefabs$ursfx);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ursina$prefabs$ursfx,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ursina$prefabs$ursfx,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[153]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ursina$prefabs$ursfx,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$prefabs$ursfx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$prefabs$ursfx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ursina$prefabs$ursfx);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_ursina$prefabs$ursfx);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_fbfe81c88e9d0e98e61056d20300fe9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_607b84046de7125720c3dee98a4758da_2;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_2);
    }
    frame_fbfe81c88e9d0e98e61056d20300fe9b = MAKE_MODULE_FRAME(codeobj_fbfe81c88e9d0e98e61056d20300fe9b, module_ursina$prefabs$ursfx);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fbfe81c88e9d0e98e61056d20300fe9b);
    assert(Py_REFCNT(frame_fbfe81c88e9d0e98e61056d20300fe9b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[239], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[240], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[242];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_ursina$prefabs$ursfx;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_ursina$prefabs$ursfx;
        tmp_fromlist_value_1 = mod_consts[243];
        tmp_level_value_1 = mod_consts[3];
        frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame.f_lineno = 1;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_ursina$prefabs$ursfx, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[36];
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[197];
            PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[3];
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[3];
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_defaults_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;


        tmp_assign_source_4 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__1_ursfx(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_5, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
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


            exception_lineno = 54;

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
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_8 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[244]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[244]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = mod_consts[245];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame.f_lineno = 54;
        tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[246]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[247];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[248];
        tmp_default_value_1 = mod_consts[249];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[248]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_11;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[251], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[245];
        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[252], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        frame_607b84046de7125720c3dee98a4758da_2 = MAKE_CLASS_FRAME(tstate, codeobj_607b84046de7125720c3dee98a4758da, module_ursina$prefabs$ursfx, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_607b84046de7125720c3dee98a4758da_2);
        assert(Py_REFCNT(frame_607b84046de7125720c3dee98a4758da_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__2___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__3_update();

        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__4_input();

        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__5_copy_code();

        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[131];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__6_paste_code(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = PyObject_GetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[260]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[260]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[260]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_1 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__7_recipe();

            frame_607b84046de7125720c3dee98a4758da_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[175], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__8_draw();

        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__9_play();

        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_607b84046de7125720c3dee98a4758da_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_607b84046de7125720c3dee98a4758da_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_607b84046de7125720c3dee98a4758da_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_607b84046de7125720c3dee98a4758da_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_607b84046de7125720c3dee98a4758da_2);

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


                exception_lineno = 54;

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
        tmp_res = PyObject_SetItem(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54, mod_consts[264], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[245];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame.f_lineno = 54;
            tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_12);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_11 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54);
        locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54 = NULL;
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

        Py_DECREF(locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54);
        locals_ursina$prefabs$ursfx$$$class__1_SynthGUI_54 = NULL;
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
        exception_lineno = 54;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_11);
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
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame.f_lineno = 276;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[265], 0), mod_consts[266]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_ursina$prefabs$ursfx$$$function__10_toggle_gui_input();

        UPDATE_STRING_DICT1(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)mod_consts[267]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[267]);
        }

        assert(!(tmp_kw_call_value_0_1 == NULL));
        frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame.f_lineno = 282;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[268]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fbfe81c88e9d0e98e61056d20300fe9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fbfe81c88e9d0e98e61056d20300fe9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fbfe81c88e9d0e98e61056d20300fe9b, exception_lineno);
    }



    assertFrameObject(frame_fbfe81c88e9d0e98e61056d20300fe9b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("ursina.prefabs.ursfx", false);

    Py_INCREF(module_ursina$prefabs$ursfx);
    return module_ursina$prefabs$ursfx;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$prefabs$ursfx, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("ursina$prefabs$ursfx", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
