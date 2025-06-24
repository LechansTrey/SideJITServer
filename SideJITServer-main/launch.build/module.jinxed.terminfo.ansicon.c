/* Generated code for Python module 'jinxed$terminfo$ansicon'
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

/* The "module_jinxed$terminfo$ansicon" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinxed$terminfo$ansicon;
PyDictObject *moduledict_jinxed$terminfo$ansicon;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[233];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[233];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("jinxed.terminfo.ansicon"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 233; i++) {
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
void checkModuleConstants_jinxed$terminfo$ansicon(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 233; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_jinxed$$36$terminfo$$36$ansicon$BOOL_CAPS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jinxed$terminfo$ansicon->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jinxed$terminfo$ansicon->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[8]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jinxed$terminfo$ansicon->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[8]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[8], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[8]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[8], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[8]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[8]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[8]);
    }

    return result;
}

static PyObject *module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jinxed$terminfo$ansicon->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jinxed$terminfo$ansicon->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[9]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jinxed$terminfo$ansicon->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[9]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[9], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[9]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[9], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[9]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[9]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[9]);
    }

    return result;
}

static PyObject *module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jinxed$terminfo$ansicon->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jinxed$terminfo$ansicon->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[10]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jinxed$terminfo$ansicon->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[10]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[10], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[10]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[10], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[10]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[10]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[10]);
    }

    return result;
}

static PyObject *module_var_accessor_jinxed$$36$terminfo$$36$ansicon$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_jinxed$terminfo$ansicon->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_jinxed$terminfo$ansicon->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[232]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_jinxed$terminfo$ansicon->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[232]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[232], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[232]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[232], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[232]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[232]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[232]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cf65393299b2e0a62cc4024131e28ac1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[229]); CHECK_OBJECT(module_filename_obj);
    code_objects_cf65393299b2e0a62cc4024131e28ac1 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[230], mod_consts[230], NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_jinxed$terminfo$ansicon[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_jinxed$terminfo$ansicon);
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
        module_jinxed$terminfo$ansicon,
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
        function_table_jinxed$terminfo$ansicon,
        sizeof(function_table_jinxed$terminfo$ansicon) / sizeof(function_impl_code)
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
static char const *module_full_name = "jinxed.terminfo.ansicon";
#endif

// Internal entry point for module code.
PyObject *modulecode_jinxed$terminfo$ansicon(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("jinxed$terminfo$ansicon");

    // Store the module for future use.
    module_jinxed$terminfo$ansicon = module;

    moduledict_jinxed$terminfo$ansicon = MODULE_DICT(module_jinxed$terminfo$ansicon);

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
        PRINT_STRING("jinxed$terminfo$ansicon: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("jinxed$terminfo$ansicon: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("jinxed$terminfo$ansicon: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "jinxed.terminfo.ansicon" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initjinxed$terminfo$ansicon\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jinxed$terminfo$ansicon,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jinxed$terminfo$ansicon,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[231]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jinxed$terminfo$ansicon,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jinxed$terminfo$ansicon,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jinxed$terminfo$ansicon,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jinxed$terminfo$ansicon);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_jinxed$terminfo$ansicon);
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

        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_jinxed$terminfo$ansicon;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_frame_jinxed$terminfo$ansicon = MAKE_MODULE_FRAME(code_objects_cf65393299b2e0a62cc4024131e28ac1, module_jinxed$terminfo$ansicon);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_jinxed$terminfo$ansicon);
    assert(Py_REFCNT(frame_frame_jinxed$terminfo$ansicon) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$__spec__(tstate);
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
        tmp_assattr_target_2 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_jinxed$terminfo$ansicon;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = const_int_pos_1;
        frame_frame_jinxed$terminfo$ansicon->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_jinxed$terminfo$ansicon,
                mod_consts[8],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[8]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_jinxed$terminfo$ansicon,
                mod_consts[9],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_jinxed$terminfo$ansicon,
                mod_consts[10],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$BOOL_CAPS(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_frame_jinxed$terminfo$ansicon->m_frame.f_lineno = 13;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        frame_frame_jinxed$terminfo$ansicon->m_frame.f_lineno = 14;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_10);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[13];
        tmp_ass_subscribed_1 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        assert(!(tmp_ass_subscribed_1 == NULL));
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[15];
        tmp_ass_subscribed_2 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[16];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = mod_consts[17];
        tmp_ass_subscribed_3 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[18];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = mod_consts[19];
        tmp_ass_subscribed_4 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[20];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = mod_consts[21];
        tmp_ass_subscribed_5 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[22];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = mod_consts[23];
        tmp_ass_subscribed_6 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = mod_consts[25];
        tmp_ass_subscribed_7 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[26];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = mod_consts[27];
        tmp_ass_subscribed_8 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[28];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        tmp_delsubscr_target_1 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = mod_consts[29];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        tmp_delsubscr_target_2 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_2 = mod_consts[30];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_delsubscr_subscript_3;
        tmp_delsubscr_target_3 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_3 = mod_consts[31];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_4;
        PyObject *tmp_delsubscr_subscript_4;
        tmp_delsubscr_target_4 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_4 = mod_consts[32];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_4, tmp_delsubscr_subscript_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_5;
        PyObject *tmp_delsubscr_subscript_5;
        tmp_delsubscr_target_5 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_5 = mod_consts[33];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_5, tmp_delsubscr_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_6;
        PyObject *tmp_delsubscr_subscript_6;
        tmp_delsubscr_target_6 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_6 = mod_consts[34];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_6, tmp_delsubscr_subscript_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_7;
        PyObject *tmp_delsubscr_subscript_7;
        tmp_delsubscr_target_7 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_7 = mod_consts[35];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_7, tmp_delsubscr_subscript_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_8;
        PyObject *tmp_delsubscr_subscript_8;
        tmp_delsubscr_target_8 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_8 = mod_consts[36];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_8, tmp_delsubscr_subscript_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_9;
        PyObject *tmp_delsubscr_subscript_9;
        tmp_delsubscr_target_9 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_9 = mod_consts[37];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_9, tmp_delsubscr_subscript_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_10;
        PyObject *tmp_delsubscr_subscript_10;
        tmp_delsubscr_target_10 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_10 = mod_consts[38];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_10, tmp_delsubscr_subscript_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_11;
        PyObject *tmp_delsubscr_subscript_11;
        tmp_delsubscr_target_11 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_11 = mod_consts[39];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_11, tmp_delsubscr_subscript_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_12;
        PyObject *tmp_delsubscr_subscript_12;
        tmp_delsubscr_target_12 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_12 = mod_consts[40];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_12, tmp_delsubscr_subscript_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_13;
        PyObject *tmp_delsubscr_subscript_13;
        tmp_delsubscr_target_13 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_13 = mod_consts[41];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_13, tmp_delsubscr_subscript_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_14;
        PyObject *tmp_delsubscr_subscript_14;
        tmp_delsubscr_target_14 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_14 = mod_consts[42];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_14, tmp_delsubscr_subscript_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_15;
        PyObject *tmp_delsubscr_subscript_15;
        tmp_delsubscr_target_15 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_15 = mod_consts[43];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_15, tmp_delsubscr_subscript_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_16;
        PyObject *tmp_delsubscr_subscript_16;
        tmp_delsubscr_target_16 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_16 = mod_consts[44];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_16, tmp_delsubscr_subscript_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_17;
        PyObject *tmp_delsubscr_subscript_17;
        tmp_delsubscr_target_17 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_17 = mod_consts[45];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_17, tmp_delsubscr_subscript_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_18;
        PyObject *tmp_delsubscr_subscript_18;
        tmp_delsubscr_target_18 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_18 = mod_consts[46];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_18, tmp_delsubscr_subscript_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_19;
        PyObject *tmp_delsubscr_subscript_19;
        tmp_delsubscr_target_19 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_19 = mod_consts[47];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_19, tmp_delsubscr_subscript_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_20;
        PyObject *tmp_delsubscr_subscript_20;
        tmp_delsubscr_target_20 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_20 = mod_consts[48];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_20, tmp_delsubscr_subscript_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_21;
        PyObject *tmp_delsubscr_subscript_21;
        tmp_delsubscr_target_21 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_21 = mod_consts[49];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_21, tmp_delsubscr_subscript_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_22;
        PyObject *tmp_delsubscr_subscript_22;
        tmp_delsubscr_target_22 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_22 = mod_consts[50];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_22, tmp_delsubscr_subscript_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_23;
        PyObject *tmp_delsubscr_subscript_23;
        tmp_delsubscr_target_23 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_23 = mod_consts[51];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_23, tmp_delsubscr_subscript_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_24;
        PyObject *tmp_delsubscr_subscript_24;
        tmp_delsubscr_target_24 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_24 = mod_consts[52];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_24, tmp_delsubscr_subscript_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_25;
        PyObject *tmp_delsubscr_subscript_25;
        tmp_delsubscr_target_25 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_25 = mod_consts[53];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_25, tmp_delsubscr_subscript_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_26;
        PyObject *tmp_delsubscr_subscript_26;
        tmp_delsubscr_target_26 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_26 = mod_consts[54];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_26, tmp_delsubscr_subscript_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_27;
        PyObject *tmp_delsubscr_subscript_27;
        tmp_delsubscr_target_27 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_27 = mod_consts[55];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_27, tmp_delsubscr_subscript_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_28;
        PyObject *tmp_delsubscr_subscript_28;
        tmp_delsubscr_target_28 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_28 = mod_consts[56];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_28, tmp_delsubscr_subscript_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_29;
        PyObject *tmp_delsubscr_subscript_29;
        tmp_delsubscr_target_29 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_29 = mod_consts[57];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_29, tmp_delsubscr_subscript_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_30;
        PyObject *tmp_delsubscr_subscript_30;
        tmp_delsubscr_target_30 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_30 = mod_consts[58];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_30, tmp_delsubscr_subscript_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_31;
        PyObject *tmp_delsubscr_subscript_31;
        tmp_delsubscr_target_31 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_31 = mod_consts[59];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_31, tmp_delsubscr_subscript_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_32;
        PyObject *tmp_delsubscr_subscript_32;
        tmp_delsubscr_target_32 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_32 = mod_consts[60];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_32, tmp_delsubscr_subscript_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_33;
        PyObject *tmp_delsubscr_subscript_33;
        tmp_delsubscr_target_33 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_33 = mod_consts[61];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_33, tmp_delsubscr_subscript_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_34;
        PyObject *tmp_delsubscr_subscript_34;
        tmp_delsubscr_target_34 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_34 = mod_consts[62];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_34, tmp_delsubscr_subscript_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_35;
        PyObject *tmp_delsubscr_subscript_35;
        tmp_delsubscr_target_35 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_35 = mod_consts[63];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_35, tmp_delsubscr_subscript_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_36;
        PyObject *tmp_delsubscr_subscript_36;
        tmp_delsubscr_target_36 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_36 = mod_consts[64];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_36, tmp_delsubscr_subscript_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_37;
        PyObject *tmp_delsubscr_subscript_37;
        tmp_delsubscr_target_37 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_37 = mod_consts[65];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_37, tmp_delsubscr_subscript_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_38;
        PyObject *tmp_delsubscr_subscript_38;
        tmp_delsubscr_target_38 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_38 = mod_consts[66];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_38, tmp_delsubscr_subscript_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_39;
        PyObject *tmp_delsubscr_subscript_39;
        tmp_delsubscr_target_39 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_39 = mod_consts[67];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_39, tmp_delsubscr_subscript_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_40;
        PyObject *tmp_delsubscr_subscript_40;
        tmp_delsubscr_target_40 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_40 = mod_consts[68];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_40, tmp_delsubscr_subscript_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_41;
        PyObject *tmp_delsubscr_subscript_41;
        tmp_delsubscr_target_41 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_41 = mod_consts[69];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_41, tmp_delsubscr_subscript_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_42;
        PyObject *tmp_delsubscr_subscript_42;
        tmp_delsubscr_target_42 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_delsubscr_target_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_delsubscr_target_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_42 = mod_consts[70];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_42, tmp_delsubscr_subscript_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = mod_consts[71];
        tmp_ass_subscribed_9 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[9]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[72];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = mod_consts[73];
        tmp_ass_subscribed_10 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[9]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[74];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = mod_consts[75];
        tmp_ass_subscribed_11 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[9]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[76];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = mod_consts[77];
        tmp_ass_subscribed_12 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$NUM_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[9]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = mod_consts[78];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = mod_consts[79];
        tmp_ass_subscribed_13 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[80];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = mod_consts[81];
        tmp_ass_subscribed_14 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[82];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_ass_subvalue_15 = mod_consts[83];
        tmp_ass_subscribed_15 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = mod_consts[85];
        tmp_ass_subscribed_16 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[86];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = mod_consts[87];
        tmp_ass_subscribed_17 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[88];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = mod_consts[81];
        tmp_ass_subscribed_18 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[89];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = mod_consts[90];
        tmp_ass_subscribed_19 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[91];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = mod_consts[92];
        tmp_ass_subscribed_20 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[93];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_ass_subvalue_21 = mod_consts[94];
        tmp_ass_subscribed_21 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[95];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_ass_subvalue_22 = mod_consts[96];
        tmp_ass_subscribed_22 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[97];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        tmp_ass_subvalue_23 = mod_consts[98];
        tmp_ass_subscribed_23 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = mod_consts[99];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = mod_consts[100];
        tmp_ass_subscribed_24 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[101];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        tmp_ass_subvalue_25 = mod_consts[102];
        tmp_ass_subscribed_25 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = mod_consts[103];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        tmp_ass_subvalue_26 = mod_consts[104];
        tmp_ass_subscribed_26 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_26 = mod_consts[105];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_ass_subvalue_27 = mod_consts[106];
        tmp_ass_subscribed_27 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[107];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        tmp_ass_subvalue_28 = mod_consts[108];
        tmp_ass_subscribed_28 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = mod_consts[109];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        tmp_ass_subvalue_29 = mod_consts[110];
        tmp_ass_subscribed_29 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = mod_consts[111];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_ass_subvalue_30 = mod_consts[112];
        tmp_ass_subscribed_30 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_ass_subvalue_31 = mod_consts[114];
        tmp_ass_subscribed_31 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_ass_subvalue_32 = mod_consts[116];
        tmp_ass_subscribed_32 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[117];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_ass_subvalue_33 = mod_consts[118];
        tmp_ass_subscribed_33 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_ass_subvalue_34 = mod_consts[120];
        tmp_ass_subscribed_34 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[121];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_ass_subvalue_35 = mod_consts[122];
        tmp_ass_subscribed_35 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        tmp_ass_subvalue_36 = mod_consts[124];
        tmp_ass_subscribed_36 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = mod_consts[125];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_ass_subvalue_37 = mod_consts[126];
        tmp_ass_subscribed_37 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[127];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_ass_subvalue_38 = mod_consts[128];
        tmp_ass_subscribed_38 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[129];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_ass_subvalue_39 = mod_consts[130];
        tmp_ass_subscribed_39 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[131];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        tmp_ass_subvalue_40 = mod_consts[132];
        tmp_ass_subscribed_40 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = mod_consts[133];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_ass_subvalue_41 = mod_consts[134];
        tmp_ass_subscribed_41 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[135];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        tmp_ass_subvalue_42 = mod_consts[136];
        tmp_ass_subscribed_42 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = mod_consts[137];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        tmp_ass_subvalue_43 = mod_consts[138];
        tmp_ass_subscribed_43 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_43 = mod_consts[139];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        tmp_ass_subvalue_44 = mod_consts[140];
        tmp_ass_subscribed_44 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = mod_consts[141];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        tmp_ass_subvalue_45 = mod_consts[142];
        tmp_ass_subscribed_45 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = mod_consts[143];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        tmp_ass_subvalue_46 = mod_consts[144];
        tmp_ass_subscribed_46 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_46 = mod_consts[145];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        tmp_ass_subvalue_47 = mod_consts[146];
        tmp_ass_subscribed_47 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = mod_consts[147];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        tmp_ass_subvalue_48 = mod_consts[148];
        tmp_ass_subscribed_48 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        tmp_ass_subvalue_49 = mod_consts[150];
        tmp_ass_subscribed_49 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_49 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_49 = mod_consts[151];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        tmp_ass_subvalue_50 = mod_consts[152];
        tmp_ass_subscribed_50 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = mod_consts[153];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        tmp_ass_subvalue_51 = mod_consts[154];
        tmp_ass_subscribed_51 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = mod_consts[155];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        tmp_ass_subvalue_52 = mod_consts[156];
        tmp_ass_subscribed_52 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_52 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = mod_consts[157];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        tmp_ass_subvalue_53 = mod_consts[158];
        tmp_ass_subscribed_53 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = mod_consts[159];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        tmp_ass_subvalue_54 = mod_consts[160];
        tmp_ass_subscribed_54 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_54 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = mod_consts[161];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        tmp_ass_subvalue_55 = mod_consts[162];
        tmp_ass_subscribed_55 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = mod_consts[163];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        tmp_ass_subvalue_56 = mod_consts[164];
        tmp_ass_subscribed_56 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        tmp_ass_subvalue_57 = mod_consts[166];
        tmp_ass_subscribed_57 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        tmp_ass_subvalue_58 = mod_consts[168];
        tmp_ass_subscribed_58 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = mod_consts[169];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        tmp_ass_subvalue_59 = mod_consts[170];
        tmp_ass_subscribed_59 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = mod_consts[171];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        tmp_ass_subvalue_60 = mod_consts[172];
        tmp_ass_subscribed_60 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_60 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_60 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = mod_consts[173];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        tmp_ass_subvalue_61 = mod_consts[174];
        tmp_ass_subscribed_61 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = mod_consts[175];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        tmp_ass_subvalue_62 = mod_consts[176];
        tmp_ass_subscribed_62 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = mod_consts[177];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        tmp_ass_subvalue_63 = mod_consts[178];
        tmp_ass_subscribed_63 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = mod_consts[179];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        tmp_ass_subvalue_64 = mod_consts[180];
        tmp_ass_subscribed_64 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = mod_consts[181];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        tmp_ass_subvalue_65 = mod_consts[182];
        tmp_ass_subscribed_65 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        tmp_ass_subvalue_66 = mod_consts[184];
        tmp_ass_subscribed_66 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_66 = mod_consts[185];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        tmp_ass_subvalue_67 = mod_consts[186];
        tmp_ass_subscribed_67 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_67 = mod_consts[187];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        tmp_ass_subvalue_68 = mod_consts[188];
        tmp_ass_subscribed_68 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_68 = mod_consts[189];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        tmp_ass_subvalue_69 = mod_consts[190];
        tmp_ass_subscribed_69 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_69 = mod_consts[191];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        tmp_ass_subvalue_70 = mod_consts[192];
        tmp_ass_subscribed_70 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_70 = mod_consts[193];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        tmp_ass_subvalue_71 = mod_consts[194];
        tmp_ass_subscribed_71 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_71 = mod_consts[195];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        tmp_ass_subvalue_72 = mod_consts[196];
        tmp_ass_subscribed_72 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_72 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_72 = mod_consts[197];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        tmp_ass_subvalue_73 = mod_consts[198];
        tmp_ass_subscribed_73 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_73 = mod_consts[199];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        tmp_ass_subvalue_74 = mod_consts[200];
        tmp_ass_subscribed_74 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_74 = mod_consts[201];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        tmp_ass_subvalue_75 = mod_consts[202];
        tmp_ass_subscribed_75 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_75 = mod_consts[203];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        tmp_ass_subvalue_76 = mod_consts[204];
        tmp_ass_subscribed_76 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_76 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_76 = mod_consts[205];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        tmp_ass_subvalue_77 = mod_consts[206];
        tmp_ass_subscribed_77 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_77 = mod_consts[207];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        tmp_ass_subvalue_78 = mod_consts[208];
        tmp_ass_subscribed_78 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_78 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_78 = mod_consts[209];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        tmp_ass_subvalue_79 = mod_consts[210];
        tmp_ass_subscribed_79 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_79 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_79 = mod_consts[211];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        tmp_ass_subvalue_80 = mod_consts[212];
        tmp_ass_subscribed_80 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_80 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_80 = mod_consts[213];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        tmp_ass_subvalue_81 = mod_consts[212];
        tmp_ass_subscribed_81 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_81 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_81 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_81 = mod_consts[214];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_82;
        PyObject *tmp_ass_subscribed_82;
        PyObject *tmp_ass_subscript_82;
        tmp_ass_subvalue_82 = mod_consts[215];
        tmp_ass_subscribed_82 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_82 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_82 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_82 = mod_consts[216];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_83;
        PyObject *tmp_ass_subscribed_83;
        PyObject *tmp_ass_subscript_83;
        tmp_ass_subvalue_83 = mod_consts[217];
        tmp_ass_subscribed_83 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_83 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_83 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_83 = mod_consts[218];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_84;
        PyObject *tmp_ass_subscribed_84;
        PyObject *tmp_ass_subscript_84;
        tmp_ass_subvalue_84 = mod_consts[219];
        tmp_ass_subscribed_84 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_84 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_84 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_84 = mod_consts[220];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_85;
        PyObject *tmp_ass_subscribed_85;
        PyObject *tmp_ass_subscript_85;
        tmp_ass_subvalue_85 = mod_consts[221];
        tmp_ass_subscribed_85 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_85 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_85 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_85 = mod_consts[222];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_86;
        PyObject *tmp_ass_subscribed_86;
        PyObject *tmp_ass_subscript_86;
        tmp_ass_subvalue_86 = mod_consts[223];
        tmp_ass_subscribed_86 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_86 = mod_consts[224];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_87;
        PyObject *tmp_ass_subscribed_87;
        PyObject *tmp_ass_subscript_87;
        tmp_ass_subvalue_87 = mod_consts[225];
        tmp_ass_subscribed_87 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_87 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_87 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_87 = mod_consts[226];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_88;
        PyObject *tmp_ass_subscribed_88;
        PyObject *tmp_ass_subscript_88;
        tmp_ass_subvalue_88 = mod_consts[227];
        tmp_ass_subscribed_88 = module_var_accessor_jinxed$$36$terminfo$$36$ansicon$STR_CAPS(tstate);
        if (unlikely(tmp_ass_subscribed_88 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[10]);
        }

        if (tmp_ass_subscribed_88 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_88 = mod_consts[228];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;

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
            exception_tb = MAKE_TRACEBACK(frame_frame_jinxed$terminfo$ansicon, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_jinxed$terminfo$ansicon->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_jinxed$terminfo$ansicon, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_jinxed$terminfo$ansicon);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("jinxed$terminfo$ansicon", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "jinxed.terminfo.ansicon" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_jinxed$terminfo$ansicon);
    return module_jinxed$terminfo$ansicon;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinxed$terminfo$ansicon, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("jinxed$terminfo$ansicon", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
