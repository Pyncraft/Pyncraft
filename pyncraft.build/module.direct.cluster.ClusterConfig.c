/* Generated code for Python module 'direct.cluster.ClusterConfig'
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

/* The "module_direct$cluster$ClusterConfig" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$cluster$ClusterConfig;
PyDictObject *moduledict_direct$cluster$ClusterConfig;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[64];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.cluster.ClusterConfig"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 64; i++) {
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
void checkModuleConstants_direct$cluster$ClusterConfig(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 64; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9539ae57d492a540d2966b4bddf000f5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[61]); CHECK_OBJECT(module_filename_obj);
    codeobj_9539ae57d492a540d2966b4bddf000f5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[62], mod_consts[62], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_direct$cluster$ClusterConfig[] = {

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

    function_impl_code *current = functable_direct$cluster$ClusterConfig;
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

    if (offset > sizeof(functable_direct$cluster$ClusterConfig) || offset < 0) {
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
        functable_direct$cluster$ClusterConfig[offset],
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
        module_direct$cluster$ClusterConfig,
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
PyObject *modulecode_direct$cluster$ClusterConfig(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.cluster.ClusterConfig");

    // Store the module for future use.
    module_direct$cluster$ClusterConfig = module;

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
        PRINT_STRING("direct.cluster.ClusterConfig: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.cluster.ClusterConfig: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$cluster$ClusterConfig\n");

    moduledict_direct$cluster$ClusterConfig = MODULE_DICT(module_direct$cluster$ClusterConfig);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$cluster$ClusterConfig,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$cluster$ClusterConfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[63]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$cluster$ClusterConfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$cluster$ClusterConfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$cluster$ClusterConfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$cluster$ClusterConfig);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$cluster$ClusterConfig);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9539ae57d492a540d2966b4bddf000f5;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_9539ae57d492a540d2966b4bddf000f5 = MAKE_MODULE_FRAME(codeobj_9539ae57d492a540d2966b4bddf000f5, module_direct$cluster$ClusterConfig);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9539ae57d492a540d2966b4bddf000f5);
    assert(Py_REFCNT(frame_9539ae57d492a540d2966b4bddf000f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$cluster$ClusterConfig;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$cluster$ClusterConfig;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 2;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$cluster$ClusterConfig, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_1 = mod_consts[9];
        tmp_dict_key_2 = mod_consts[10];
        tmp_dict_value_2 = mod_consts[11];
        tmp_list_element_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_called_value_2;
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[12];
            tmp_dict_value_2 = mod_consts[13];
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[14];
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 27;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[16]);

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[17];
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 28;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[16]);

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
        tmp_assign_source_4 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_list_element_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_list_element_4;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_list_element_5;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_list_element_6;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_list_element_7;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[18];
            tmp_dict_key_3 = mod_consts[10];
            tmp_dict_value_3 = mod_consts[19];
            tmp_list_element_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_called_value_4;
                tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[12];
                tmp_dict_value_3 = mod_consts[13];
                tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[14];
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;

                    goto dict_build_exception_3;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 32;
                tmp_dict_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[16]);

                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[17];
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;

                    goto dict_build_exception_3;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 33;
                tmp_dict_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[16]);

                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_list_element_2);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_2);
                tmp_dict_key_4 = mod_consts[10];
                tmp_dict_value_4 = mod_consts[20];
                tmp_list_element_2 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_called_value_5;
                    PyObject *tmp_called_value_6;
                    tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_4, tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[14];
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;

                        goto dict_build_exception_4;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 35;
                    tmp_dict_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[16]);

                    if (tmp_dict_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;

                        goto dict_build_exception_4;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_4, tmp_dict_value_4);
                    Py_DECREF(tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_4 = mod_consts[17];
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;

                        goto dict_build_exception_4;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 36;
                    tmp_dict_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[16]);

                    if (tmp_dict_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;

                        goto dict_build_exception_4;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_2, tmp_dict_key_4, tmp_dict_value_4);
                    Py_DECREF(tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_3;
                // Exception handling pass through code for dict_build:
                dict_build_exception_4:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_1;
                // Finished with no exception for dict_build:
                dict_build_noexception_3:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_dict_key_5 = mod_consts[10];
            tmp_dict_value_5 = mod_consts[19];
            tmp_list_element_3 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_called_value_7;
                PyObject *tmp_called_value_8;
                tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[12];
                tmp_dict_value_5 = mod_consts[13];
                tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[14];
                tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_7 == NULL)) {
                    tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;

                    goto dict_build_exception_5;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 41;
                tmp_dict_value_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[16]);

                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[17];
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;

                    goto dict_build_exception_5;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 42;
                tmp_dict_value_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[16]);

                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_list_element_3);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_3);
                tmp_dict_key_6 = mod_consts[10];
                tmp_dict_value_6 = mod_consts[20];
                tmp_list_element_3 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_called_value_9;
                    PyObject *tmp_called_value_10;
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[14];
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;

                        goto dict_build_exception_6;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 44;
                    tmp_dict_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[16]);

                    if (tmp_dict_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;

                        goto dict_build_exception_6;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[17];
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;

                        goto dict_build_exception_6;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 45;
                    tmp_dict_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[16]);

                    if (tmp_dict_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;

                        goto dict_build_exception_6;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_5;
                // Exception handling pass through code for dict_build:
                dict_build_exception_6:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_5:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_3);
                tmp_dict_key_7 = mod_consts[10];
                tmp_dict_value_7 = mod_consts[22];
                tmp_list_element_3 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_called_value_11;
                    PyObject *tmp_called_value_12;
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_7, tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[14];
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;

                        goto dict_build_exception_7;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 48;
                    tmp_dict_value_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[16]);

                    if (tmp_dict_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;

                        goto dict_build_exception_7;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_7, tmp_dict_value_7);
                    Py_DECREF(tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[17];
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;

                        goto dict_build_exception_7;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 49;
                    tmp_dict_value_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[16]);

                    if (tmp_dict_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;

                        goto dict_build_exception_7;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_3, tmp_dict_key_7, tmp_dict_value_7);
                    Py_DECREF(tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_6;
                // Exception handling pass through code for dict_build:
                dict_build_exception_7:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_6:;
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            tmp_dict_key_8 = mod_consts[10];
            tmp_dict_value_8 = mod_consts[20];
            tmp_list_element_4 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[14];
                tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_13 == NULL)) {
                    tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;

                    goto dict_build_exception_8;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 53;
                tmp_dict_value_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_13, mod_consts[24]);

                if (tmp_dict_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[17];
                tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_14 == NULL)) {
                    tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;

                    goto dict_build_exception_8;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 54;
                tmp_dict_value_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[25]);

                if (tmp_dict_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[26];
                tmp_dict_value_8 = mod_consts[27];
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[28];
                tmp_dict_value_8 = mod_consts[29];
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[30];
                tmp_dict_value_8 = mod_consts[31];
                tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_list_element_4);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_dict_key_10;
                PyObject *tmp_dict_value_10;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_4);
                tmp_dict_key_9 = mod_consts[10];
                tmp_dict_value_9 = mod_consts[22];
                tmp_list_element_4 = _PyDict_NewPresized( 7 );
                {
                    PyObject *tmp_called_value_15;
                    PyObject *tmp_called_value_16;
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[12];
                    tmp_dict_value_9 = mod_consts[13];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[14];
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;

                        goto dict_build_exception_9;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 61;
                    tmp_dict_value_9 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_15, mod_consts[24]);

                    if (tmp_dict_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;

                        goto dict_build_exception_9;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    Py_DECREF(tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[17];
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;

                        goto dict_build_exception_9;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 62;
                    tmp_dict_value_9 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_16, mod_consts[32]);

                    if (tmp_dict_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;

                        goto dict_build_exception_9;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    Py_DECREF(tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[26];
                    tmp_dict_value_9 = mod_consts[33];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[28];
                    tmp_dict_value_9 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_9 = mod_consts[30];
                    tmp_dict_value_9 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_9, tmp_dict_value_9);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_8;
                // Exception handling pass through code for dict_build:
                dict_build_exception_9:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for dict_build:
                dict_build_noexception_8:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_4);
                tmp_dict_key_10 = mod_consts[10];
                tmp_dict_value_10 = mod_consts[34];
                tmp_list_element_4 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_called_value_18;
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[14];
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;

                        goto dict_build_exception_10;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 68;
                    tmp_dict_value_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_17, mod_consts[24]);

                    if (tmp_dict_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;

                        goto dict_build_exception_10;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[17];
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;

                        goto dict_build_exception_10;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 69;
                    tmp_dict_value_10 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_18, mod_consts[35]);

                    if (tmp_dict_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;

                        goto dict_build_exception_10;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[26];
                    tmp_dict_value_10 = mod_consts[36];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[28];
                    tmp_dict_value_10 = mod_consts[37];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[30];
                    tmp_dict_value_10 = mod_consts[38];
                    tmp_res = PyDict_SetItem(tmp_list_element_4, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_9;
                // Exception handling pass through code for dict_build:
                dict_build_exception_10:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for dict_build:
                dict_build_noexception_9:;
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[39];
            tmp_dict_key_11 = mod_consts[10];
            tmp_dict_value_11 = mod_consts[19];
            tmp_list_element_5 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_called_value_19;
                PyObject *tmp_called_value_20;
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[12];
                tmp_dict_value_11 = mod_consts[13];
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[14];
                tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_19 == NULL)) {
                    tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto dict_build_exception_11;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 77;
                tmp_dict_value_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_19, mod_consts[24]);

                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[17];
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;

                    goto dict_build_exception_11;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 78;
                tmp_dict_value_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_20, mod_consts[32]);

                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;

                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[26];
                tmp_dict_value_11 = mod_consts[33];
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[28];
                tmp_dict_value_11 = mod_consts[29];
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[30];
                tmp_dict_value_11 = mod_consts[31];
                tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_list_element_5);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(7);
            {
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyObject *tmp_dict_key_13;
                PyObject *tmp_dict_value_13;
                PyObject *tmp_dict_key_14;
                PyObject *tmp_dict_value_14;
                PyObject *tmp_dict_key_15;
                PyObject *tmp_dict_value_15;
                PyObject *tmp_dict_key_16;
                PyObject *tmp_dict_value_16;
                PyObject *tmp_dict_key_17;
                PyObject *tmp_dict_value_17;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_5);
                tmp_dict_key_12 = mod_consts[10];
                tmp_dict_value_12 = mod_consts[20];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_21;
                    PyObject *tmp_called_value_22;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[14];
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;

                        goto dict_build_exception_12;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 84;
                    tmp_dict_value_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_21, mod_consts[24]);

                    if (tmp_dict_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;

                        goto dict_build_exception_12;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    Py_DECREF(tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[17];
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;

                        goto dict_build_exception_12;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 85;
                    tmp_dict_value_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_22, mod_consts[25]);

                    if (tmp_dict_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;

                        goto dict_build_exception_12;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    Py_DECREF(tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[26];
                    tmp_dict_value_12 = mod_consts[27];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[28];
                    tmp_dict_value_12 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[30];
                    tmp_dict_value_12 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_11;
                // Exception handling pass through code for dict_build:
                dict_build_exception_12:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_11:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_5);
                tmp_dict_key_13 = mod_consts[10];
                tmp_dict_value_13 = mod_consts[22];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_23;
                    PyObject *tmp_called_value_24;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_13 = mod_consts[14];
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;

                        goto dict_build_exception_13;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 91;
                    tmp_dict_value_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_23, mod_consts[24]);

                    if (tmp_dict_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;

                        goto dict_build_exception_13;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    Py_DECREF(tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_13 = mod_consts[17];
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;

                        goto dict_build_exception_13;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 92;
                    tmp_dict_value_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_24, mod_consts[32]);

                    if (tmp_dict_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;

                        goto dict_build_exception_13;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    Py_DECREF(tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_13 = mod_consts[26];
                    tmp_dict_value_13 = mod_consts[33];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_13 = mod_consts[28];
                    tmp_dict_value_13 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_13 = mod_consts[30];
                    tmp_dict_value_13 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_13, tmp_dict_value_13);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_12;
                // Exception handling pass through code for dict_build:
                dict_build_exception_13:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_12:;
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_5);
                tmp_dict_key_14 = mod_consts[10];
                tmp_dict_value_14 = mod_consts[34];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_25;
                    PyObject *tmp_called_value_26;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[14];
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;

                        goto dict_build_exception_14;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 98;
                    tmp_dict_value_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_25, mod_consts[24]);

                    if (tmp_dict_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;

                        goto dict_build_exception_14;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    Py_DECREF(tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[17];
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;

                        goto dict_build_exception_14;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 99;
                    tmp_dict_value_14 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_26, mod_consts[35]);

                    if (tmp_dict_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;

                        goto dict_build_exception_14;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    Py_DECREF(tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[26];
                    tmp_dict_value_14 = mod_consts[36];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[28];
                    tmp_dict_value_14 = mod_consts[37];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_14 = mod_consts[30];
                    tmp_dict_value_14 = mod_consts[38];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_14, tmp_dict_value_14);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_13;
                // Exception handling pass through code for dict_build:
                dict_build_exception_14:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_13:;
                PyList_SET_ITEM(tmp_dict_value_1, 3, tmp_list_element_5);
                tmp_dict_key_15 = mod_consts[10];
                tmp_dict_value_15 = mod_consts[40];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_27;
                    PyObject *tmp_called_value_28;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[14];
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;

                        goto dict_build_exception_15;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 105;
                    tmp_dict_value_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_27, mod_consts[41]);

                    if (tmp_dict_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;

                        goto dict_build_exception_15;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    Py_DECREF(tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[17];
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;

                        goto dict_build_exception_15;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 106;
                    tmp_dict_value_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_28, mod_consts[42]);

                    if (tmp_dict_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;

                        goto dict_build_exception_15;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    Py_DECREF(tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[26];
                    tmp_dict_value_15 = mod_consts[36];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[28];
                    tmp_dict_value_15 = mod_consts[37];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[30];
                    tmp_dict_value_15 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_14;
                // Exception handling pass through code for dict_build:
                dict_build_exception_15:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_14:;
                PyList_SET_ITEM(tmp_dict_value_1, 4, tmp_list_element_5);
                tmp_dict_key_16 = mod_consts[10];
                tmp_dict_value_16 = mod_consts[43];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_called_value_30;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_16 = mod_consts[14];
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;

                        goto dict_build_exception_16;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 112;
                    tmp_dict_value_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_29, mod_consts[41]);

                    if (tmp_dict_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;

                        goto dict_build_exception_16;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    Py_DECREF(tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_16 = mod_consts[17];
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 113;

                        goto dict_build_exception_16;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 113;
                    tmp_dict_value_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_30, mod_consts[44]);

                    if (tmp_dict_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 113;

                        goto dict_build_exception_16;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    Py_DECREF(tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_16 = mod_consts[26];
                    tmp_dict_value_16 = mod_consts[33];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_16 = mod_consts[28];
                    tmp_dict_value_16 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_16 = mod_consts[30];
                    tmp_dict_value_16 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_16, tmp_dict_value_16);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_15;
                // Exception handling pass through code for dict_build:
                dict_build_exception_16:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_15:;
                PyList_SET_ITEM(tmp_dict_value_1, 5, tmp_list_element_5);
                tmp_dict_key_17 = mod_consts[10];
                tmp_dict_value_17 = mod_consts[45];
                tmp_list_element_5 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_31;
                    PyObject *tmp_called_value_32;
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_17 = mod_consts[14];
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 119;

                        goto dict_build_exception_17;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 119;
                    tmp_dict_value_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_31, mod_consts[41]);

                    if (tmp_dict_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 119;

                        goto dict_build_exception_17;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    Py_DECREF(tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_17 = mod_consts[17];
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;

                        goto dict_build_exception_17;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 120;
                    tmp_dict_value_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_32, mod_consts[46]);

                    if (tmp_dict_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;

                        goto dict_build_exception_17;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    Py_DECREF(tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_17 = mod_consts[26];
                    tmp_dict_value_17 = mod_consts[27];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_17 = mod_consts[28];
                    tmp_dict_value_17 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_17 = mod_consts[30];
                    tmp_dict_value_17 = mod_consts[38];
                    tmp_res = PyDict_SetItem(tmp_list_element_5, tmp_dict_key_17, tmp_dict_value_17);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_16;
                // Exception handling pass through code for dict_build:
                dict_build_exception_17:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_16:;
                PyList_SET_ITEM(tmp_dict_value_1, 6, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_dict_key_18 = mod_consts[10];
            tmp_dict_value_18 = mod_consts[19];
            tmp_list_element_6 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_called_value_33;
                PyObject *tmp_called_value_34;
                tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[12];
                tmp_dict_value_18 = mod_consts[13];
                tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[14];
                tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_33 == NULL)) {
                    tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 128;

                    goto dict_build_exception_18;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 128;
                tmp_dict_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[16]);

                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 128;

                    goto dict_build_exception_18;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[17];
                tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_34 == NULL)) {
                    tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;

                    goto dict_build_exception_18;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 129;
                tmp_dict_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[16]);

                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;

                    goto dict_build_exception_18;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_17;
            // Exception handling pass through code for dict_build:
            dict_build_exception_18:;
            Py_DECREF(tmp_list_element_6);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_17:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_dict_key_19;
                PyObject *tmp_dict_value_19;
                PyObject *tmp_dict_key_20;
                PyObject *tmp_dict_value_20;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_6);
                tmp_dict_key_19 = mod_consts[10];
                tmp_dict_value_19 = mod_consts[48];
                tmp_list_element_6 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_35;
                    PyObject *tmp_called_value_36;
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[14];
                    tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_35 == NULL)) {
                        tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;

                        goto dict_build_exception_19;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 132;
                    tmp_dict_value_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_35, mod_consts[49]);

                    if (tmp_dict_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;

                        goto dict_build_exception_19;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    Py_DECREF(tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[17];
                    tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_36 == NULL)) {
                        tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;

                        goto dict_build_exception_19;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 133;
                    tmp_dict_value_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_36, mod_consts[50]);

                    if (tmp_dict_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;

                        goto dict_build_exception_19;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    Py_DECREF(tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[26];
                    tmp_dict_value_19 = mod_consts[51];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[28];
                    tmp_dict_value_19 = mod_consts[52];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[30];
                    tmp_dict_value_19 = mod_consts[53];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_18;
                // Exception handling pass through code for dict_build:
                dict_build_exception_19:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_5;
                // Finished with no exception for dict_build:
                dict_build_noexception_18:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_6);
                tmp_dict_key_20 = mod_consts[10];
                tmp_dict_value_20 = mod_consts[54];
                tmp_list_element_6 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_37;
                    PyObject *tmp_called_value_38;
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[14];
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;

                        goto dict_build_exception_20;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 140;
                    tmp_dict_value_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_37, mod_consts[55]);

                    if (tmp_dict_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;

                        goto dict_build_exception_20;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    Py_DECREF(tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[17];
                    tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_38 == NULL)) {
                        tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 141;

                        goto dict_build_exception_20;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 141;
                    tmp_dict_value_20 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_38, mod_consts[50]);

                    if (tmp_dict_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 141;

                        goto dict_build_exception_20;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    Py_DECREF(tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[26];
                    tmp_dict_value_20 = mod_consts[51];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[28];
                    tmp_dict_value_20 = mod_consts[52];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[30];
                    tmp_dict_value_20 = mod_consts[56];
                    tmp_res = PyDict_SetItem(tmp_list_element_6, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_19;
                // Exception handling pass through code for dict_build:
                dict_build_exception_20:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_5;
                // Finished with no exception for dict_build:
                dict_build_noexception_19:;
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[57];
            tmp_dict_key_21 = mod_consts[10];
            tmp_dict_value_21 = mod_consts[19];
            tmp_list_element_7 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_called_value_39;
                tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_21, tmp_dict_value_21);
                assert(!(tmp_res != 0));
                tmp_dict_key_21 = mod_consts[12];
                tmp_dict_value_21 = mod_consts[13];
                tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_21, tmp_dict_value_21);
                assert(!(tmp_res != 0));
                tmp_dict_key_21 = mod_consts[14];
                tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_39 == NULL)) {
                    tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;

                    goto dict_build_exception_21;
                }
                frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 150;
                tmp_dict_value_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[16]);

                if (tmp_dict_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;

                    goto dict_build_exception_21;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_21, tmp_dict_value_21);
                Py_DECREF(tmp_dict_value_21);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_20;
            // Exception handling pass through code for dict_build:
            dict_build_exception_21:;
            Py_DECREF(tmp_list_element_7);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_20:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_dict_key_22;
                PyObject *tmp_dict_value_22;
                PyObject *tmp_dict_key_23;
                PyObject *tmp_dict_value_23;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_7);
                tmp_dict_key_22 = mod_consts[10];
                tmp_dict_value_22 = mod_consts[58];
                tmp_list_element_7 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_40;
                    PyObject *tmp_called_value_41;
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_22 = mod_consts[14];
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;

                        goto dict_build_exception_22;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 153;
                    tmp_dict_value_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_40, mod_consts[24]);

                    if (tmp_dict_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;

                        goto dict_build_exception_22;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    Py_DECREF(tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_22 = mod_consts[17];
                    tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_41 == NULL)) {
                        tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;

                        goto dict_build_exception_22;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 154;
                    tmp_dict_value_22 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_41, mod_consts[32]);

                    if (tmp_dict_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;

                        goto dict_build_exception_22;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    Py_DECREF(tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_22 = mod_consts[26];
                    tmp_dict_value_22 = mod_consts[33];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_22 = mod_consts[28];
                    tmp_dict_value_22 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_22 = mod_consts[30];
                    tmp_dict_value_22 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_22, tmp_dict_value_22);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_21;
                // Exception handling pass through code for dict_build:
                dict_build_exception_22:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for dict_build:
                dict_build_noexception_21:;
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_7);
                tmp_dict_key_23 = mod_consts[10];
                tmp_dict_value_23 = mod_consts[59];
                tmp_list_element_7 = _PyDict_NewPresized( 6 );
                {
                    PyObject *tmp_called_value_42;
                    PyObject *tmp_called_value_43;
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_23 = mod_consts[14];
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;

                        goto dict_build_exception_23;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 160;
                    tmp_dict_value_23 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_42, mod_consts[41]);

                    if (tmp_dict_value_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;

                        goto dict_build_exception_23;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    Py_DECREF(tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_23 = mod_consts[17];
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;

                        goto dict_build_exception_23;
                    }
                    frame_9539ae57d492a540d2966b4bddf000f5->m_frame.f_lineno = 161;
                    tmp_dict_value_23 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_43, mod_consts[44]);

                    if (tmp_dict_value_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;

                        goto dict_build_exception_23;
                    }
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    Py_DECREF(tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_23 = mod_consts[26];
                    tmp_dict_value_23 = mod_consts[33];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_23 = mod_consts[28];
                    tmp_dict_value_23 = mod_consts[29];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_23 = mod_consts[30];
                    tmp_dict_value_23 = mod_consts[31];
                    tmp_res = PyDict_SetItem(tmp_list_element_7, tmp_dict_key_23, tmp_dict_value_23);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_22;
                // Exception handling pass through code for dict_build:
                dict_build_exception_23:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for dict_build:
                dict_build_noexception_22:;
                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;
        UPDATE_STRING_DICT1(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9539ae57d492a540d2966b4bddf000f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9539ae57d492a540d2966b4bddf000f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9539ae57d492a540d2966b4bddf000f5, exception_lineno);
    }



    assertFrameObject(frame_9539ae57d492a540d2966b4bddf000f5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.cluster.ClusterConfig", false);

    Py_INCREF(module_direct$cluster$ClusterConfig);
    return module_direct$cluster$ClusterConfig;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$cluster$ClusterConfig, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$cluster$ClusterConfig", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
