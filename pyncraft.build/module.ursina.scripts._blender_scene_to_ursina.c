/* Generated code for Python module 'ursina.scripts._blender_scene_to_ursina'
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

/* The "module_ursina$scripts$_blender_scene_to_ursina" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ursina$scripts$_blender_scene_to_ursina;
PyDictObject *moduledict_ursina$scripts$_blender_scene_to_ursina;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[159];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[159];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("ursina.scripts._blender_scene_to_ursina"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 159; i++) {
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
void checkModuleConstants_ursina$scripts$_blender_scene_to_ursina(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 159; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7b0f51db48157de6a7ccd11729dbc107;
static PyCodeObject *codeobj_f9eed9e4dda61782b5526e113a9b23d6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[156]); CHECK_OBJECT(module_filename_obj);
    codeobj_7b0f51db48157de6a7ccd11729dbc107 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[157], NULL, 1, 0, 0);
    codeobj_f9eed9e4dda61782b5526e113a9b23d6 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


// The module function definitions.

#if 1
struct ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_locals {
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

static PyObject *ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_locals *generator_heap = (struct ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_7b0f51db48157de6a7ccd11729dbc107, module_ursina$scripts$_blender_scene_to_ursina, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 106;
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
        PyObject *tmp_args_element_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(generator_heap->var_e);
        tmp_args_element_value_1 = generator_heap->var_e;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 106;
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

static PyObject *MAKE_GENERATOR_ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_context,
        module_ursina$scripts$_blender_scene_to_ursina,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_7b0f51db48157de6a7ccd11729dbc107,
        closure,
        1,
#if 1
        sizeof(struct ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
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

function_impl_code functable_ursina$scripts$_blender_scene_to_ursina[] = {

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

    function_impl_code *current = functable_ursina$scripts$_blender_scene_to_ursina;
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

    if (offset > sizeof(functable_ursina$scripts$_blender_scene_to_ursina) || offset < 0) {
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
        functable_ursina$scripts$_blender_scene_to_ursina[offset],
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
        module_ursina$scripts$_blender_scene_to_ursina,
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
PyObject *modulecode_ursina$scripts$_blender_scene_to_ursina(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("ursina.scripts._blender_scene_to_ursina");

    // Store the module for future use.
    module_ursina$scripts$_blender_scene_to_ursina = module;

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
        PRINT_STRING("ursina.scripts._blender_scene_to_ursina: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("ursina.scripts._blender_scene_to_ursina: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initursina$scripts$_blender_scene_to_ursina\n");

    moduledict_ursina$scripts$_blender_scene_to_ursina = MODULE_DICT(module_ursina$scripts$_blender_scene_to_ursina);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ursina$scripts$_blender_scene_to_ursina,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ursina$scripts$_blender_scene_to_ursina,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ursina$scripts$_blender_scene_to_ursina,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$scripts$_blender_scene_to_ursina,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ursina$scripts$_blender_scene_to_ursina,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ursina$scripts$_blender_scene_to_ursina);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_ursina$scripts$_blender_scene_to_ursina);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_e = NULL;
    PyObject *outline_1_var_ob = NULL;
    PyObject *outline_2_var_col = NULL;
    PyObject *outline_3_var_e = NULL;
    PyObject *outline_4_var_data = NULL;
    PyObject *outline_5_var_e = NULL;
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
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_listcomp$genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_f9eed9e4dda61782b5526e113a9b23d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_inplace_orig;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
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
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_2);
    }
    frame_f9eed9e4dda61782b5526e113a9b23d6 = MAKE_MODULE_FRAME(codeobj_f9eed9e4dda61782b5526e113a9b23d6, module_ursina$scripts$_blender_scene_to_ursina);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9eed9e4dda61782b5526e113a9b23d6);
    assert(Py_REFCNT(frame_f9eed9e4dda61782b5526e113a9b23d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[10];
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[13];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[14];
        tmp_level_value_2 = mod_consts[10];
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina,
                mod_consts[15],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[16];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[17];
        tmp_level_value_3 = mod_consts[10];
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina,
                mod_consts[18],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_2);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[19];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_ursina$scripts$_blender_scene_to_ursina;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[10];
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[20]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_subscript_value_1 = mod_consts[21];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 13;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 13;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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


                    exception_lineno = 13;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 13;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[20]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[25];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 4);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[20]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[27];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 5);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_9;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_19;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 16;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_21 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_e;
                outline_0_var_e = tmp_assign_source_21;
                Py_INCREF(outline_0_var_e);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            CHECK_OBJECT(outline_0_var_e);
            tmp_expression_value_10 = outline_0_var_e;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[29]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 16;
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[30]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_call_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 16;

                goto try_except_handler_4;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_e);
            tmp_append_value_1 = outline_0_var_e;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_4;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_expression_value_8 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_expression_value_8);
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
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

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
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_e);
        outline_0_var_e = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_subscript_value_4 = mod_consts[10];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[31];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[32]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[33]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 18;
        tmp_expression_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[34]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_22);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_3 != NULL);
        tmp_args_element_value_2 = mod_consts[37];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_23);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_14;
        tmp_cmp_expr_left_1 = mod_consts[40];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[20]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_24) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_24);
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        tmp_iadd_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_2 == NULL)) {
            tmp_iadd_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_2 = mod_consts[42];
        tmp_inplace_orig = tmp_iadd_expr_left_2;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = tmp_iadd_expr_left_2;
        if (tmp_inplace_orig != tmp_assign_source_25) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_25);
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[43]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 39;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[44]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_26);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_3;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[46]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[47]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[48]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 40;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_27;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_5;
            }
            tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[32]);
            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_5;
            }
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[51]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_5;
            }
            tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_5;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_29;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 41;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_ob;
                outline_1_var_ob = tmp_assign_source_31;
                Py_INCREF(outline_1_var_ob);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_21;
            CHECK_OBJECT(outline_1_var_ob);
            tmp_expression_value_21 = outline_1_var_ob;
            tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[52]);
            if (tmp_cmp_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_6;
            }
            tmp_cmp_expr_right_2 = mod_consts[53];
            tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            Py_DECREF(tmp_cmp_expr_left_2);
            if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_ob);
            tmp_append_value_2 = outline_1_var_ob;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_6;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_27 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_27);
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
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_ob);
        outline_1_var_ob = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_ob);
        outline_1_var_ob = NULL;
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
        exception_lineno = 41;
        goto frame_exception_exit_1;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_iter_arg_4 == NULL)) {
            tmp_iter_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        assert(!(tmp_iter_arg_4 == NULL));
        tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_33;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 44;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_35 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_35);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_ass_subvalue_1 == NULL));
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[32]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[56]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[57]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 48;
        tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_36;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_37 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 48;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_2__iter_value;
        tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 48;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 48;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

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


                    exception_lineno = 48;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 48;
            goto try_except_handler_10;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_41 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_41);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_42 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_42);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_8;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[59]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_8;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 49;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 49;
        tmp_expression_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_8;
        }
        tmp_assign_source_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[32]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 52;
        tmp_assign_source_44 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[61]);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_44);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        assert(!(tmp_expression_value_27 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[63]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_8;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 53;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 53;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[46]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[64]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[65]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_subscript_value_6 = mod_consts[66];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 54;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[67];
        tmp_kw_call_dict_value_2_1 = mod_consts[67];
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 54;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 55;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[69]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_8;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[70]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_8;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 56;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 56;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_8;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_8;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 57;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[71]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        tmp_iter_arg_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[77]);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        tmp_assign_source_50 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_5 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 66;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_52 = tmp_for_loop_3__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_52);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_11;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[79]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_11;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 67;

            goto try_except_handler_11;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[80]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 67;

            goto try_except_handler_11;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 67;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;

        goto try_except_handler_11;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_8;
        tmp_iter_arg_8 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_iter_arg_8 == NULL)) {
            tmp_iter_arg_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        tmp_assign_source_53 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_6 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_54 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_54 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 69;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_55 = tmp_for_loop_4__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[80]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_subscript_value_7 == NULL)) {
            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_subscript_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_36);

            exception_lineno = 70;

            goto try_except_handler_12;
        }
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_56);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[83]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_12 != NULL);
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[84]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_subscript_value_8 = mod_consts[10];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 71;

            goto try_except_handler_12;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 71;

            goto try_except_handler_12;
        }
        tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_args_element_value_14;
            PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_1);
            tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_13 != NULL);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[84]);
            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_9 = mod_consts[85];
            tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_9, 2);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_args_element_value_11);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_8, 1, tmp_tuple_element_1);
            tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_14 != NULL);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[84]);
            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_10 = mod_consts[86];
            tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_10, 1);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_13);

                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
            }

            Py_DECREF(tmp_args_element_value_13);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_8, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_8);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 71;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_10);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 69;

        goto try_except_handler_12;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_7;
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

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_45;
        tmp_cmp_expr_left_3 = mod_consts[87];
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[20]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_8;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_8;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_57;
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_13;
            }
            tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[88]);
            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_13;
            }
            tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[89]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_13;
            }
            tmp_iter_arg_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[32]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_iter_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_13;
            }
            tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
            Py_DECREF(tmp_iter_arg_9);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp_3__$0;
                tmp_listcomp_3__$0 = tmp_assign_source_58;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_3__contraction;
                tmp_listcomp_3__contraction = tmp_assign_source_59;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_60;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_7 = tmp_listcomp_3__$0;
            tmp_assign_source_60 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_60 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 75;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_60;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_61;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_61 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_col;
                outline_2_var_col = tmp_assign_source_61;
                Py_INCREF(outline_2_var_col);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_62;
                PyObject *tmp_iter_arg_10;
                PyObject *tmp_expression_value_49;
                CHECK_OBJECT(outline_2_var_col);
                tmp_expression_value_49 = outline_2_var_col;
                tmp_iter_arg_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[90]);
                if (tmp_iter_arg_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto try_except_handler_15;
                }
                tmp_assign_source_62 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
                Py_DECREF(tmp_iter_arg_10);
                if (tmp_assign_source_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_62;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_63;
                tmp_assign_source_63 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_63;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_8:;
            {
                PyObject *tmp_next_source_8;
                PyObject *tmp_assign_source_64;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_8 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_64 = ITERATOR_NEXT(tmp_next_source_8);
                if (tmp_assign_source_64 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_8;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        exception_lineno = 76;
                        goto try_except_handler_16;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_64;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_65;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_65 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_3_var_e;
                    outline_3_var_e = tmp_assign_source_65;
                    Py_INCREF(outline_3_var_e);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_args_element_value_16;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_4 = tmp_listcomp$listcomp_1__contraction;
                tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[0]);
                assert(tmp_called_value_15 != NULL);
                CHECK_OBJECT(outline_3_var_e);
                tmp_args_element_value_15 = outline_3_var_e;
                tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

                if (unlikely(tmp_args_element_value_16 == NULL)) {
                    tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
                }

                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto try_except_handler_16;
                }
                frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 76;
                {
                    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                    tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
                }

                if (tmp_append_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto try_except_handler_16;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;

                    goto try_except_handler_16;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto try_except_handler_16;
            }
            goto loop_start_8;
            loop_end_8:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_append_value_3 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_append_value_3);
            goto try_return_handler_16;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_16:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto try_return_handler_15;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_15;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            Py_XDECREF(outline_3_var_e);
            outline_3_var_e = NULL;
            goto outline_result_4;
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

            Py_XDECREF(outline_3_var_e);
            outline_3_var_e = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto outline_exception_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_4:;
            exception_lineno = 76;
            goto try_except_handler_14;
            outline_result_4:;
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_14;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_57 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_13;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_2_var_col);
        outline_2_var_col = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_col);
        outline_2_var_col = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 75;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iter_arg_11;
        tmp_iter_arg_11 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_iter_arg_11 == NULL)) {
            tmp_iter_arg_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_8;
        }
        tmp_assign_source_66 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_9 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_67 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_67 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 79;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_68 = tmp_for_loop_5__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_68);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_17;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[83]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_17;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 80;

            goto try_except_handler_17;
        }
        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_subscript_value_11 == NULL)) {
            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_subscript_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 80;

            goto try_except_handler_17;
        }
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_11);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 80;

            goto try_except_handler_17;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 80;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_11);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 79;

        goto try_except_handler_17;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_52;
        tmp_cmp_expr_left_4 = mod_consts[92];
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[20]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iter_arg_12;
        tmp_iter_arg_12 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_iter_arg_12 == NULL)) {
            tmp_iter_arg_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_8;
        }
        tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_10 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_70 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_70 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 86;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_71 = tmp_for_loop_6__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_12;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[80]);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_subscript_value_12 == NULL)) {
            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_subscript_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_53);

            exception_lineno = 87;

            goto try_except_handler_18;
        }
        tmp_assign_source_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_72);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_18;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[83]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_18;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 88;

            goto try_except_handler_18;
        }
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[93]);
        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 88;

            goto try_except_handler_18;
        }
        tmp_subscript_value_13 = mod_consts[10];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 88;

            goto try_except_handler_18;
        }
        tmp_args_element_value_18 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_15;
            PyTuple_SET_ITEM(tmp_args_element_value_18, 0, tmp_tuple_element_2);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[93]);
            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_14 = mod_consts[85];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_14, 2);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_18, 1, tmp_tuple_element_2);
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[93]);
            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_15 = mod_consts[86];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_15, 1);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_18, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_18);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 88;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_12);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 86;

        goto try_except_handler_18;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_xrange_step_1;
        tmp_xrange_low_1 = mod_consts[10];
        tmp_len_arg_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_len_arg_1 == NULL)) {
            tmp_len_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_xrange_step_1 = mod_consts[95];
        tmp_iter_arg_13 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_assign_source_74 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_11 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_75 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_75 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 91;
                goto try_except_handler_19;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_76 = tmp_for_loop_7__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_18 != NULL);
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_subscript_value_16 == NULL)) {
            tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        assert(!(tmp_subscript_value_16 == NULL));
        tmp_expression_value_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_16);
        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_subscript_value_17 = mod_consts[10];
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_62, tmp_subscript_value_17, 0);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_sum_sequence_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_subscript_value_21;
            PyTuple_SET_ITEM(tmp_sum_sequence_1, 0, tmp_tuple_element_4);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_add_expr_left_1 == NULL)) {
                tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_add_expr_right_1 = mod_consts[86];
            tmp_subscript_value_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_19 = mod_consts[10];
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_64, tmp_subscript_value_19, 0);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_sum_sequence_1, 1, tmp_tuple_element_4);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_add_expr_left_2 == NULL)) {
                tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_add_expr_right_2 = mod_consts[85];
            tmp_subscript_value_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_subscript_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_expression_value_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_20);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_21 = mod_consts[10];
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_21, 0);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_sum_sequence_1, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_sum_sequence_1);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_truediv_expr_left_1 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_truediv_expr_right_1 = mod_consts[95];
        tmp_args_element_value_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 93;

            goto try_except_handler_19;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_19;
        }
        tmp_assign_source_77 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_sum_sequence_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_sum_sequence_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_args_element_value_24;
            PyTuple_SET_ITEM(tmp_assign_source_77, 0, tmp_tuple_element_3);
            tmp_called_value_19 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_19 != NULL);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_expression_value_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_22);
            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_23 = mod_consts[86];
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_23, 1);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_sum_sequence_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_70;
                PyObject *tmp_expression_value_71;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_add_expr_left_3;
                PyObject *tmp_add_expr_right_3;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_72;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_add_expr_left_4;
                PyObject *tmp_add_expr_right_4;
                PyObject *tmp_subscript_value_27;
                PyTuple_SET_ITEM(tmp_sum_sequence_2, 0, tmp_tuple_element_5);
                tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_71 == NULL)) {
                    tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_expression_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

                if (unlikely(tmp_add_expr_left_3 == NULL)) {
                    tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                }

                if (tmp_add_expr_left_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_add_expr_right_3 = mod_consts[86];
                tmp_subscript_value_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
                if (tmp_subscript_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_expression_value_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_24);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_expression_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_25 = mod_consts[86];
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_25, 1);
                Py_DECREF(tmp_expression_value_70);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_sum_sequence_2, 1, tmp_tuple_element_5);
                tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_73 == NULL)) {
                    tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_expression_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

                if (unlikely(tmp_add_expr_left_4 == NULL)) {
                    tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                }

                if (tmp_add_expr_left_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_add_expr_right_4 = mod_consts[85];
                tmp_subscript_value_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
                if (tmp_subscript_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_expression_value_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_26);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_expression_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_27 = mod_consts[86];
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_27, 1);
                Py_DECREF(tmp_expression_value_72);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_sum_sequence_2, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_sum_sequence_2);
            goto tuple_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_truediv_expr_left_2 = BUILTIN_SUM1(tstate, tmp_sum_sequence_2);
            Py_DECREF(tmp_sum_sequence_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_truediv_expr_right_2 = mod_consts[95];
            tmp_args_element_value_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
            }

            Py_DECREF(tmp_args_element_value_21);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_77, 1, tmp_tuple_element_3);
            tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_20 != NULL);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_expression_value_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_28);
            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_29 = mod_consts[85];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_74, tmp_subscript_value_29, 2);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_sum_sequence_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_76;
                PyObject *tmp_expression_value_77;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_add_expr_left_5;
                PyObject *tmp_add_expr_right_5;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_add_expr_left_6;
                PyObject *tmp_add_expr_right_6;
                PyObject *tmp_subscript_value_33;
                PyTuple_SET_ITEM(tmp_sum_sequence_3, 0, tmp_tuple_element_6);
                tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_77 == NULL)) {
                    tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_expression_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_add_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

                if (unlikely(tmp_add_expr_left_5 == NULL)) {
                    tmp_add_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                }

                if (tmp_add_expr_left_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_add_expr_right_5 = mod_consts[86];
                tmp_subscript_value_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
                if (tmp_subscript_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_expression_value_76 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_30);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_expression_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_subscript_value_31 = mod_consts[85];
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_76, tmp_subscript_value_31, 2);
                Py_DECREF(tmp_expression_value_76);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_sum_sequence_3, 1, tmp_tuple_element_6);
                tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_expression_value_79 == NULL)) {
                    tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_expression_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[96]);

                if (unlikely(tmp_add_expr_left_6 == NULL)) {
                    tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                }

                if (tmp_add_expr_left_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_add_expr_right_6 = mod_consts[85];
                tmp_subscript_value_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
                if (tmp_subscript_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_expression_value_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_32);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_expression_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                tmp_subscript_value_33 = mod_consts[85];
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_78, tmp_subscript_value_33, 2);
                Py_DECREF(tmp_expression_value_78);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_sum_sequence_3, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_sum_sequence_3);
            goto tuple_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_truediv_expr_left_3 = BUILTIN_SUM1(tstate, tmp_sum_sequence_3);
            Py_DECREF(tmp_sum_sequence_3);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_truediv_expr_right_3 = mod_consts[95];
            tmp_args_element_value_23 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_23);

                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
            }

            Py_DECREF(tmp_args_element_value_23);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_77, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_77);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iter_arg_14;
        tmp_iter_arg_14 = mod_consts[98];
        tmp_assign_source_78 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_14);
        assert(!(tmp_assign_source_78 == NULL));
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_12 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_79 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_79 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 97;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_80 = tmp_for_loop_8__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_80);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_20;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[83]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_20;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 98;

            goto try_except_handler_20;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 98;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;

        goto try_except_handler_20;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_19;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 91;

        goto try_except_handler_19;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assign_source_81 == NULL)) {
            tmp_assign_source_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_81);
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_81;
        tmp_cmp_expr_left_5 = mod_consts[100];
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[20]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_8;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_8;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[101]);
        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        tmp_assign_source_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[102]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_82);
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_84;
        bool tmp_tmp_and_right_value_1_cbool_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        assert(!(tmp_mvar_value_1 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        assert(!(tmp_expression_value_84 == NULL));
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[32]);
        if (tmp_len_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_6 = 0;
        tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_83;
        // Tried code:
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_iter_arg_15;
            PyObject *tmp_expression_value_85;
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_21;
            }
            tmp_iter_arg_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[32]);
            if (tmp_iter_arg_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_21;
            }
            tmp_assign_source_84 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
            Py_DECREF(tmp_iter_arg_15);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_21;
            }
            {
                PyObject *old = tmp_listcomp_4__$0;
                tmp_listcomp_4__$0 = tmp_assign_source_84;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_85;
            tmp_assign_source_85 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_4__contraction;
                tmp_listcomp_4__contraction = tmp_assign_source_85;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_13:;
        {
            PyObject *tmp_next_source_13;
            PyObject *tmp_assign_source_86;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_13 = tmp_listcomp_4__$0;
            tmp_assign_source_86 = ITERATOR_NEXT(tmp_next_source_13);
            if (tmp_assign_source_86 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_13;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 106;
                    goto try_except_handler_22;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_86;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_87;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_87 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_4_var_data;
                outline_4_var_data = tmp_assign_source_87;
                Py_INCREF(outline_4_var_data);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_tuple_arg_1;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_5 = tmp_listcomp_4__contraction;
            {
                PyObject *tmp_assign_source_88;
                PyObject *tmp_iter_arg_16;
                PyObject *tmp_expression_value_86;
                CHECK_OBJECT(outline_4_var_data);
                tmp_expression_value_86 = outline_4_var_data;
                tmp_iter_arg_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[104]);
                if (tmp_iter_arg_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;

                    goto try_except_handler_22;
                }
                tmp_assign_source_88 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
                Py_DECREF(tmp_iter_arg_16);
                if (tmp_assign_source_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;

                    goto try_except_handler_22;
                }
                {
                    PyObject *old = tmp_listcomp$genexpr_1__$0;
                    tmp_listcomp$genexpr_1__$0 = tmp_assign_source_88;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                struct Nuitka_CellObject *tmp_closure_1[1];

                tmp_closure_1[0] = Nuitka_Cell_New0(tmp_listcomp$genexpr_1__$0);

                tmp_tuple_arg_1 = MAKE_GENERATOR_ursina$scripts$_blender_scene_to_ursina$$$genexpr__1_genexpr(tmp_closure_1);

                goto try_return_handler_23;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_23:;
            CHECK_OBJECT(tmp_listcomp$genexpr_1__$0);
            Py_DECREF(tmp_listcomp$genexpr_1__$0);
            tmp_listcomp$genexpr_1__$0 = NULL;
            goto outline_result_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_6:;
            tmp_append_value_5 = PySequence_Tuple(tmp_tuple_arg_1);
            Py_DECREF(tmp_tuple_arg_1);
            if (tmp_append_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_22;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_22;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_22;
        }
        goto loop_start_13;
        loop_end_13:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_83 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_XDECREF(outline_4_var_data);
        outline_4_var_data = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_data);
        outline_4_var_data = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 106;
        goto try_except_handler_8;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_83);
    }
    branch_no_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_7;
        tmp_iadd_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_3 == NULL)) {
            tmp_iadd_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        tmp_tuple_element_7 = mod_consts[105];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_unicode_arg_2;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_unicode_arg_3;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_unicode_arg_4;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_7);
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[56]);
            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_7;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[106]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_7;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 111;
            tmp_format_value_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_22, mod_consts[107]);

            Py_DECREF(tmp_called_value_22);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_7;
            }
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_7);
            tmp_unicode_arg_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_unicode_arg_1 == NULL)) {
                tmp_unicode_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            if (tmp_unicode_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_89 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_7;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[106]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_7;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 112;
            tmp_format_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_23, mod_consts[109]);

            Py_DECREF(tmp_called_value_23);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_7;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[110];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_7);
            tmp_unicode_arg_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_unicode_arg_2 == NULL)) {
                tmp_unicode_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
            }

            if (tmp_unicode_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_90 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_7;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[106]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_7;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 113;
            tmp_format_value_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_24, mod_consts[109]);

            Py_DECREF(tmp_called_value_24);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_7;
            }
            tmp_format_spec_3 = mod_consts[38];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[111];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_7);
            tmp_unicode_arg_3 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_unicode_arg_3 == NULL)) {
                tmp_unicode_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            if (tmp_unicode_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_91 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[106]);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 114;
            tmp_format_value_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_25, mod_consts[109]);

            Py_DECREF(tmp_called_value_25);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            tmp_format_spec_4 = mod_consts[38];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_7);
            tmp_unicode_arg_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_unicode_arg_4 == NULL)) {
                tmp_unicode_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_unicode_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_92 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_7;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[106]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_7;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 115;
            tmp_format_value_5 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_26, mod_consts[109]);

            Py_DECREF(tmp_called_value_26);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_7;
            }
            tmp_format_spec_5 = mod_consts[38];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[113];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_iadd_expr_right_3 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        tmp_inplace_orig = tmp_iadd_expr_left_3;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_8;
        }
        tmp_assign_source_89 = tmp_iadd_expr_left_3;
        if (tmp_inplace_orig != tmp_assign_source_89) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_89);
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
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
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        tmp_iadd_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_4 == NULL)) {
            tmp_iadd_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_4 = mod_consts[114];
        tmp_inplace_orig = tmp_iadd_expr_left_4;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = tmp_iadd_expr_left_4;
        if (tmp_inplace_orig != tmp_assign_source_90) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_90);
        }
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_93;
        tmp_cmp_expr_left_7 = mod_consts[40];
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[20]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_14;
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_27 != NULL);
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 122;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[115]);

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        tmp_open_filename_1 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_open_filename_1 == NULL)) {
            tmp_open_filename_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_open_filename_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        tmp_open_mode_1 = mod_consts[116];
        tmp_assign_source_91 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_94 = tmp_with_1__source;
        tmp_called_value_28 = LOOKUP_SPECIAL(tstate, tmp_expression_value_94, mod_consts[117]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 123;
        tmp_assign_source_92 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
        Py_DECREF(tmp_called_value_28);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_expression_value_95;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_95 = tmp_with_1__source;
        tmp_assign_source_93 = LOOKUP_SPECIAL(tstate, tmp_expression_value_95, mod_consts[118]);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_93;
    }
    {
        nuitka_bool tmp_assign_source_94;
        tmp_assign_source_94 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_95 = tmp_with_1__enter;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_95);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_26;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        assert(!(tmp_expression_value_96 == NULL));
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[120]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_26;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 124;

            goto try_except_handler_26;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 124;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_15);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_23 == NULL) {
        exception_keeper_tb_23 = MAKE_TRACEBACK(frame_f9eed9e4dda61782b5526e113a9b23d6, exception_keeper_lineno_23);
    } else if (exception_keeper_lineno_23 != 0) {
        exception_keeper_tb_23 = ADD_TRACEBACK(exception_keeper_tb_23, frame_f9eed9e4dda61782b5526e113a9b23d6, exception_keeper_lineno_23);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_23, &exception_keeper_value_23, &exception_keeper_tb_23);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_assign_source_96;
        tmp_assign_source_96 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_30 = tmp_with_1__exit;
        tmp_args_element_value_27 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_28 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_29 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_27;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_27;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 123;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame) frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_27;
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 123;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame) frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_27;
    branch_end_9:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_25;
    // End of try:
    try_end_14:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_1__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_31 = tmp_with_1__exit;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 123;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_31, mod_consts[121]);

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_25);
            Py_XDECREF(exception_keeper_value_25);
            Py_XDECREF(exception_keeper_tb_25);

            exception_lineno = 123;

            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_11:;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_24;
    // End of try:
    try_end_15:;
    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_1__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_32 = tmp_with_1__exit;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 123;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_32, mod_consts[121]);

        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_no_12:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        tmp_iadd_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_5 == NULL)) {
            tmp_iadd_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_5 = mod_consts[122];
        tmp_inplace_orig = tmp_iadd_expr_left_5;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = tmp_iadd_expr_left_5;
        if (tmp_inplace_orig != tmp_assign_source_97) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_97);
        }
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        tmp_iadd_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_6 == NULL)) {
            tmp_iadd_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_iadd_expr_left_6 == NULL));
        tmp_iadd_expr_right_6 = mod_consts[123];
        tmp_inplace_orig = tmp_iadd_expr_left_6;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_98 = tmp_iadd_expr_left_6;
        if (tmp_inplace_orig != tmp_assign_source_98) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_98);
        }
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_iter_arg_17;
        tmp_iter_arg_17 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_iter_arg_17 == NULL)) {
            tmp_iter_arg_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_iter_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_9__for_iterator == NULL);
        tmp_for_loop_9__for_iterator = tmp_assign_source_99;
    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_14;
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT(tmp_for_loop_9__for_iterator);
        tmp_next_source_14 = tmp_for_loop_9__for_iterator;
        tmp_assign_source_100 = ITERATOR_NEXT(tmp_next_source_14);
        if (tmp_assign_source_100 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 132;
                goto try_except_handler_28;
            }
        }

        {
            PyObject *old = tmp_for_loop_9__iter_value;
            tmp_for_loop_9__iter_value = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_for_loop_9__iter_value);
        tmp_assign_source_101 = tmp_for_loop_9__iter_value;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_101);
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_instance_5;
        tmp_cmp_expr_left_11 = mod_consts[124];
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[20]);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 133;
        tmp_cmp_expr_left_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[125]);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        tmp_cmp_expr_right_12 = Py_True;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_28;
        }
        tmp_condition_result_13 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_13 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    goto loop_start_14;
    branch_no_13:;
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_18;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_28;
        }
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[46]);
        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_28;
        }
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[47]);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_28;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[126]);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_28;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 137;
        tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[127], 0), mod_consts[128]);
        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_102;
        // Tried code:
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_iter_arg_18;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_expression_value_101;
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_29;
            }
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[129]);
            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_29;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 138;
            tmp_iter_arg_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[130]);
            Py_DECREF(tmp_called_instance_6);
            if (tmp_iter_arg_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_29;
            }
            tmp_assign_source_103 = MAKE_ITERATOR(tstate, tmp_iter_arg_18);
            Py_DECREF(tmp_iter_arg_18);
            if (tmp_assign_source_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_29;
            }
            {
                PyObject *old = tmp_listcomp_5__$0;
                tmp_listcomp_5__$0 = tmp_assign_source_103;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_104;
            tmp_assign_source_104 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_5__contraction;
                tmp_listcomp_5__contraction = tmp_assign_source_104;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_15:;
        {
            PyObject *tmp_next_source_15;
            PyObject *tmp_assign_source_105;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_15 = tmp_listcomp_5__$0;
            tmp_assign_source_105 = ITERATOR_NEXT(tmp_next_source_15);
            if (tmp_assign_source_105 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_15;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 138;
                    goto try_except_handler_30;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_105;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_106;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_106 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_5_var_e;
                outline_5_var_e = tmp_assign_source_106;
                Py_INCREF(outline_5_var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_30;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_6 = tmp_listcomp_5__contraction;
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_30;
            }
            CHECK_OBJECT(outline_5_var_e);
            tmp_args_element_value_30 = outline_5_var_e;
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 138;
            tmp_append_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_30);
            if (tmp_append_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_30;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto try_except_handler_30;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_30;
        }
        goto loop_start_15;
        loop_end_15:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_102 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_102);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_XDECREF(outline_5_var_e);
        outline_5_var_e = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_e);
        outline_5_var_e = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 138;
        goto try_except_handler_28;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_8;
        tmp_iadd_expr_left_7 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_7 == NULL)) {
            tmp_iadd_expr_left_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_28;
        }
        tmp_tuple_element_8 = mod_consts[132];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(23);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_format_spec_9;
            PyObject *tmp_format_value_10;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_format_spec_11;
            PyObject *tmp_format_value_12;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_format_spec_12;
            PyObject *tmp_format_value_13;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_format_spec_13;
            PyObject *tmp_format_value_14;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_format_spec_14;
            PyObject *tmp_format_value_15;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_format_spec_16;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_8);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[56]);
            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_8;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[106]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_8;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 141;
            tmp_format_value_6 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_35, mod_consts[107]);

            Py_DECREF(tmp_called_value_35);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_6 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[133];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_8);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_8;
            }
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[56]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_7 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[134];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_8);
            tmp_called_value_36 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_36 != NULL);
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[135]);
            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[136]);
            Py_DECREF(tmp_expression_value_105);
            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_32 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_format_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
            }

            Py_DECREF(tmp_args_element_value_31);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_8 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_8);
            tmp_called_value_37 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_37 != NULL);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[135]);
            if (tmp_expression_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[138]);
            Py_DECREF(tmp_expression_value_107);
            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_34 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_format_value_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
            }

            Py_DECREF(tmp_args_element_value_33);
            if (tmp_format_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_9 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 7, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 8, tmp_tuple_element_8);
            tmp_called_value_38 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_38 != NULL);
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[135]);
            if (tmp_expression_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[139]);
            Py_DECREF(tmp_expression_value_109);
            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_36 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
                tmp_format_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
            }

            Py_DECREF(tmp_args_element_value_35);
            if (tmp_format_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_10 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            Py_DECREF(tmp_format_value_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 9, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 10, tmp_tuple_element_8);
            tmp_called_value_39 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_39 != NULL);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_34 = mod_consts[10];
            tmp_operand_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_111, tmp_subscript_value_34, 0);
            if (tmp_operand_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_37 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
            Py_DECREF(tmp_operand_value_2);
            if (tmp_args_element_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_38 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_format_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
            }

            Py_DECREF(tmp_args_element_value_37);
            if (tmp_format_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_11 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
            Py_DECREF(tmp_format_value_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 11, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 12, tmp_tuple_element_8);
            tmp_called_value_40 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_40 != NULL);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_35 = mod_consts[85];
            tmp_operand_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_112, tmp_subscript_value_35, 2);
            if (tmp_operand_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_39 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_40 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
                tmp_format_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_args_element_value_39);
            if (tmp_format_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_12 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            Py_DECREF(tmp_format_value_12);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 13, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 14, tmp_tuple_element_8);
            tmp_called_value_41 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_41 != NULL);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_36 = mod_consts[86];
            tmp_args_element_value_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_113, tmp_subscript_value_36, 1);
            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_42 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_format_value_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_41, call_args);
            }

            Py_DECREF(tmp_args_element_value_41);
            if (tmp_format_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_13 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
            Py_DECREF(tmp_format_value_13);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 15, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[141];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 16, tmp_tuple_element_8);
            tmp_called_value_42 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_42 != NULL);
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[142]);
            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[136]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_args_element_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_44 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
                tmp_format_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
            }

            Py_DECREF(tmp_args_element_value_43);
            if (tmp_format_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_14 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 17, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 18, tmp_tuple_element_8);
            tmp_called_value_43 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_43 != NULL);
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[142]);
            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[138]);
            Py_DECREF(tmp_expression_value_116);
            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_46 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
                tmp_format_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
            }

            Py_DECREF(tmp_args_element_value_45);
            if (tmp_format_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_15 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
            Py_DECREF(tmp_format_value_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 19, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 20, tmp_tuple_element_8);
            tmp_called_value_44 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_44 != NULL);
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[142]);
            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[139]);
            Py_DECREF(tmp_expression_value_118);
            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_48 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                tmp_format_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
            }

            Py_DECREF(tmp_args_element_value_47);
            if (tmp_format_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            tmp_format_spec_16 = mod_consts[38];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_16, tmp_format_spec_16);
            Py_DECREF(tmp_format_value_16);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 21, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[143];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 22, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_iadd_expr_right_7 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_iadd_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_28;
        }
        tmp_inplace_orig = tmp_iadd_expr_left_7;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        Py_DECREF(tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_28;
        }
        tmp_assign_source_107 = tmp_iadd_expr_left_7;
        if (tmp_inplace_orig != tmp_assign_source_107) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_107);
        }
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_9;
        tmp_iadd_expr_left_8 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_8 == NULL)) {
            tmp_iadd_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_iadd_expr_left_8 == NULL));
        tmp_tuple_element_9 = mod_consts[144];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_17;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_9);
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[32]);
            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[56]);
            Py_DECREF(tmp_expression_value_121);
            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[106]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 149;
            tmp_format_value_17 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_45, mod_consts[107]);

            Py_DECREF(tmp_called_value_45);
            if (tmp_format_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            tmp_format_spec_17 = mod_consts[38];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_17, tmp_format_spec_17);
            Py_DECREF(tmp_format_value_17);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[145];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_iadd_expr_right_8 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_iadd_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_28;
        }
        tmp_inplace_orig = tmp_iadd_expr_left_8;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        Py_DECREF(tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_28;
        }
        tmp_assign_source_108 = tmp_iadd_expr_left_8;
        if (tmp_inplace_orig != tmp_assign_source_108) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_108);
        }
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_28;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[146]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_28;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 152;

            goto try_except_handler_28;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_expression_value_125;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        tmp_expression_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[146]);
        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        tmp_assign_source_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[147]);
        Py_DECREF(tmp_expression_value_124);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_10;
        tmp_iadd_expr_left_9 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_9 == NULL)) {
            tmp_iadd_expr_left_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_28;
        }
        tmp_tuple_element_10 = mod_consts[149];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_format_value_18;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_format_spec_18;
            PyObject *tmp_format_value_19;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_format_spec_19;
            PyObject *tmp_format_value_20;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_format_spec_20;
            PyObject *tmp_format_value_21;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_format_spec_21;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_10);
            tmp_called_value_46 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_46 != NULL);
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            assert(!(tmp_expression_value_126 == NULL));
            tmp_subscript_value_37 = mod_consts[10];
            tmp_args_element_value_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_126, tmp_subscript_value_37, 0);
            if (tmp_args_element_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_args_element_value_50 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_format_value_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_46, call_args);
            }

            Py_DECREF(tmp_args_element_value_49);
            if (tmp_format_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_format_spec_18 = mod_consts[38];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_18, tmp_format_spec_18);
            Py_DECREF(tmp_format_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_10);
            tmp_called_value_47 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_47 != NULL);
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_38 = mod_consts[86];
            tmp_args_element_value_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_38, 1);
            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_args_element_value_52 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
                tmp_format_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_47, call_args);
            }

            Py_DECREF(tmp_args_element_value_51);
            if (tmp_format_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_format_spec_19 = mod_consts[38];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_19, tmp_format_spec_19);
            Py_DECREF(tmp_format_value_19);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_10);
            tmp_called_value_48 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_48 != NULL);
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_39 = mod_consts[85];
            tmp_args_element_value_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_128, tmp_subscript_value_39, 2);
            if (tmp_args_element_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_args_element_value_54 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
                tmp_format_value_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
            }

            Py_DECREF(tmp_args_element_value_53);
            if (tmp_format_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_format_spec_20 = mod_consts[38];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_20, tmp_format_spec_20);
            Py_DECREF(tmp_format_value_20);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 5, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 6, tmp_tuple_element_10);
            tmp_called_value_49 = LOOKUP_BUILTIN(mod_consts[0]);
            assert(tmp_called_value_49 != NULL);
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_expression_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_40 = mod_consts[95];
            tmp_args_element_value_55 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_129, tmp_subscript_value_40, 3);
            if (tmp_args_element_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_args_element_value_56 = mod_consts[27];
            frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
                tmp_format_value_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
            }

            Py_DECREF(tmp_args_element_value_55);
            if (tmp_format_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            tmp_format_spec_21 = mod_consts[38];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_21, tmp_format_spec_21);
            Py_DECREF(tmp_format_value_21);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 7, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 8, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_iadd_expr_right_9 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_iadd_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_28;
        }
        tmp_inplace_orig = tmp_iadd_expr_left_9;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        Py_DECREF(tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_28;
        }
        tmp_assign_source_110 = tmp_iadd_expr_left_9;
        if (tmp_inplace_orig != tmp_assign_source_110) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_110);
        }
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        tmp_iadd_expr_left_10 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_10 == NULL)) {
            tmp_iadd_expr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_28;
        }
        tmp_iadd_expr_right_10 = mod_consts[151];
        tmp_inplace_orig = tmp_iadd_expr_left_10;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_28;
        }
        tmp_assign_source_111 = tmp_iadd_expr_left_10;
        if (tmp_inplace_orig != tmp_assign_source_111) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_111);
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;

        goto try_except_handler_28;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        tmp_iadd_expr_left_11 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_11 == NULL)) {
            tmp_iadd_expr_left_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_iadd_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_11 = mod_consts[152];
        tmp_inplace_orig = tmp_iadd_expr_left_11;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_112 = tmp_iadd_expr_left_11;
        if (tmp_inplace_orig != tmp_assign_source_112) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_112);
        }
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        tmp_iadd_expr_left_12 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_12 == NULL)) {
            tmp_iadd_expr_left_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_iadd_expr_left_12 == NULL));
        tmp_iadd_expr_right_12 = mod_consts[153];
        tmp_inplace_orig = tmp_iadd_expr_left_12;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_113 = tmp_iadd_expr_left_12;
        if (tmp_inplace_orig != tmp_assign_source_113) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_113);
        }
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        tmp_iadd_expr_left_13 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_iadd_expr_left_13 == NULL)) {
            tmp_iadd_expr_left_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_iadd_expr_left_13 == NULL));
        tmp_iadd_expr_right_13 = mod_consts[154];
        tmp_inplace_orig = tmp_iadd_expr_left_13;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = tmp_iadd_expr_left_13;
        if (tmp_inplace_orig != tmp_assign_source_114) {
            UPDATE_STRING_DICT_INPLACE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_114);
        }
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_19;
        tmp_called_value_50 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_50 != NULL);
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 170;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[155]);

        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        tmp_open_filename_2 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_open_filename_2 == NULL)) {
            tmp_open_filename_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_open_filename_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        tmp_open_mode_2 = mod_consts[116];
        tmp_assign_source_115 = BUILTIN_OPEN(tstate, tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_130 = tmp_with_2__source;
        tmp_called_value_51 = LOOKUP_SPECIAL(tstate, tmp_expression_value_130, mod_consts[117]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 171;
        tmp_assign_source_116 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        Py_DECREF(tmp_called_value_51);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_131;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_131 = tmp_with_2__source;
        tmp_assign_source_117 = LOOKUP_SPECIAL(tstate, tmp_expression_value_131, mod_consts[118]);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_117;
    }
    {
        nuitka_bool tmp_assign_source_118;
        tmp_assign_source_118 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_119 = tmp_with_2__enter;
        UPDATE_STRING_DICT0(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_119);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_57;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        assert(!(tmp_expression_value_132 == NULL));
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[120]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_33;
        }
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 172;

            goto try_except_handler_33;
        }
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 172;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_52);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_30 == NULL) {
        exception_keeper_tb_30 = MAKE_TRACEBACK(frame_f9eed9e4dda61782b5526e113a9b23d6, exception_keeper_lineno_30);
    } else if (exception_keeper_lineno_30 != 0) {
        exception_keeper_tb_30 = ADD_TRACEBACK(exception_keeper_tb_30, frame_f9eed9e4dda61782b5526e113a9b23d6, exception_keeper_lineno_30);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    // Tried code:
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_13 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        nuitka_bool tmp_assign_source_120;
        tmp_assign_source_120 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_120;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_53 = tmp_with_2__exit;
        tmp_args_element_value_58 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_59 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_60 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_53, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_34;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_34;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 171;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame) frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_34;
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 171;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame) frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_34;
    branch_end_15:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    try_end_19:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_2__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_54 = tmp_with_2__exit;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 171;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_54, mod_consts[121]);

        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_32);
            Py_XDECREF(exception_keeper_value_32);
            Py_XDECREF(exception_keeper_tb_32);

            exception_lineno = 171;

            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_no_17:;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_31;
    // End of try:
    try_end_20:;
    {
        bool tmp_condition_result_18;
        nuitka_bool tmp_cmp_expr_left_15;
        nuitka_bool tmp_cmp_expr_right_15;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_15 = tmp_with_2__indicator;
        tmp_cmp_expr_right_15 = NUITKA_BOOL_TRUE;
        tmp_condition_result_18 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_55 = tmp_with_2__exit;
        frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame.f_lineno = 171;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_55, mod_consts[121]);

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_22);
    }
    branch_no_18:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    branch_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9eed9e4dda61782b5526e113a9b23d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9eed9e4dda61782b5526e113a9b23d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9eed9e4dda61782b5526e113a9b23d6, exception_lineno);
    }



    assertFrameObject(frame_f9eed9e4dda61782b5526e113a9b23d6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("ursina.scripts._blender_scene_to_ursina", false);

    Py_INCREF(module_ursina$scripts$_blender_scene_to_ursina);
    return module_ursina$scripts$_blender_scene_to_ursina;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ursina$scripts$_blender_scene_to_ursina, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("ursina$scripts$_blender_scene_to_ursina", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
