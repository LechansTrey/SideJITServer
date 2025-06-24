/* Generated code for Python module 'jinxed$_keys'
 * created by Nuitka version 2.7.10
 *
 * This code is in part copyright 2025 Kay Hayen.
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

/* The "module_jinxed$_keys" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinxed$_keys;
PyDictObject *moduledict_jinxed$_keys;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[321];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[321];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("jinxed._keys"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 321; i++) {
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
void checkModuleConstants_jinxed$_keys(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 321; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_jinxed$$36$_keys$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jinxed$_keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jinxed$_keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[320]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jinxed$_keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[320]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[320], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[320]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[320], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[320]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[320]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[320]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2788118595eec6c84013a903bd63e0f6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[317]); CHECK_OBJECT(module_filename_obj);
    code_objects_2788118595eec6c84013a903bd63e0f6 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[318], mod_consts[318], NULL, NULL, 0, 0, 0);
}
#endif

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

static function_impl_code const function_table_jinxed$_keys[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_jinxed$_keys);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_jinxed$_keys,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_jinxed$_keys,
        sizeof(function_table_jinxed$_keys) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "jinxed._keys";
#endif

// Internal entry point for module code.
PyObject *modulecode_jinxed$_keys(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("jinxed$_keys");

    // Store the module for future use.
    module_jinxed$_keys = module;

    moduledict_jinxed$_keys = MODULE_DICT(module_jinxed$_keys);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

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
        PRINT_STRING("jinxed$_keys: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("jinxed$_keys: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("jinxed$_keys: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "jinxed._keys" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initjinxed$_keys\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jinxed$_keys,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jinxed$_keys,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[319]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jinxed$_keys,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jinxed$_keys,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jinxed$_keys,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jinxed$_keys);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_jinxed$_keys);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_frame_jinxed$_keys;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_frame_jinxed$_keys = MAKE_MODULE_FRAME(code_objects_2788118595eec6c84013a903bd63e0f6, module_jinxed$_keys);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_jinxed$_keys);
    assert(Py_REFCNT(frame_frame_jinxed$_keys) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_jinxed$$36$_keys$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_jinxed$$36$_keys$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_jinxed$_keys, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_jinxed$_keys->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jinxed$_keys, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_jinxed$_keys);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[297];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_jinxed$_keys, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_159);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("jinxed$_keys", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "jinxed._keys" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_jinxed$_keys);
    return module_jinxed$_keys;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$_keys, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("jinxed$_keys", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
