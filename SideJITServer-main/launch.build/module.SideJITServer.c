/* Generated code for Python module 'SideJITServer'
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

/* The "module_SideJITServer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_SideJITServer;
PyDictObject *moduledict_SideJITServer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[327];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[327];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("SideJITServer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 327; i++) {
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
void checkModuleConstants_SideJITServer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 327; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 42
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
static PyObject *module_var_accessor_SideJITServer$AlreadyMountedError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[80]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[80]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[80], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[80]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[80], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[80]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[80]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[80]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$App(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[17]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[17]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[17]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[17]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$BaseHTTPRequestHandler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[218]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[218]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[218], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[218]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[218], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[218]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[218]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[218]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$Device(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[82]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[82]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[82], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[82]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[82], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[82]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[82]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[82]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$DvtSecureSocketProxyService(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[20]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[20]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[20], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[20]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[20], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[20]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[20]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[20]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$HTTPServer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[198]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[198]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[198], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[198]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[198], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[198]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[198]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[198]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$InstallationProxyService(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[12]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[12]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[12], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[12]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[12], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[12]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[12]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$ProcessControl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[23]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[23]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[23]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[23]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[23]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$ServiceInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[136]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[136]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[136]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[136]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[136]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[136]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$SimpleHTTPRequestHandler(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[197]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[197]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[197], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[197]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[197], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[197]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[197]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[197]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$TUNNELD_DEFAULT_ADDRESS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[120]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[120]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[120], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[120]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[120], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[120]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[120]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[120]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$TunnelProtocol(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[121]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[121]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[121]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[121]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$TunneldRunner(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[118]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[118]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[118], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[118]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[118], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[118]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[118]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[118]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$Zeroconf(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[141]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[141]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[141]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[141]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[141]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[141]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[211]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[211]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[211], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[211]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[211], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[211]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[211]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[211]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[326]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[326]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[326], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[326]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[326], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[326]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[326]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[326]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$__version__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[105]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[105]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[105]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[105]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[105]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[105]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[77]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[77]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[77]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[77]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[77]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[77]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$atexit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[147]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[147]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[147], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[147]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[147], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[147]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[147]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[147]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$auto_mount_personalized(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[79]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[79]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[79]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[79]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[79]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[79]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$click(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[142]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[142]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[142]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[142]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$create_service(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[196]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[196]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[196], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[196]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[196], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[196]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[196]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[196]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$create_using_usbmux(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[185]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[185]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[185], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[185]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[185], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[185]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[185]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[185]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$devs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[75]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[75], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[75]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[75], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[75]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$get_device(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[109]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[109]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[109]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[109]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[109]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[109]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$get_home_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[151]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[151]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[151], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[151]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[151], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[151]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[151]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[151]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$get_local_ip(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[200]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[200]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[200], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[200]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[200], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[200]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[200]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[200]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$get_tunneld_devices(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[76]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[76]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[76]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[76]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[76]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[76]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$inquirer3(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[124]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[124]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[124]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[124]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[124]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[124]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[91]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[91]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[91], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[91]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[91], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[91]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[91]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[91]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[38]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[38]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[38], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[38]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[38], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[38]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[38]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[38]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$multiprocessing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[171]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[171]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[171]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[171]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$plistlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[154]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[154]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[154]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[154]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[154]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[154]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$prompt_device_list(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[188]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[188]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[188], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[188]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[188], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[188]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[188]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[188]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$pymd_ver(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[103]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[103]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[103]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[103]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[103]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[103]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$refresh_devs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[107]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[107]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[107]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[107]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[107]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[107]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$select_devices_by_connection_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[179]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[179]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[179]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[179]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[179]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[179]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$sleep(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[177]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[177]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[177], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[177]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[177], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[177]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[177]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[177]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[35]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[35]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[35]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[35]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[35]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[35]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$start_tunneld_proc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[173]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[173]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[173]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[173]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[173]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[173]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[94]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[94]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[94], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[94]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[94], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[94]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[94]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[94]);
    }

    return result;
}

static PyObject *module_var_accessor_SideJITServer$write_pairing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_SideJITServer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_SideJITServer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[192]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_SideJITServer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[192]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[192], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[192]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[192], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[192]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[192]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[192]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f66c6263c83075ba3172648ec497748a;
static PyCodeObject *code_objects_7203f3f1fae266b4baea0bb12620c986;
static PyCodeObject *code_objects_a6a66e5e0c4bf0e55df70395770c16a5;
static PyCodeObject *code_objects_1cc813936ec228fce2d6fdb07384d780;
static PyCodeObject *code_objects_722f2df71134428aa873de49c538a360;
static PyCodeObject *code_objects_7a313a22881501eff935e1ea6cd07d05;
static PyCodeObject *code_objects_4b1c7c6e6df7b0f6604111a199c23873;
static PyCodeObject *code_objects_247ac04a958a04f5bbb802b5340075d1;
static PyCodeObject *code_objects_34eda8d4cfe6d3efa57bd76989353161;
static PyCodeObject *code_objects_7fee7e9d692ae376003a11868574d802;
static PyCodeObject *code_objects_19d81ad06cb931c076e21e2d14daba01;
static PyCodeObject *code_objects_40478192c0b51895c3add084a35297f2;
static PyCodeObject *code_objects_99c6b48a94ffd947ab683d997e9a86f6;
static PyCodeObject *code_objects_5af5b117fcb32079e0ada41a37c5a436;
static PyCodeObject *code_objects_6b3839c77b32c08dc608bb6f2f2022f2;
static PyCodeObject *code_objects_b5869414e2ad49bf7efb76a3a26cac04;
static PyCodeObject *code_objects_be978dc638e2aefb1ec11039f421bb5c;
static PyCodeObject *code_objects_5b03cb786137d8322d5578821fd2c2c1;
static PyCodeObject *code_objects_14c66aa942b2bf13a166338f0f168edc;
static PyCodeObject *code_objects_c83654d6ef0e8ca91e837232420c791e;
static PyCodeObject *code_objects_6b25eca053180a04e293c14a4029024f;
static PyCodeObject *code_objects_6beb8443b414a664d0f038886c6b6e2a;
static PyCodeObject *code_objects_3897e4a0593d675eda49c09e57a6f5a1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[307]); CHECK_OBJECT(module_filename_obj);
    code_objects_f66c6263c83075ba3172648ec497748a = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[73], mod_consts[308], NULL, 1, 0, 0);
    code_objects_7203f3f1fae266b4baea0bb12620c986 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[309], mod_consts[309], NULL, NULL, 0, 0, 0);
    code_objects_a6a66e5e0c4bf0e55df70395770c16a5 = MAKE_CODE_OBJECT(module_filename_obj, 52, 0, mod_consts[82], mod_consts[82], mod_consts[310], NULL, 0, 0, 0);
    code_objects_1cc813936ec228fce2d6fdb07384d780 = MAKE_CODE_OBJECT(module_filename_obj, 144, 0, mod_consts[197], mod_consts[197], mod_consts[310], NULL, 0, 0, 0);
    code_objects_722f2df71134428aa873de49c538a360 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[264], mod_consts[265], mod_consts[311], NULL, 4, 0, 0);
    code_objects_7a313a22881501eff935e1ea6cd07d05 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[264], mod_consts[271], mod_consts[312], NULL, 6, 0, 0);
    code_objects_4b1c7c6e6df7b0f6604111a199c23873 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[266], mod_consts[267], mod_consts[313], NULL, 1, 0, 0);
    code_objects_247ac04a958a04f5bbb802b5340075d1 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[266], mod_consts[272], mod_consts[313], NULL, 1, 0, 0);
    code_objects_34eda8d4cfe6d3efa57bd76989353161 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[288], mod_consts[314], NULL, 3, 0, 0);
    code_objects_7fee7e9d692ae376003a11868574d802 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[74], mod_consts[268], mod_consts[313], NULL, 1, 0, 0);
    code_objects_19d81ad06cb931c076e21e2d14daba01 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[74], mod_consts[280], mod_consts[313], NULL, 1, 0, 0);
    code_objects_40478192c0b51895c3add084a35297f2 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[196], mod_consts[196], mod_consts[315], NULL, 1, 0, 0);
    code_objects_99c6b48a94ffd947ab683d997e9a86f6 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[289], mod_consts[290], mod_consts[316], NULL, 1, 0, 0);
    code_objects_5af5b117fcb32079e0ada41a37c5a436 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[114], mod_consts[279], mod_consts[317], NULL, 2, 0, 0);
    code_objects_6b3839c77b32c08dc608bb6f2f2022f2 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], mod_consts[318], NULL, 1, 0, 0);
    code_objects_b5869414e2ad49bf7efb76a3a26cac04 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[200], mod_consts[200], mod_consts[319], NULL, 0, 0, 0);
    code_objects_be978dc638e2aefb1ec11039f421bb5c = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[277], mod_consts[320], NULL, 3, 0, 0);
    code_objects_5b03cb786137d8322d5578821fd2c2c1 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[188], mod_consts[188], mod_consts[321], NULL, 1, 0, 0);
    code_objects_14c66aa942b2bf13a166338f0f168edc = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[84], mod_consts[274], mod_consts[322], NULL, 1, 0, 0);
    code_objects_c83654d6ef0e8ca91e837232420c791e = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], mod_consts[323], NULL, 1, 0, 0);
    code_objects_6b25eca053180a04e293c14a4029024f = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[306], mod_consts[306], mod_consts[324], NULL, 8, 0, 0);
    code_objects_6beb8443b414a664d0f038886c6b6e2a = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[173], mod_consts[173], NULL, NULL, 0, 0, 0);
    code_objects_3897e4a0593d675eda49c09e57a6f5a1 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[192], mod_consts[192], mod_consts[325], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__10_refresh_devs(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__11_get_device(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__12__send_json_response(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__13_do_GET(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__14_start_tunneld_proc(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__15_prompt_device_list(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__16_create_service(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__17_get_local_ip(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__18_write_pairing(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__19_start_server(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__2___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__3_asdict(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__5___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__6_refresh_apps(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__7_launch_app(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__8_enable_jit(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_SideJITServer$$$function__9_asdict(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_SideJITServer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_bundle = python_pars[2];
    PyObject *par_pid = python_pars[3];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_722f2df71134428aa873de49c538a360, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__1___init__->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__1___init__ = cache_frame_frame_SideJITServer$$$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__1___init__);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__1___init__) == 2);

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

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_bundle);
        tmp_assattr_value_2 = par_bundle;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_pid);
        tmp_assattr_value_3 = par_pid;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "oooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__1___init__,
        type_description_1,
        par_self,
        par_name,
        par_bundle,
        par_pid
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__1___init__ == cache_frame_frame_SideJITServer$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__1___init__);
        cache_frame_frame_SideJITServer$$$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__1___init__);

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
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_pid);
    Py_DECREF(par_pid);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_pid);
    Py_DECREF(par_pid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__2___repr__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__2___repr__ = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__2___repr__)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__2___repr__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4b1c7c6e6df7b0f6604111a199c23873, module_SideJITServer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__2___repr__->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__2___repr__ = cache_frame_frame_SideJITServer$$$function__2___repr__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__2___repr__);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__2___repr__) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[3];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__2___repr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__2___repr__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__2___repr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__2___repr__,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__2___repr__ == cache_frame_frame_SideJITServer$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__2___repr__);
        cache_frame_frame_SideJITServer$$$function__2___repr__ = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__2___repr__);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__3_asdict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__3_asdict;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__3_asdict = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__3_asdict)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__3_asdict);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__3_asdict == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__3_asdict = MAKE_FUNCTION_FRAME(tstate, code_objects_7fee7e9d692ae376003a11868574d802, module_SideJITServer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__3_asdict->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__3_asdict = cache_frame_frame_SideJITServer$$$function__3_asdict;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__3_asdict);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__3_asdict) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[1];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 50;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[2];
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 50;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__3_asdict, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__3_asdict->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__3_asdict, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__3_asdict,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__3_asdict == cache_frame_frame_SideJITServer$$$function__3_asdict) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__3_asdict);
        cache_frame_frame_SideJITServer$$$function__3_asdict = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__3_asdict);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handle = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_udid = python_pars[3];
    PyObject *par_apps = python_pars[4];
    PyObject *par_all_apps = python_pars[5];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__4___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__4___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__4___init__)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__4___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__4___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7a313a22881501eff935e1ea6cd07d05, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__4___init__->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__4___init__ = cache_frame_frame_SideJITServer$$$function__4___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__4___init__);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__4___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_handle);
        tmp_assattr_value_1 = par_handle;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_2 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_udid);
        tmp_assattr_value_3 = par_udid;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[8], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_apps);
        tmp_assattr_value_4 = par_apps;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[9], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_all_apps);
        tmp_assattr_value_5 = par_all_apps;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[10], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__4___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__4___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__4___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__4___init__,
        type_description_1,
        par_self,
        par_handle,
        par_name,
        par_udid,
        par_apps,
        par_all_apps
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__4___init__ == cache_frame_frame_SideJITServer$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__4___init__);
        cache_frame_frame_SideJITServer$$$function__4___init__ = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__4___init__);

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
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);
    CHECK_OBJECT(par_apps);
    Py_DECREF(par_apps);
    CHECK_OBJECT(par_all_apps);
    Py_DECREF(par_all_apps);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);
    CHECK_OBJECT(par_apps);
    Py_DECREF(par_apps);
    CHECK_OBJECT(par_all_apps);
    Py_DECREF(par_all_apps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__5___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__5___repr__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__5___repr__ = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__5___repr__)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__5___repr__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__5___repr__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__5___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_247ac04a958a04f5bbb802b5340075d1, module_SideJITServer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__5___repr__->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__5___repr__ = cache_frame_frame_SideJITServer$$$function__5___repr__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__5___repr__);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__5___repr__) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__5___repr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__5___repr__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__5___repr__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__5___repr__,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__5___repr__ == cache_frame_frame_SideJITServer$$$function__5___repr__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__5___repr__);
        cache_frame_frame_SideJITServer$$$function__5___repr__ = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__5___repr__);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__6_refresh_apps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_apps = NULL;
    PyObject *var_all_apps = NULL;
    PyObject *outline_0_var_app = NULL;
    PyObject *outline_1_var_name = NULL;
    PyObject *outline_1_var_bundle = NULL;
    PyObject *outline_2_var_app = NULL;
    PyObject *outline_3_var_name = NULL;
    PyObject *outline_3_var_bundle = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$$36$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__6_refresh_apps;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__6_refresh_apps = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__6_refresh_apps)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__6_refresh_apps);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__6_refresh_apps == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__6_refresh_apps = MAKE_FUNCTION_FRAME(tstate, code_objects_14c66aa942b2bf13a166338f0f168edc, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__6_refresh_apps->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__6_refresh_apps = cache_frame_frame_SideJITServer$$$function__6_refresh_apps;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__6_refresh_apps);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__6_refresh_apps) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = module_var_accessor_SideJITServer$InstallationProxyService(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_called_instance_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 66;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[14]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_apps == NULL);
        var_apps = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_apps);
            tmp_iter_arg_1 = var_apps;
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 68;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooo";
                    exception_lineno = 68;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_6 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_app;
                outline_0_var_app = tmp_assign_source_6;
                Py_INCREF(outline_0_var_app);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(var_apps);
            tmp_expression_value_4 = var_apps;
            CHECK_OBJECT(outline_0_var_app);
            tmp_subscript_value_1 = outline_0_var_app;
            tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 68;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_subscript_value_2 = mod_consts[15];
            tmp_dictset38_key_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dictset38_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 68;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_app);
            tmp_dictset38_value_1 = outline_0_var_app;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 68;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_2 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_app);
        outline_0_var_app = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_app);
        outline_0_var_app = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 68;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_all_apps == NULL);
        var_all_apps = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(var_all_apps);
            tmp_expression_value_5 = var_all_apps;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[16]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 69;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooo";
                    exception_lineno = 69;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_1__source_iter;
                tmp_listcomp$$36$tuple_unpack_1__source_iter = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$$36$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_1__element_1;
                tmp_listcomp$$36$tuple_unpack_1__element_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$$36$tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_1__element_2;
                tmp_listcomp$$36$tuple_unpack_1__element_2 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$$36$tuple_unpack_1__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$$36$tuple_unpack_1__source_iter);
        tmp_listcomp$$36$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_1__element_1);
        tmp_listcomp$$36$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_1__element_2);
        tmp_listcomp$$36$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$$36$tuple_unpack_1__source_iter);
        tmp_listcomp$$36$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__element_1);
            tmp_assign_source_13 = tmp_listcomp$$36$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_1_var_name;
                outline_1_var_name = tmp_assign_source_13;
                Py_INCREF(outline_1_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_1__element_1);
        tmp_listcomp$$36$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_1__element_2);
            tmp_assign_source_14 = tmp_listcomp$$36$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_1_var_bundle;
                outline_1_var_bundle = tmp_assign_source_14;
                Py_INCREF(outline_1_var_bundle);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_1__element_2);
        tmp_listcomp$$36$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_3 = module_var_accessor_SideJITServer$App(tstate);
            if (unlikely(tmp_called_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_name);
            tmp_args_element_value_1 = outline_1_var_name;
            CHECK_OBJECT(outline_1_var_bundle);
            tmp_args_element_value_2 = outline_1_var_bundle;
            frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
            }

            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_name);
        outline_1_var_name = NULL;
        Py_XDECREF(outline_1_var_bundle);
        outline_1_var_bundle = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_1_var_name);
        outline_1_var_name = NULL;
        Py_XDECREF(outline_1_var_bundle);
        outline_1_var_bundle = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 69;
        goto frame_exception_exit_1;
        outline_result_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_apps);
            tmp_iter_arg_4 = var_apps;
            tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_8;
            }
            assert(tmp_dictcontraction_2__$0 == NULL);
            tmp_dictcontraction_2__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
            assert(tmp_dictcontraction_2__contraction == NULL);
            tmp_dictcontraction_2__contraction = tmp_assign_source_17;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_dictcontraction_2__$0);
            tmp_next_source_3 = tmp_dictcontraction_2__$0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooo";
                    exception_lineno = 70;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_2__iter_value_0;
                tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
            tmp_assign_source_19 = tmp_dictcontraction_2__iter_value_0;
            {
                PyObject *old = outline_2_var_app;
                outline_2_var_app = tmp_assign_source_19;
                Py_INCREF(outline_2_var_app);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_subscript_result_1;
            int tmp_truth_name_1;
            tmp_cmp_expr_left_1 = mod_consts[18];
            CHECK_OBJECT(var_apps);
            tmp_expression_value_6 = var_apps;
            CHECK_OBJECT(outline_2_var_app);
            tmp_subscript_value_3 = outline_2_var_app;
            tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
            if (tmp_cmp_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
            Py_DECREF(tmp_cmp_expr_right_1);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            tmp_cmp_expr_left_2 = mod_consts[19];
            CHECK_OBJECT(var_apps);
            tmp_expression_value_8 = var_apps;
            CHECK_OBJECT(outline_2_var_app);
            tmp_subscript_value_4 = outline_2_var_app;
            tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_subscript_value_5 = mod_consts[18];
            tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_cmp_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            Py_DECREF(tmp_cmp_expr_right_2);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(var_apps);
            tmp_expression_value_11 = var_apps;
            CHECK_OBJECT(outline_2_var_app);
            tmp_subscript_value_6 = outline_2_var_app;
            tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_subscript_value_7 = mod_consts[18];
            tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_subscript_value_8 = mod_consts[19];
            tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_subscript_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_subscript_result_1);

                exception_lineno = 71;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_subscript_result_1);
            tmp_and_right_value_1 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_and_right_value_1 = tmp_and_left_value_2;
            and_end_2:;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_dictset38_key_2;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_dictset38_value_2;
            PyObject *tmp_dictset38_dict_2;
            CHECK_OBJECT(var_apps);
            tmp_expression_value_13 = var_apps;
            CHECK_OBJECT(outline_2_var_app);
            tmp_subscript_value_9 = outline_2_var_app;
            tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_9);
            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_subscript_value_10 = mod_consts[15];
            tmp_dictset38_key_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dictset38_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(outline_2_var_app);
            tmp_dictset38_value_2 = outline_2_var_app;
            CHECK_OBJECT(tmp_dictcontraction_2__contraction);
            tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_2));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

            Py_DECREF(tmp_dictset38_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto try_except_handler_9;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_assign_source_15 = tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_2_var_app);
        outline_2_var_app = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_2_var_app);
        outline_2_var_app = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 70;
        goto frame_exception_exit_1;
        outline_result_3:;
        {
            PyObject *old = var_apps;
            assert(old != NULL);
            var_apps = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(var_apps);
            tmp_expression_value_14 = var_apps;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[16]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_10;
            }
            frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 72;
            tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_iter_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_21;
        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_4 = tmp_listcomp_2__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooo";
                    exception_lineno = 72;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_6 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_2__source_iter;
                tmp_listcomp$$36$tuple_unpack_2__source_iter = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$$36$tuple_unpack_2__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_2__element_1;
                tmp_listcomp$$36$tuple_unpack_2__element_1 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$$36$tuple_unpack_2__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$$36$tuple_unpack_2__element_2;
                tmp_listcomp$$36$tuple_unpack_2__element_2 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$$36$tuple_unpack_2__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_13;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_lineno_9 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_9 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$$36$tuple_unpack_2__source_iter);
        tmp_listcomp$$36$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_2__element_1);
        tmp_listcomp$$36$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_2__element_2);
        tmp_listcomp$$36$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$$36$tuple_unpack_2__source_iter);
        tmp_listcomp$$36$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__element_1);
            tmp_assign_source_26 = tmp_listcomp$$36$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_3_var_name;
                outline_3_var_name = tmp_assign_source_26;
                Py_INCREF(outline_3_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_2__element_1);
        tmp_listcomp$$36$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp$$36$tuple_unpack_2__element_2);
            tmp_assign_source_27 = tmp_listcomp$$36$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_3_var_bundle;
                outline_3_var_bundle = tmp_assign_source_27;
                Py_INCREF(outline_3_var_bundle);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$$36$tuple_unpack_2__element_2);
        tmp_listcomp$$36$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_5 = module_var_accessor_SideJITServer$App(tstate);
            if (unlikely(tmp_called_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(outline_3_var_name);
            tmp_args_element_value_3 = outline_3_var_name;
            CHECK_OBJECT(outline_3_var_bundle);
            tmp_args_element_value_4 = outline_3_var_bundle;
            frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
            }

            if (tmp_append_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto try_except_handler_11;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assattr_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assattr_value_2);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_11 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_11 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_3_var_name);
        outline_3_var_name = NULL;
        Py_XDECREF(outline_3_var_bundle);
        outline_3_var_bundle = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_lineno_12 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_12 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_3_var_name);
        outline_3_var_name = NULL;
        Py_XDECREF(outline_3_var_bundle);
        outline_3_var_bundle = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 72;
        goto frame_exception_exit_1;
        outline_result_4:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;
            type_description_1 = "ooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__6_refresh_apps, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__6_refresh_apps->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__6_refresh_apps, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__6_refresh_apps,
        type_description_1,
        par_self,
        var_apps,
        var_all_apps
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__6_refresh_apps == cache_frame_frame_SideJITServer$$$function__6_refresh_apps) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__6_refresh_apps);
        cache_frame_frame_SideJITServer$$$function__6_refresh_apps = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__6_refresh_apps);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_apps);
    Py_DECREF(var_apps);
    var_apps = NULL;
    Py_XDECREF(var_all_apps);
    var_all_apps = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_apps);
    var_apps = NULL;
    Py_XDECREF(var_all_apps);
    var_all_apps = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__7_launch_app(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bundle_id = python_pars[1];
    PyObject *par_sus = python_pars[2];
    PyObject *var_dvt = NULL;
    PyObject *var_process_control = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__7_launch_app;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__7_launch_app = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__7_launch_app)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__7_launch_app);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__7_launch_app == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__7_launch_app = MAKE_FUNCTION_FRAME(tstate, code_objects_be978dc638e2aefb1ec11039f421bb5c, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__7_launch_app->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__7_launch_app = cache_frame_frame_SideJITServer$$$function__7_launch_app;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__7_launch_app);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__7_launch_app) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = module_var_accessor_SideJITServer$DvtSecureSocketProxyService(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 76;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 76;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[22]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_dvt == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_dvt = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = module_var_accessor_SideJITServer$ProcessControl(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[23]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_dvt);
        tmp_args_element_value_1 = var_dvt;
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 77;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(var_process_control == NULL);
        var_process_control = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        CHECK_OBJECT(var_process_control);
        tmp_expression_value_4 = var_process_control;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[24]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_bundle_id);
        tmp_kw_call_value_0_2 = par_bundle_id;
        tmp_kw_call_value_1_1 = MAKE_DICT_EMPTY(tstate);
        tmp_kw_call_value_2_1 = Py_False;
        CHECK_OBJECT(par_sus);
        tmp_kw_call_value_3_1 = par_sus;
        tmp_kw_call_value_4_1 = MAKE_DICT_EMPTY(tstate);
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 78;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[25]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__7_launch_app, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__7_launch_app, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(tstate);
        tmp_args_element_value_3 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_3); 
        tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
        if (tmp_args_element_value_4 == NULL) {
            tmp_args_element_value_4 = Py_None;
        }
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 76;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__7_launch_app->m_frame)) {
            frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 76;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__7_launch_app->m_frame)) {
            frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts[26]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_frame_SideJITServer$$$function__7_launch_app->m_frame.f_lineno = 76;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts[26]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__7_launch_app, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__7_launch_app->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__7_launch_app, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__7_launch_app,
        type_description_1,
        par_self,
        par_bundle_id,
        par_sus,
        var_dvt,
        var_process_control
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__7_launch_app == cache_frame_frame_SideJITServer$$$function__7_launch_app) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__7_launch_app);
        cache_frame_frame_SideJITServer$$$function__7_launch_app = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__7_launch_app);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dvt);
    Py_DECREF(var_dvt);
    var_dvt = NULL;
    Py_XDECREF(var_process_control);
    var_process_control = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_dvt);
    var_dvt = NULL;
    Py_XDECREF(var_process_control);
    var_process_control = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bundle_id);
    Py_DECREF(par_bundle_id);
    CHECK_OBJECT(par_sus);
    Py_DECREF(par_sus);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bundle_id);
    Py_DECREF(par_bundle_id);
    CHECK_OBJECT(par_sus);
    Py_DECREF(par_sus);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__8_enable_jit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_apps = NULL;
    PyObject *var_app = NULL;
    PyObject *var_debugserver = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_s = NULL;
    PyObject *var_out = NULL;
    struct Nuitka_CellObject *var_new = Nuitka_Cell_NewEmpty();
    PyObject *outline_0_var_a = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__8_enable_jit;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__8_enable_jit = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__8_enable_jit)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__8_enable_jit);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__8_enable_jit == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__8_enable_jit = MAKE_FUNCTION_FRAME(tstate, code_objects_5af5b117fcb32079e0ada41a37c5a436, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__8_enable_jit->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__8_enable_jit = cache_frame_frame_SideJITServer$$$function__8_enable_jit;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__8_enable_jit);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__8_enable_jit) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "oooooooooc";
                    exception_lineno = 83;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_5;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(outline_0_var_a);
            tmp_expression_value_2 = outline_0_var_a;
            tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_name);
            tmp_cmp_expr_right_1 = par_name;
            tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(outline_0_var_a);
            tmp_expression_value_3 = outline_0_var_a;
            tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
            if (tmp_cmp_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_name);
            tmp_cmp_expr_right_2 = par_name;
            tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            Py_DECREF(tmp_cmp_expr_left_2);
            if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_1 = tmp_or_left_value_1;
            or_end_1:;
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
            CHECK_OBJECT(outline_0_var_a);
            tmp_append_value_1 = outline_0_var_a;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 83;
                type_description_1 = "oooooooooc";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;
            type_description_1 = "oooooooooc";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 83;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_apps == NULL);
        var_apps = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_apps);
        tmp_len_arg_1 = var_apps;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[27];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_name);
            tmp_operand_value_1 = par_name;
            tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 85;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 85;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_apps);
        tmp_expression_value_4 = var_apps;
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_app == NULL);
        var_app = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_app);
        tmp_expression_value_5 = var_app;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[2]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = const_int_0;
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_app);
        tmp_expression_value_6 = var_app;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_expression_value_8 = var_app;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_5);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 88;
        tmp_cmp_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[30];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_name);
            tmp_operand_value_2 = par_name;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 89;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[4];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 89;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[7]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooc";
            goto try_except_handler_4;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[31]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooc";
            goto try_except_handler_4;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[32]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooc";
            goto try_except_handler_4;
        }
        tmp_subscript_value_2 = const_int_0;
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooc";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_13 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[7]);
            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 93;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_3;
            }
            frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 93;
            tmp_tuple_element_3 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                PyTuple_GET_ITEM(mod_consts[34], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 93;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_7);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
        assert(var_debugserver == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_debugserver = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_iter_arg_2 = tmp_assign_unpack_1__assign_source;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;
            type_description_1 = "oooooooooc";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;
            type_description_1 = "oooooooooc";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;
            type_description_1 = "oooooooooc";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;
            type_description_1 = "oooooooooc";
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_host = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_port = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[29]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_expression_value_15 = var_app;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[1]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 95;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = Py_True;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_assattr_target_1 = var_app;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_16 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[35]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[36]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[37]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_19 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[39]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[40];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_host);
            tmp_format_value_3 = var_host;
            tmp_format_spec_3 = mod_consts[4];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 98;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_port);
            tmp_format_value_4 = var_port;
            tmp_format_spec_4 = mod_consts[4];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 98;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 98;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_s);
        tmp_called_instance_2 = var_s;
        CHECK_OBJECT(var_debugserver);
        tmp_args_element_value_7 = var_debugserver;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 99;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[42], tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_s);
        tmp_called_instance_3 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 101;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 101;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_5;
        tmp_expression_value_20 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 102;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[39]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = mod_consts[45];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_s);
            tmp_called_instance_4 = var_s;
            frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 102;
            tmp_expression_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_4,
                mod_consts[46],
                PyTuple_GET_ITEM(mod_consts[47], 0)
            );

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 102;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_5;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[48]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 102;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_5;
            }
            frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 102;
            tmp_format_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
            Py_DECREF(tmp_called_value_6);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 102;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_5 = mod_consts[4];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 102;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_8 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 102;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_s);
        tmp_called_instance_5 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 104;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        tmp_expression_value_22 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 105;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[39]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[50];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_s);
            tmp_called_instance_6 = var_s;
            frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 105;
            tmp_expression_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_6,
                mod_consts[46],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 105;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_6;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[48]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 105;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_6;
            }
            frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 105;
            tmp_format_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 105;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_6 = mod_consts[4];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 105;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 105;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 105;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_7;
        tmp_expression_value_24 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 107;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[39]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[52];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_app);
            tmp_expression_value_25 = var_app;
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[2]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 107;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_7 = mod_consts[4];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 107;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_string_concat_values_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_10 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 107;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 107;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(var_s);
        tmp_expression_value_26 = var_s;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[43]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = mod_consts[54];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_8);
            CHECK_OBJECT(var_app);
            tmp_expression_value_27 = var_app;
            tmp_format_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[2]);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 108;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_8 = mod_consts[55];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 108;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_string_concat_values_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_str_arg_value_1 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_str_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 108;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = UNICODE_ENCODE1(tstate, tmp_str_arg_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 108;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 108;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_s);
        tmp_called_instance_7 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 109;
        tmp_expression_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[48]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 109;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_9;
        tmp_expression_value_29 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[39]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = mod_consts[58];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_out);
            tmp_format_value_9 = var_out;
            tmp_format_spec_9 = mod_consts[4];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 110;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_string_concat_values_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_12 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 110;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 110;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_10;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_out);
        tmp_expression_value_30 = var_out;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[59]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 112;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts[60]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_10);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_10);

            exception_lineno = 112;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_10);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_cmp_expr_left_6 = mod_consts[61];
        CHECK_OBJECT(var_out);
        tmp_cmp_expr_right_6 = var_out;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_4 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_s);
        tmp_called_instance_8 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 113;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[62], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_s);
        tmp_called_instance_9 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 114;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_new) == NULL);
        Nuitka_Cell_SET(var_new, tmp_assign_source_16);

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = mod_consts[63];
            tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
            assert(!(tmp_assign_source_17 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_17;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_new;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr(tstate, tmp_closure_1);

            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_12;
        tmp_called_instance_10 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_called_instance_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 116;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 116;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_10;
        tmp_expression_value_31 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[39]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = mod_consts[65];
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(tstate, 7);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyObject *tmp_format_value_12;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_10);
            CHECK_OBJECT(var_app);
            tmp_expression_value_32 = var_app;
            tmp_format_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[2]);
            if (tmp_format_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 117;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_10 = mod_consts[4];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            Py_DECREF(tmp_format_value_10);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 117;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[66];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_10);
            CHECK_OBJECT(var_host);
            tmp_format_value_11 = var_host;
            tmp_format_spec_11 = mod_consts[4];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 117;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 3, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 4, tmp_tuple_element_10);
            CHECK_OBJECT(var_port);
            tmp_format_value_12 = var_port;
            tmp_format_spec_12 = mod_consts[4];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 117;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 5, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 6, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_string_concat_values_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_args_element_value_13 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 117;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 117;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_11;
        tmp_expression_value_33 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[39]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = mod_consts[67];
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_13;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_format_spec_13;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_11);
            CHECK_OBJECT(var_app);
            tmp_expression_value_34 = var_app;
            tmp_format_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[2]);
            if (tmp_format_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 119;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_13 = mod_consts[4];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
            Py_DECREF(tmp_format_value_13);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 119;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_string_concat_values_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_args_element_value_14 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 119;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_12;
        tmp_expression_value_35 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 121;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[39]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = mod_consts[68];
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_14;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_format_spec_14;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_12);
            CHECK_OBJECT(var_app);
            tmp_expression_value_36 = var_app;
            tmp_format_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[2]);
            if (tmp_format_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 121;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_14 = mod_consts[4];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 121;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_string_concat_values_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_15 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 121;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 121;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_end_4:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_s);
        tmp_called_instance_11 = var_s;
        frame_frame_SideJITServer$$$function__8_enable_jit->m_frame.f_lineno = 123;
        tmp_call_result_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[69]);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = mod_consts[70];
        tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_15;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_format_spec_15;
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 0, tmp_tuple_element_13);
            CHECK_OBJECT(var_app);
            tmp_expression_value_37 = var_app;
            tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[0]);
            if (tmp_operand_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 124;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_13;
            }
            tmp_format_value_15 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_format_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 124;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_13;
            }
            tmp_format_spec_15 = mod_consts[4];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
            Py_DECREF(tmp_format_value_15);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 124;
                type_description_1 = "oooooooooc";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_string_concat_values_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_return_value = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "oooooooooc";
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__8_enable_jit, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__8_enable_jit->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__8_enable_jit, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__8_enable_jit,
        type_description_1,
        par_self,
        par_name,
        var_apps,
        var_app,
        var_debugserver,
        var_host,
        var_port,
        var_s,
        var_out,
        var_new
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__8_enable_jit == cache_frame_frame_SideJITServer$$$function__8_enable_jit) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__8_enable_jit);
        cache_frame_frame_SideJITServer$$$function__8_enable_jit = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__8_enable_jit);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_apps);
    Py_DECREF(var_apps);
    var_apps = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_debugserver);
    var_debugserver = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_apps);
    var_apps = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_debugserver);
    var_debugserver = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_new);
    Py_DECREF(var_new);
    var_new = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_locals *generator_heap = (struct SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f66c6263c83075ba3172648ec497748a, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *));
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

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 115;
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
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_cmp_expr_left_1 = generator_heap->var_x;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts[71]);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


        generator_heap->exception_lineno = 115;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator->m_closure[1]
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

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_context,
        module_SideJITServer,
        mod_consts[72],
#if PYTHON_VERSION >= 0x350
        mod_consts[73],
#endif
        code_objects_f66c6263c83075ba3172648ec497748a,
        closure,
        2,
#if 1
        sizeof(struct SideJITServer$$$function__8_enable_jit$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_SideJITServer$$$function__9_asdict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_a = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__9_asdict;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__9_asdict = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__9_asdict)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__9_asdict);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__9_asdict == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__9_asdict = MAKE_FUNCTION_FRAME(tstate, code_objects_19d81ad06cb931c076e21e2d14daba01, module_SideJITServer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__9_asdict->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__9_asdict = cache_frame_frame_SideJITServer$$$function__9_asdict;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__9_asdict);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__9_asdict) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 127;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 127;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
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

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "o";
                    exception_lineno = 127;
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
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_4;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_a);
            tmp_called_instance_1 = outline_0_var_a;
            frame_frame_SideJITServer$$$function__9_asdict->m_frame.f_lineno = 127;
            tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[74]);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 127;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 127;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_dict_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_dict_value_1);
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
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 127;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_return_value = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        Py_DECREF(tmp_dict_key_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "o";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__9_asdict, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__9_asdict->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__9_asdict, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__9_asdict,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__9_asdict == cache_frame_frame_SideJITServer$$$function__9_asdict) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__9_asdict);
        cache_frame_frame_SideJITServer$$$function__9_asdict = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__9_asdict);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__10_refresh_devs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_enable_all_apps = python_pars[0];
    PyObject *var_dev = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__10_refresh_devs;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__10_refresh_devs = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_1);
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__10_refresh_devs)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__10_refresh_devs);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__10_refresh_devs == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__10_refresh_devs = MAKE_FUNCTION_FRAME(tstate, code_objects_c83654d6ef0e8ca91e837232420c791e, module_SideJITServer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__10_refresh_devs->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__10_refresh_devs = cache_frame_frame_SideJITServer$$$function__10_refresh_devs;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__10_refresh_devs);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__10_refresh_devs) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = module_var_accessor_SideJITServer$get_tunneld_devices(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[76]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 132;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oo";
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

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oo";
                exception_lineno = 132;
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
            PyObject *old = var_dev;
            var_dev = tmp_assign_source_4;
            Py_INCREF(var_dev);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$asyncio(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[77]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = module_var_accessor_SideJITServer$auto_mount_personalized(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[79]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_dev);
        tmp_args_element_value_2 = var_dev;
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 134;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 134;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__10_refresh_devs, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__10_refresh_devs, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = module_var_accessor_SideJITServer$AlreadyMountedError(tstate);
        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[80]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 135;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 133;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame)) {
            frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_4;
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        tmp_expression_value_2 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[81]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = module_var_accessor_SideJITServer$Device(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[82]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dev);
        tmp_args_element_value_4 = var_dev;
        CHECK_OBJECT(var_dev);
        tmp_expression_value_3 = var_dev;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[83];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_value_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_5 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(var_dev);
        tmp_expression_value_4 = var_dev;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_or_left_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[83];
        Py_INCREF(tmp_or_right_value_2);
        tmp_args_element_value_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_6 = tmp_or_left_value_2;
        or_end_2:;
        tmp_args_element_value_7 = MAKE_LIST_EMPTY(tstate, 0);
        CHECK_OBJECT(par_enable_all_apps);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_enable_all_apps);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_8 = MAKE_LIST_EMPTY(tstate, 0);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_8 = Py_None;
        Py_INCREF(tmp_args_element_value_8);
        condexpr_end_1:;
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 137;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[84]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 132;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__10_refresh_devs, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__10_refresh_devs->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__10_refresh_devs, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__10_refresh_devs,
        type_description_1,
        par_enable_all_apps,
        var_dev
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__10_refresh_devs == cache_frame_frame_SideJITServer$$$function__10_refresh_devs) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__10_refresh_devs);
        cache_frame_frame_SideJITServer$$$function__10_refresh_devs = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__10_refresh_devs);

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
    Py_XDECREF(var_dev);
    var_dev = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_dev);
    var_dev = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_enable_all_apps);
    Py_DECREF(par_enable_all_apps);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_enable_all_apps);
    Py_DECREF(par_enable_all_apps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__11_get_device(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_udid = python_pars[0];
    PyObject *var_d = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__11_get_device;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__11_get_device = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__11_get_device)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__11_get_device);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__11_get_device == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__11_get_device = MAKE_FUNCTION_FRAME(tstate, code_objects_6b3839c77b32c08dc608bb6f2f2022f2, module_SideJITServer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__11_get_device->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__11_get_device = cache_frame_frame_SideJITServer$$$function__11_get_device;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__11_get_device);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__11_get_device) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = module_var_accessor_SideJITServer$devs(tstate);
            if (unlikely(tmp_iter_arg_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 141;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "oo";
                    exception_lineno = 141;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_5;
                Py_INCREF(outline_0_var_d);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(outline_0_var_d);
            tmp_expression_value_1 = outline_0_var_d;
            tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_udid);
            tmp_cmp_expr_right_1 = par_udid;
            tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
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
            CHECK_OBJECT(outline_0_var_d);
            tmp_append_value_1 = outline_0_var_d;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 141;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_d);
        tmp_len_arg_1 = var_d;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_2 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_d);
        tmp_expression_value_2 = var_d;
        tmp_subscript_value_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
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


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__11_get_device, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__11_get_device->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__11_get_device, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__11_get_device,
        type_description_1,
        par_udid,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__11_get_device == cache_frame_frame_SideJITServer$$$function__11_get_device) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__11_get_device);
        cache_frame_frame_SideJITServer$$$function__11_get_device = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__11_get_device);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__12__send_json_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status_code = python_pars[1];
    PyObject *par_data = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__12__send_json_response;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__12__send_json_response = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__12__send_json_response)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__12__send_json_response);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__12__send_json_response == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__12__send_json_response = MAKE_FUNCTION_FRAME(tstate, code_objects_34eda8d4cfe6d3efa57bd76989353161, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__12__send_json_response->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__12__send_json_response = cache_frame_frame_SideJITServer$$$function__12__send_json_response;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__12__send_json_response);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__12__send_json_response) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_status_code);
        tmp_args_element_value_1 = par_status_code;
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 148;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[85], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 149;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[86],
            &PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 150;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[88]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[89]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[90]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = module_var_accessor_SideJITServer$json(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[91]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_3 = par_data;
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 151;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[92], tmp_args_element_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[93]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 151;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__12__send_json_response->m_frame.f_lineno = 151;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__12__send_json_response, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__12__send_json_response->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__12__send_json_response, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__12__send_json_response,
        type_description_1,
        par_self,
        par_status_code,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__12__send_json_response == cache_frame_frame_SideJITServer$$$function__12__send_json_response) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__12__send_json_response);
        cache_frame_frame_SideJITServer$$$function__12__send_json_response = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__12__send_json_response);

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
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__13_do_GET(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_parsed_path = NULL;
    PyObject *var_path_parts = NULL;
    PyObject *var_status_code = NULL;
    PyObject *var_response = NULL;
    PyObject *var_device_id = NULL;
    PyObject *var_device = NULL;
    PyObject *var_action = NULL;
    PyObject *var_result = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *outline_1_var_a = NULL;
    PyObject *outline_2_var_a = NULL;
    PyObject *tmp_assignment_expr_1__value = NULL;
    PyObject *tmp_assignment_expr_2__value = NULL;
    PyObject *tmp_assignment_expr_3__value = NULL;
    PyObject *tmp_assignment_expr_4__value = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    nuitka_bool tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_match_statement_1__subject = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__13_do_GET;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__13_do_GET = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__13_do_GET)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__13_do_GET);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__13_do_GET == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__13_do_GET = MAKE_FUNCTION_FRAME(tstate, code_objects_99c6b48a94ffd947ab683d997e9a86f6, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__13_do_GET->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__13_do_GET = cache_frame_frame_SideJITServer$$$function__13_do_GET;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__13_do_GET);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__13_do_GET) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = module_var_accessor_SideJITServer$urlparse(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[95]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 154;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed_path == NULL);
        var_parsed_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_parsed_path);
        tmp_expression_value_4 = var_parsed_path;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[95]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[96]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 155;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts[97]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[98]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 155;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts[97]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path_parts == NULL);
        var_path_parts = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[99];
        assert(var_status_code == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_status_code = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
        assert(var_response == NULL);
        var_response = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_match_statement_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_path_parts);
        tmp_assign_source_6 = var_path_parts;
        assert(tmp_match_statement_1__subject == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_match_statement_1__subject = tmp_assign_source_6;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_sequence_check_cls_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_2_cbool_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_1 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_1)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_1 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_1 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_tmp_and_left_value_2_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_value_2 = tmp_tmp_and_left_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_5 = tmp_match_statement_1__subject;
        tmp_subscript_value_1 = const_int_0;
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[4];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
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
        PyObject *tmp_assign_source_7;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_mvar_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = module_var_accessor_SideJITServer$devs(tstate);
            if (unlikely(tmp_iter_arg_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 162;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooo";
                    exception_lineno = 162;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_11 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_11;
                Py_INCREF(outline_0_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_d);
            tmp_expression_value_6 = outline_0_var_d;
            tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[0]);
            if (tmp_dictset38_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(outline_0_var_d);
            tmp_expression_value_7 = outline_0_var_d;
            tmp_dictset38_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
            if (tmp_dictset38_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_dictset38_key_1);

                exception_lineno = 162;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            Py_DECREF(tmp_dictset38_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 162;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_7 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_d);
        outline_0_var_d = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 162;
        goto try_except_handler_2;
        outline_result_1:;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_7 = DICT_COPY(tstate, mod_consts[100]);
        condexpr_end_1:;
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_12;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_sequence_check_cls_2;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_2;
        bool tmp_tmp_and_left_value_4_cbool_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_2 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_2)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_3 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_2 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_4 = 1;
        tmp_tmp_and_left_value_4_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_and_left_value_4 = tmp_tmp_and_left_value_4_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_8 = tmp_match_statement_1__subject;
        tmp_subscript_value_2 = const_int_0;
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_5 = mod_consts[101];
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_4 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_4 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[102];
        tmp_dict_value_1 = module_var_accessor_SideJITServer$pymd_ver(tstate);
        if (unlikely(tmp_dict_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[103]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 164;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[104];
        tmp_dict_value_1 = module_var_accessor_SideJITServer$__version__(tstate);
        if (unlikely(tmp_dict_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 164;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_13);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_14;
    }
    branch_no_3:;
    branch_no_2:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_sequence_check_cls_3;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_7;
        nuitka_digit tmp_cmp_expr_right_7;
        PyObject *tmp_len_arg_3;
        bool tmp_tmp_and_left_value_6_cbool_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_3 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_3)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_5 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_3 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_7 = 1;
        tmp_tmp_and_left_value_6_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        tmp_and_left_value_6 = tmp_tmp_and_left_value_6_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_9 = tmp_match_statement_1__subject;
        tmp_subscript_value_3 = const_int_0;
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_8 = mod_consts[106];
        tmp_and_right_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_and_right_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_5 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_and_right_value_5 = tmp_and_left_value_6;
        and_end_6:;
        tmp_condition_result_6 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_6 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        tmp_called_value_4 = module_var_accessor_SideJITServer$refresh_devs(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[107]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = DICT_COPY(tstate, mod_consts[108]);
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_16;
    }
    branch_no_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        bool tmp_condition_result_8;
        int tmp_and_left_truth_7;
        bool tmp_and_left_value_7;
        bool tmp_and_right_value_7;
        PyObject *tmp_sequence_check_cls_4;
        PyObject *tmp_cmp_expr_left_10;
        nuitka_digit tmp_cmp_expr_right_10;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_4 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_4)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_7 = (tmp_res) ? true : false;
        tmp_and_left_truth_7 = tmp_and_left_value_7 != false ? 1 : 0;
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_4 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_10 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_10 = 1;
        tmp_and_right_value_7 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        tmp_condition_result_8 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_8 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_10 = tmp_match_statement_1__subject;
        tmp_subscript_value_4 = const_int_0;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 0);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(var_device_id == NULL);
        var_device_id = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_5 = module_var_accessor_SideJITServer$get_device(tstate);
            if (unlikely(tmp_called_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(var_device_id);
            tmp_args_element_value_2 = var_device_id;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 168;
            tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_assignment_expr_1__value == NULL);
            tmp_assignment_expr_1__value = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_assignment_expr_1__value);
            tmp_assign_source_19 = tmp_assignment_expr_1__value;
            assert(var_device == NULL);
            Py_INCREF(tmp_assign_source_19);
            var_device = tmp_assign_source_19;
        }
        CHECK_OBJECT(tmp_assignment_expr_1__value);
        tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_assignment_expr_1__value);
        Py_DECREF(tmp_assignment_expr_1__value);
        tmp_assignment_expr_1__value = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_20;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(var_device);
            tmp_expression_value_11 = var_device;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[9]);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_22;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_23 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooo";
                    exception_lineno = 169;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_24 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_1_var_a;
                outline_1_var_a = tmp_assign_source_24;
                Py_INCREF(outline_1_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_1_var_a);
            tmp_called_instance_1 = outline_1_var_a;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 169;
            tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[74]);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_20 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 169;
        goto try_except_handler_2;
        outline_result_3:;
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_25;
        tmp_assign_source_25 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_25;
    }
    branch_no_8:;
    branch_no_7:;
    branch_no_6:;
    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_8;
        nuitka_bool tmp_and_left_value_8;
        nuitka_bool tmp_and_right_value_8;
        PyObject *tmp_sequence_check_cls_5;
        int tmp_and_left_truth_9;
        nuitka_bool tmp_and_left_value_9;
        nuitka_bool tmp_and_right_value_9;
        PyObject *tmp_cmp_expr_left_12;
        nuitka_digit tmp_cmp_expr_right_12;
        PyObject *tmp_len_arg_5;
        bool tmp_tmp_and_left_value_9_cbool_1;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_5 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_5)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_8 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_5 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_12 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_12 = 2;
        tmp_tmp_and_left_value_9_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        tmp_and_left_value_9 = tmp_tmp_and_left_value_9_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_12 = tmp_match_statement_1__subject;
        tmp_subscript_value_5 = const_int_pos_1;
        tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_5, 1);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_13 = mod_consts[10];
        tmp_and_right_value_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_and_right_value_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_8 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        tmp_and_right_value_8 = tmp_and_left_value_9;
        and_end_9:;
        tmp_condition_result_11 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_condition_result_11 = tmp_and_left_value_8;
        and_end_8:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_13 = tmp_match_statement_1__subject;
        tmp_subscript_value_6 = const_int_0;
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_6, 0);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_device_id;
            var_device_id = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_6 = module_var_accessor_SideJITServer$get_device(tstate);
            if (unlikely(tmp_called_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT(var_device_id);
            tmp_args_element_value_3 = var_device_id;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 170;
            tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 170;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_assignment_expr_2__value == NULL);
            tmp_assignment_expr_2__value = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_assignment_expr_2__value);
            tmp_assign_source_28 = tmp_assignment_expr_2__value;
            {
                PyObject *old = var_device;
                var_device = tmp_assign_source_28;
                Py_INCREF(var_device);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(tmp_assignment_expr_2__value);
        tmp_outline_return_value_2 = tmp_assignment_expr_2__value;
        Py_INCREF(tmp_outline_return_value_2);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_assignment_expr_2__value);
        Py_DECREF(tmp_assignment_expr_2__value);
        tmp_assignment_expr_2__value = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_outline_return_value_2);

            exception_lineno = 170;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_2);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_device);
        tmp_called_instance_2 = var_device;
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 171;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[84]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[110]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[111];
        {
            PyObject *old = var_status_code;
            assert(old != NULL);
            var_status_code = tmp_assign_source_29;
            Py_INCREF(var_status_code);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = DICT_COPY(tstate, mod_consts[112]);
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_30;
            Py_DECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_31;
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(var_device);
            tmp_expression_value_15 = var_device;
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[10]);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_1 = "ooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_1 = "ooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_33;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_34 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooo";
                    exception_lineno = 176;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_35 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_2_var_a;
                outline_2_var_a = tmp_assign_source_35;
                Py_INCREF(outline_2_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_2_var_a);
            tmp_called_instance_3 = outline_2_var_a;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 176;
            tmp_append_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[74]);
            if (tmp_append_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_31 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 176;
        goto try_except_handler_2;
        outline_result_5:;
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    branch_end_12:;
    {
        nuitka_bool tmp_assign_source_36;
        tmp_assign_source_36 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_36;
    }
    branch_no_11:;
    branch_no_10:;
    branch_no_9:;
    {
        bool tmp_condition_result_14;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_FALSE;
        tmp_condition_result_14 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_10;
        nuitka_bool tmp_and_left_value_10;
        nuitka_bool tmp_and_right_value_10;
        PyObject *tmp_sequence_check_cls_6;
        int tmp_and_left_truth_11;
        nuitka_bool tmp_and_left_value_11;
        nuitka_bool tmp_and_right_value_11;
        PyObject *tmp_cmp_expr_left_15;
        nuitka_digit tmp_cmp_expr_right_15;
        PyObject *tmp_len_arg_6;
        bool tmp_tmp_and_left_value_11_cbool_1;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_6 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_6)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_10 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_10 == 1) {
            goto and_right_10;
        } else {
            goto and_left_10;
        }
        and_right_10:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_6 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_15 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_15 = 2;
        tmp_tmp_and_left_value_11_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        tmp_and_left_value_11 = tmp_tmp_and_left_value_11_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_11 == 1) {
            goto and_right_11;
        } else {
            goto and_left_11;
        }
        and_right_11:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_16 = tmp_match_statement_1__subject;
        tmp_subscript_value_7 = const_int_pos_1;
        tmp_cmp_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_7, 1);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_16 = mod_consts[106];
        tmp_and_right_value_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_and_right_value_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_10 = tmp_and_right_value_11;
        goto and_end_11;
        and_left_11:;
        tmp_and_right_value_10 = tmp_and_left_value_11;
        and_end_11:;
        tmp_condition_result_15 = tmp_and_right_value_10;
        goto and_end_10;
        and_left_10:;
        tmp_condition_result_15 = tmp_and_left_value_10;
        and_end_10:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_17 = tmp_match_statement_1__subject;
        tmp_subscript_value_8 = const_int_0;
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_8, 0);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_device_id;
            var_device_id = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_outline_return_value_3;
        int tmp_truth_name_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_7 = module_var_accessor_SideJITServer$get_device(tstate);
            if (unlikely(tmp_called_value_7 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 177;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(var_device_id);
            tmp_args_element_value_4 = var_device_id;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 177;
            tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 177;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_assignment_expr_3__value == NULL);
            tmp_assignment_expr_3__value = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(tmp_assignment_expr_3__value);
            tmp_assign_source_39 = tmp_assignment_expr_3__value;
            {
                PyObject *old = var_device;
                var_device = tmp_assign_source_39;
                Py_INCREF(var_device);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(tmp_assignment_expr_3__value);
        tmp_outline_return_value_3 = tmp_assignment_expr_3__value;
        Py_INCREF(tmp_outline_return_value_3);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_assignment_expr_3__value);
        Py_DECREF(tmp_assignment_expr_3__value);
        tmp_assignment_expr_3__value = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_9 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_9 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_3);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_outline_return_value_3);

            exception_lineno = 177;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_16 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_3);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_device);
        tmp_called_instance_4 = var_device;
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 178;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[84]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 178;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = DICT_COPY(tstate, mod_consts[113]);
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_41;
        tmp_assign_source_41 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_41;
    }
    branch_no_15:;
    branch_no_14:;
    branch_no_13:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_FALSE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        bool tmp_condition_result_18;
        int tmp_and_left_truth_12;
        bool tmp_and_left_value_12;
        bool tmp_and_right_value_12;
        PyObject *tmp_sequence_check_cls_7;
        PyObject *tmp_cmp_expr_left_18;
        nuitka_digit tmp_cmp_expr_right_18;
        PyObject *tmp_len_arg_7;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_sequence_check_cls_7 = tmp_match_statement_1__subject;
        tmp_res = Py_TYPE(tmp_sequence_check_cls_7)->tp_flags & Py_TPFLAGS_SEQUENCE;
        tmp_and_left_value_12 = (tmp_res) ? true : false;
        tmp_and_left_truth_12 = tmp_and_left_value_12 != false ? 1 : 0;
        if (tmp_and_left_truth_12 == 1) {
            goto and_right_12;
        } else {
            goto and_left_12;
        }
        and_right_12:;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_len_arg_7 = tmp_match_statement_1__subject;
        tmp_cmp_expr_left_18 = BUILTIN_LEN(tstate, tmp_len_arg_7);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_18 = 2;
        tmp_and_right_value_12 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        tmp_condition_result_18 = tmp_and_right_value_12;
        goto and_end_12;
        and_left_12:;
        tmp_condition_result_18 = tmp_and_left_value_12;
        and_end_12:;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_18 = tmp_match_statement_1__subject;
        tmp_subscript_value_9 = const_int_0;
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_9, 0);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_device_id;
            var_device_id = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(tmp_match_statement_1__subject);
        tmp_expression_value_19 = tmp_match_statement_1__subject;
        tmp_subscript_value_10 = const_int_pos_1;
        tmp_assign_source_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_10, 1);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(var_action == NULL);
        var_action = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_outline_return_value_4;
        int tmp_truth_name_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_8 = module_var_accessor_SideJITServer$get_device(tstate);
            if (unlikely(tmp_called_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(var_device_id);
            tmp_args_element_value_5 = var_device_id;
            frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 180;
            tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 180;
                type_description_1 = "ooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_assignment_expr_4__value == NULL);
            tmp_assignment_expr_4__value = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(tmp_assignment_expr_4__value);
            tmp_assign_source_45 = tmp_assignment_expr_4__value;
            {
                PyObject *old = var_device;
                var_device = tmp_assign_source_45;
                Py_INCREF(var_device);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(tmp_assignment_expr_4__value);
        tmp_outline_return_value_4 = tmp_assignment_expr_4__value;
        Py_INCREF(tmp_outline_return_value_4);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_assignment_expr_4__value);
        Py_DECREF(tmp_assignment_expr_4__value);
        tmp_assignment_expr_4__value = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_outline_return_value_4);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_outline_return_value_4);

            exception_lineno = 180;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_4);
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_device);
        tmp_called_instance_5 = var_device;
        CHECK_OBJECT(var_action);
        tmp_args_element_value_6 = var_action;
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 181;
        tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[114], tmp_args_element_value_6);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(var_result);
        tmp_assign_source_47 = var_result;
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_47;
            Py_INCREF(var_response);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_48;
        tmp_assign_source_48 = NUITKA_BOOL_TRUE;
        tmp_match_statement_1__indicator = tmp_assign_source_48;
    }
    branch_no_18:;
    branch_no_17:;
    branch_no_16:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
    tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(tmp_match_statement_1__subject);
    Py_DECREF(tmp_match_statement_1__subject);
    tmp_match_statement_1__subject = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_19;
        nuitka_bool tmp_cmp_expr_right_19;
        assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_19 = tmp_match_statement_1__indicator;
        tmp_cmp_expr_right_19 = NUITKA_BOOL_FALSE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[115];
        {
            PyObject *old = var_status_code;
            assert(old != NULL);
            var_status_code = tmp_assign_source_49;
            Py_INCREF(var_status_code);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = DICT_COPY(tstate, mod_consts[116]);
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    branch_no_19:;
    assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
    tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(tmp_match_statement_1__subject);
    Py_DECREF(tmp_match_statement_1__subject);
    tmp_match_statement_1__subject = NULL;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_status_code);
        tmp_args_element_value_7 = var_status_code;
        CHECK_OBJECT(var_response);
        tmp_args_element_value_8 = var_response;
        frame_frame_SideJITServer$$$function__13_do_GET->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_6,
                mod_consts[117],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 187;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__13_do_GET, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__13_do_GET->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__13_do_GET, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__13_do_GET,
        type_description_1,
        par_self,
        var_parsed_path,
        var_path_parts,
        var_status_code,
        var_response,
        var_device_id,
        var_device,
        var_action,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__13_do_GET == cache_frame_frame_SideJITServer$$$function__13_do_GET) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__13_do_GET);
        cache_frame_frame_SideJITServer$$$function__13_do_GET = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__13_do_GET);

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
    CHECK_OBJECT(var_parsed_path);
    Py_DECREF(var_parsed_path);
    var_parsed_path = NULL;
    CHECK_OBJECT(var_path_parts);
    Py_DECREF(var_path_parts);
    var_path_parts = NULL;
    CHECK_OBJECT(var_status_code);
    Py_DECREF(var_status_code);
    var_status_code = NULL;
    CHECK_OBJECT(var_response);
    Py_DECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var_device_id);
    var_device_id = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_parsed_path);
    var_parsed_path = NULL;
    Py_XDECREF(var_path_parts);
    var_path_parts = NULL;
    Py_XDECREF(var_status_code);
    var_status_code = NULL;
    Py_XDECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var_device_id);
    var_device_id = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_SideJITServer$$$function__14_start_tunneld_proc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__14_start_tunneld_proc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc = MAKE_FUNCTION_FRAME(tstate, code_objects_6beb8443b414a664d0f038886c6b6e2a, module_SideJITServer, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__14_start_tunneld_proc = cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__14_start_tunneld_proc);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__14_start_tunneld_proc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$TunneldRunner(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[118]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[119]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = module_var_accessor_SideJITServer$TUNNELD_DEFAULT_ADDRESS(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[120]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = module_var_accessor_SideJITServer$TUNNELD_DEFAULT_ADDRESS(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[120]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = const_int_pos_1;
        tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = module_var_accessor_SideJITServer$TunnelProtocol(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[121]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__14_start_tunneld_proc->m_frame.f_lineno = 191;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts[122]);

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = Py_True;
        tmp_kw_call_dict_value_2_1 = Py_True;
        tmp_kw_call_dict_value_3_1 = Py_True;
        tmp_kw_call_dict_value_4_1 = Py_True;
        frame_frame_SideJITServer$$$function__14_start_tunneld_proc->m_frame.f_lineno = 190;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__14_start_tunneld_proc, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__14_start_tunneld_proc->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__14_start_tunneld_proc, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__14_start_tunneld_proc,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__14_start_tunneld_proc == cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc);
        cache_frame_frame_SideJITServer$$$function__14_start_tunneld_proc = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__14_start_tunneld_proc);

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

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__15_prompt_device_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_device_list = python_pars[0];
    PyObject *var_device_question = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__15_prompt_device_list;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__15_prompt_device_list = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__15_prompt_device_list)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__15_prompt_device_list);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__15_prompt_device_list == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__15_prompt_device_list = MAKE_FUNCTION_FRAME(tstate, code_objects_5b03cb786137d8322d5578821fd2c2c1, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__15_prompt_device_list->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__15_prompt_device_list = cache_frame_frame_SideJITServer$$$function__15_prompt_device_list;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__15_prompt_device_list);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__15_prompt_device_list) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$inquirer3(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[124]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[126];
        CHECK_OBJECT(par_device_list);
        tmp_kw_call_value_1_1 = par_device_list;
        tmp_kw_call_value_2_1 = Py_True;
        frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame.f_lineno = 194;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts[127], kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
        assert(var_device_question == NULL);
        var_device_question = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = module_var_accessor_SideJITServer$inquirer3(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[124]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 196;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[129]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device_question);
        tmp_tuple_element_1 = var_device_question;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[130]);
        frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame.f_lineno = 196;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_result);
        tmp_expression_value_3 = var_result;
        tmp_subscript_value_1 = mod_consts[131];
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__15_prompt_device_list, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__15_prompt_device_list, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame.f_lineno = 199;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_Exception);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 199;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 195;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame)) {
            frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__15_prompt_device_list, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__15_prompt_device_list->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__15_prompt_device_list, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__15_prompt_device_list,
        type_description_1,
        par_device_list,
        var_device_question,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__15_prompt_device_list == cache_frame_frame_SideJITServer$$$function__15_prompt_device_list) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__15_prompt_device_list);
        cache_frame_frame_SideJITServer$$$function__15_prompt_device_list = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__15_prompt_device_list);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_device_question);
    Py_DECREF(var_device_question);
    var_device_question = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_device_question);
    var_device_question = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device_list);
    Py_DECREF(par_device_list);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device_list);
    Py_DECREF(par_device_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__16_create_service(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_port = python_pars[0];
    PyObject *var_s = NULL;
    PyObject *var_ip_address = NULL;
    PyObject *var_service_info = NULL;
    PyObject *var_zeroconf = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__16_create_service;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__16_create_service = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__16_create_service)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__16_create_service);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__16_create_service == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__16_create_service = MAKE_FUNCTION_FRAME(tstate, code_objects_40478192c0b51895c3add084a35297f2, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__16_create_service->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__16_create_service = cache_frame_frame_SideJITServer$$$function__16_create_service;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__16_create_service);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__16_create_service) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[132]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[133]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_s);
        tmp_called_instance_1 = var_s;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[42],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_s);
        tmp_called_instance_2 = var_s;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 205;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[135]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 205;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 205;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_ip_address == NULL);
        var_ip_address = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_s);
        tmp_called_instance_3 = var_s;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 206;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[69]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 206;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_2 = module_var_accessor_SideJITServer$ServiceInfo(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[136]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 210;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 213;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ip_address);
        tmp_args_element_value_3 = var_ip_address;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 213;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[137], tmp_args_element_value_3);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 213;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_port);
        tmp_kw_call_value_1_1 = par_port;
        tmp_kw_call_value_2_1 = DICT_COPY(tstate, mod_consts[138]);
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 210;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, mod_consts[139], kw_values, mod_consts[140]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 210;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_service_info == NULL);
        var_service_info = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = module_var_accessor_SideJITServer$Zeroconf(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[141]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 218;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 218;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_zeroconf == NULL);
        var_zeroconf = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        tmp_called_instance_5 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 219;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 219;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 219;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_zeroconf);
        tmp_called_instance_6 = var_zeroconf;
        CHECK_OBJECT(var_service_info);
        tmp_args_element_value_4 = var_service_info;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 220;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[145], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        tmp_called_instance_7 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 221;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 221;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[146], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_5 = module_var_accessor_SideJITServer$atexit(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[147]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 223;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[148]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zeroconf);
        tmp_expression_value_6 = var_zeroconf;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[149]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 223;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_service_info);
        tmp_args_element_value_6 = var_service_info;
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = module_var_accessor_SideJITServer$atexit(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[147]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 224;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[148]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zeroconf);
        tmp_expression_value_8 = var_zeroconf;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[69]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 224;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__16_create_service->m_frame.f_lineno = 224;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__16_create_service, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__16_create_service->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__16_create_service, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__16_create_service,
        type_description_1,
        par_port,
        var_s,
        var_ip_address,
        NULL,
        var_service_info,
        var_zeroconf
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__16_create_service == cache_frame_frame_SideJITServer$$$function__16_create_service) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__16_create_service);
        cache_frame_frame_SideJITServer$$$function__16_create_service = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__16_create_service);

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
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
    CHECK_OBJECT(var_ip_address);
    Py_DECREF(var_ip_address);
    var_ip_address = NULL;
    CHECK_OBJECT(var_service_info);
    Py_DECREF(var_service_info);
    var_service_info = NULL;
    CHECK_OBJECT(var_zeroconf);
    Py_DECREF(var_zeroconf);
    var_zeroconf = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_ip_address);
    var_ip_address = NULL;
    Py_XDECREF(var_service_info);
    var_service_info = NULL;
    Py_XDECREF(var_zeroconf);
    var_zeroconf = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__17_get_local_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_s = NULL;
    PyObject *var_ip = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__17_get_local_ip;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__17_get_local_ip = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__17_get_local_ip)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__17_get_local_ip);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__17_get_local_ip == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__17_get_local_ip = MAKE_FUNCTION_FRAME(tstate, code_objects_b5869414e2ad49bf7efb76a3a26cac04, module_SideJITServer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__17_get_local_ip->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__17_get_local_ip = cache_frame_frame_SideJITServer$$$function__17_get_local_ip;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__17_get_local_ip);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__17_get_local_ip) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_value_2 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[132]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = module_var_accessor_SideJITServer$socket(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[133]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_s);
        tmp_called_instance_1 = var_s;
        frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame.f_lineno = 229;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[42],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_s);
        tmp_called_instance_2 = var_s;
        frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame.f_lineno = 230;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[135]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_s);
        tmp_called_instance_3 = var_s;
        frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame.f_lineno = 231;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[69]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__17_get_local_ip, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__17_get_local_ip, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[150];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 227;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame)) {
            frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__17_get_local_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__17_get_local_ip->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__17_get_local_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__17_get_local_ip,
        type_description_1,
        var_s,
        var_ip
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__17_get_local_ip == cache_frame_frame_SideJITServer$$$function__17_get_local_ip) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__17_get_local_ip);
        cache_frame_frame_SideJITServer$$$function__17_get_local_ip = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__17_get_local_ip);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ip);
    tmp_return_value = var_ip;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_ip);
    var_ip = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_ip);
    var_ip = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__18_write_pairing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_dir = python_pars[0];
    PyObject *par_udid = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__18_write_pairing;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__18_write_pairing = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__18_write_pairing)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__18_write_pairing);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__18_write_pairing == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__18_write_pairing = MAKE_FUNCTION_FRAME(tstate, code_objects_3897e4a0593d675eda49c09e57a6f5a1, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__18_write_pairing->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__18_write_pairing = cache_frame_frame_SideJITServer$$$function__18_write_pairing;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__18_write_pairing);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__18_write_pairing) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_open_mode_1;
        tmp_called_value_1 = module_var_accessor_SideJITServer$get_home_folder(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[151]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 237;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_udid);
        tmp_format_value_1 = par_udid;
        tmp_format_spec_1 = mod_consts[4];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[152];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_truediv_expr_right_1 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_open_filename_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_open_filename_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_open_mode_1 = mod_consts[153];
        tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_1 = tmp_with_2__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 237;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_2 = tmp_with_2__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_5 = tmp_with_2__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_f = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_SideJITServer$plistlib(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[154]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 238;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_1 = var_f;
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 238;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[155], tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_udid);
        tmp_ass_subvalue_1 = par_udid;
        CHECK_OBJECT(var_data);
        tmp_ass_subscribed_1 = var_data;
        tmp_ass_subscript_1 = mod_consts[156];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_format_spec_2;
        PyObject *tmp_open_mode_2;
        CHECK_OBJECT(par_dir);
        tmp_format_value_2 = par_dir;
        tmp_format_spec_2 = mod_consts[4];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_udid);
            tmp_format_value_3 = par_udid;
            tmp_format_spec_3 = mod_consts[4];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 240;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_open_filename_2 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_open_filename_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_open_mode_2 = mod_consts[157];
        tmp_assign_source_7 = BUILTIN_OPEN(tstate, tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[21]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 240;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_assign_source_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, mod_consts[22]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_11 = tmp_with_1__enter;
        {
            PyObject *old = var_f;
            assert(old != NULL);
            var_f = tmp_assign_source_11;
            Py_INCREF(var_f);
            Py_DECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = module_var_accessor_SideJITServer$plistlib(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[154]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 241;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[158]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_arg_value_0_1 = var_data;
        CHECK_OBJECT(var_f);
        tmp_kw_call_arg_value_1_1 = var_f;
        tmp_expression_value_6 = module_var_accessor_SideJITServer$plistlib(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[154]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[159]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 241;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 241;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[160]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__18_write_pairing, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__18_write_pairing, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(tstate);
        tmp_args_element_value_3 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_3); 
        tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
        if (tmp_args_element_value_4 == NULL) {
            tmp_args_element_value_4 = Py_None;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 240;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__18_write_pairing->m_frame)) {
            frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_8;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 240;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__18_write_pairing->m_frame)) {
            frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_8;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 240;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts[26]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 240;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts[26]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__18_write_pairing, exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
        } else if (exception_keeper_lineno_5 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__18_write_pairing, exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_8 = tmp_with_2__exit;
        tmp_args_element_value_5 = EXC_TYPE(tstate);
        tmp_args_element_value_6 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_6); 
        tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
        if (tmp_args_element_value_7 == NULL) {
            tmp_args_element_value_7 = Py_None;
        }
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 237;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__18_write_pairing->m_frame)) {
            frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_9;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 237;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__18_write_pairing->m_frame)) {
            frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_9;
    branch_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_9 = tmp_with_2__exit;
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 237;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts[26]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_10 = tmp_with_2__exit;
        frame_frame_SideJITServer$$$function__18_write_pairing->m_frame.f_lineno = 237;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts[26]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_8:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__18_write_pairing, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__18_write_pairing->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__18_write_pairing, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__18_write_pairing,
        type_description_1,
        par_dir,
        par_udid,
        var_f,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__18_write_pairing == cache_frame_frame_SideJITServer$$$function__18_write_pairing) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__18_write_pairing);
        cache_frame_frame_SideJITServer$$$function__18_write_pairing = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__18_write_pairing);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    CHECK_OBJECT(tmp_with_2__exit);
    Py_DECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dir);
    Py_DECREF(par_dir);
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dir);
    Py_DECREF(par_dir);
    CHECK_OBJECT(par_udid);
    Py_DECREF(par_udid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_SideJITServer$$$function__19_start_server(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_verbose = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_show_installed = python_pars[3];
    PyObject *par_pair = python_pars[4];
    PyObject *par_version = python_pars[5];
    PyObject *par_file = python_pars[6];
    PyObject *par_tunnel = python_pars[7];
    PyObject *var_log_levels = NULL;
    PyObject *var_verbosity_level = NULL;
    PyObject *var_tunneld = NULL;
    PyObject *var_devices = NULL;
    PyObject *var_dev = NULL;
    PyObject *var_server = NULL;
    PyObject *var_local_ip = NULL;
    PyObject *outline_0_var_device = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$function__19_start_server;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_frame_SideJITServer$$$function__19_start_server = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_SideJITServer$$$function__19_start_server)) {
        Py_XDECREF(cache_frame_frame_SideJITServer$$$function__19_start_server);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_SideJITServer$$$function__19_start_server == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_SideJITServer$$$function__19_start_server = MAKE_FUNCTION_FRAME(tstate, code_objects_6b25eca053180a04e293c14a4029024f, module_SideJITServer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_SideJITServer$$$function__19_start_server->m_type_description == NULL);
    frame_frame_SideJITServer$$$function__19_start_server = cache_frame_frame_SideJITServer$$$function__19_start_server;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$function__19_start_server);
    assert(Py_REFCNT(frame_frame_SideJITServer$$$function__19_start_server) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_version);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_version);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_1 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 255;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[143]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[161];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_format_value_1 = module_var_accessor_SideJITServer$pymd_ver(tstate);
            if (unlikely(tmp_format_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[103]);
            }

            if (tmp_format_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[4];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_add_expr_left_2 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[162];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_tuple_element_2 = mod_consts[163];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_format_value_2 = module_var_accessor_SideJITServer$__version__(tstate);
            if (unlikely(tmp_format_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[4];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_add_expr_right_1 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_args_element_value_1 == NULL));
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_int_0;
        tmp_raise_type_1 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 256;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 258;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[164]);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 3);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_expression_value_3 = module_var_accessor_SideJITServer$logging(tstate);
            if (unlikely(tmp_expression_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 258;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[165]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_expression_value_4 = module_var_accessor_SideJITServer$logging(tstate);
            if (unlikely(tmp_expression_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 258;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[166]);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_log_levels == NULL);
        var_log_levels = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[167]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_2 = mod_consts[168];
        CHECK_OBJECT(par_verbose);
        tmp_args_element_value_3 = par_verbose;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_verbosity_level == NULL);
        var_verbosity_level = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 260;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 260;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[169]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[170]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_log_levels);
        tmp_expression_value_6 = var_log_levels;
        CHECK_OBJECT(var_verbosity_level);
        tmp_subscript_value_1 = var_verbosity_level;
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 260;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 260;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_tunnel);
        tmp_operand_value_1 = par_tunnel;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_7 = module_var_accessor_SideJITServer$multiprocessing(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[171]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 263;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[172]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = module_var_accessor_SideJITServer$start_tunneld_proc(tstate);
        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[173]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 263;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[174]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tunneld == NULL);
        var_tunneld = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_tunneld);
        tmp_called_instance_2 = var_tunneld;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 264;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[175]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = module_var_accessor_SideJITServer$atexit(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[147]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 265;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[148]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tunneld);
        tmp_expression_value_9 = var_tunneld;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[176]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 265;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = module_var_accessor_SideJITServer$sleep(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[177]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_timeout);
        tmp_args_element_value_6 = par_timeout;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 266;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_pair);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_pair);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        tmp_called_instance_3 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 269;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 269;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = module_var_accessor_SideJITServer$select_devices_by_connection_type(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[179]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 270;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 270;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[180], 0), mod_consts[181]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_devices == NULL);
        var_devices = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        if (var_devices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[182]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_devices;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_4 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = module_var_accessor_SideJITServer$select_devices_by_connection_type(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[179]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 272;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 272;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[180], 0), mod_consts[181]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_devices;
            var_devices = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        tmp_called_instance_4 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 273;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 273;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[183], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_8;
        tmp_called_value_9 = module_var_accessor_SideJITServer$sleep(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[177]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 274;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 274;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts[184]);

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 271;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_9;
        tmp_called_value_10 = module_var_accessor_SideJITServer$create_using_usbmux(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[185]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 276;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 276;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            if (var_devices == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[182]);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_iter_arg_1 = var_devices;
            tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 277;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_device;
                outline_0_var_device = tmp_assign_source_10;
                Py_INCREF(outline_0_var_device);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_11;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_kw_call_value_1_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_11 = module_var_accessor_SideJITServer$create_using_usbmux(tstate);
            if (unlikely(tmp_called_value_11 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[185]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_device);
            tmp_expression_value_10 = outline_0_var_device;
            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[186]);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_kw_call_value_1_1 = Py_False;
            frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 277;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

                tmp_append_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[187]);
            }

            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 277;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_device);
        outline_0_var_device = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_device);
        outline_0_var_device = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 277;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_6);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_11 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[143]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_devices == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[182]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_devices;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 278;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        if (var_devices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[182]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_devices;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_5 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_13 = module_var_accessor_SideJITServer$prompt_device_list(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[188]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 280;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_args_element_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 280;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 280;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dev == NULL);
        var_dev = tmp_assign_source_11;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_12 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 282;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = const_int_0;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dev == NULL);
        var_dev = tmp_assign_source_12;
    }
    branch_end_5:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_dev);
        tmp_called_instance_5 = var_dev;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 283;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[189]);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_file);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_file);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_13 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[143]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[190];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_file);
            tmp_format_value_3 = par_file;
            tmp_format_spec_3 = mod_consts[4];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 285;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_dev);
            tmp_expression_value_14 = var_dev;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[8]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 285;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[4];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 285;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[191];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 285;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_15;
        tmp_called_value_15 = module_var_accessor_SideJITServer$write_pairing(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[192]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_value_10 = par_file;
        CHECK_OBJECT(var_dev);
        tmp_expression_value_15 = var_dev;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[193]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_input_arg_1;
        tmp_cmp_expr_left_3 = mod_consts[194];
        tmp_input_arg_1 = mod_consts[195];
        tmp_str_arg_value_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = UNICODE_LOWER(tstate, tmp_str_arg_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = const_int_0;
        tmp_raise_type_2 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_value = tmp_raise_type_2;
        exception_lineno = 288;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_no_3:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_16 = module_var_accessor_SideJITServer$refresh_devs(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[107]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_show_installed);
        tmp_args_element_value_12 = par_show_installed;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 290;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_file);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_file);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_3;
        tmp_len_arg_3 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_len_arg_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_len_arg_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 293;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = 1;
        tmp_condition_result_9 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_17 = module_var_accessor_SideJITServer$prompt_device_list(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[188]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_args_element_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 294;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dev;
            var_dev = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_16 = module_var_accessor_SideJITServer$devs(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[75]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 296;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = const_int_0;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, 0);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dev;
            var_dev = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    branch_end_9:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_17 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 297;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[143]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[190];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_file);
            tmp_format_value_5 = par_file;
            tmp_format_spec_5 = mod_consts[4];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var_dev);
            tmp_expression_value_18 = var_dev;
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[8]);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_6 = mod_consts[4];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[191];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_14 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 297;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 297;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_19;
        tmp_called_value_19 = module_var_accessor_SideJITServer$write_pairing(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[192]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_value_15 = par_file;
        CHECK_OBJECT(var_dev);
        tmp_expression_value_19 = var_dev;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[8]);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_8:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_20 = module_var_accessor_SideJITServer$create_service(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[196]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_port);
        tmp_args_element_value_17 = par_port;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 300;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_show_installed);
        tmp_assattr_value_1 = par_show_installed;
        tmp_assattr_target_1 = module_var_accessor_SideJITServer$SimpleHTTPRequestHandler(tstate);
        if (unlikely(tmp_assattr_target_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[197]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 302;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[110], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_21 = module_var_accessor_SideJITServer$HTTPServer(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[198]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = mod_consts[199];
        tmp_args_element_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_18, 0, tmp_tuple_element_5);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_5 = par_port;
        PyTuple_SET_ITEM0(tmp_args_element_value_18, 1, tmp_tuple_element_5);
        tmp_args_element_value_19 = module_var_accessor_SideJITServer$SimpleHTTPRequestHandler(tstate);
        if (unlikely(tmp_args_element_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[197]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server == NULL);
        var_server = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = module_var_accessor_SideJITServer$get_local_ip(tstate);
        if (unlikely(tmp_called_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[200]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 304;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 304;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_local_ip == NULL);
        var_local_ip = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        tmp_expression_value_20 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 305;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[143]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[201];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_local_ip);
            tmp_format_value_7 = var_local_ip;
            tmp_format_spec_7 = mod_consts[4];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 305;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[202];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_6);
            CHECK_OBJECT(par_port);
            tmp_format_value_8 = par_port;
            tmp_format_spec_8 = mod_consts[4];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 305;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_string_concat_values_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_20 = PyUnicode_Join(mod_consts[4], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 305;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(var_server);
        tmp_called_instance_6 = var_server;
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 308;
        tmp_call_result_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[203]);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_19);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__19_start_server, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        } else if (exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__19_start_server, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_5 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_20;
        tmp_called_instance_7 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = 310;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[204], 0)
        );

        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = const_int_0;
        tmp_raise_type_3 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_state.exception_value = tmp_raise_type_3;
        exception_lineno = 311;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 307;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_SideJITServer$$$function__19_start_server->m_frame)) {
            frame_frame_SideJITServer$$$function__19_start_server->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
    branch_end_10:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$function__19_start_server, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$function__19_start_server->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$function__19_start_server, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_SideJITServer$$$function__19_start_server,
        type_description_1,
        par_verbose,
        par_timeout,
        par_port,
        par_show_installed,
        par_pair,
        par_version,
        par_file,
        par_tunnel,
        var_log_levels,
        var_verbosity_level,
        var_tunneld,
        var_devices,
        var_dev,
        var_server,
        var_local_ip
    );


    // Release cached frame if used for exception.
    if (frame_frame_SideJITServer$$$function__19_start_server == cache_frame_frame_SideJITServer$$$function__19_start_server) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_SideJITServer$$$function__19_start_server);
        cache_frame_frame_SideJITServer$$$function__19_start_server = NULL;
    }

    assertFrameObject(frame_frame_SideJITServer$$$function__19_start_server);

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
    CHECK_OBJECT(var_log_levels);
    Py_DECREF(var_log_levels);
    var_log_levels = NULL;
    CHECK_OBJECT(var_verbosity_level);
    Py_DECREF(var_verbosity_level);
    var_verbosity_level = NULL;
    Py_XDECREF(var_tunneld);
    var_tunneld = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_dev);
    var_dev = NULL;
    CHECK_OBJECT(var_server);
    Py_DECREF(var_server);
    var_server = NULL;
    CHECK_OBJECT(var_local_ip);
    Py_DECREF(var_local_ip);
    var_local_ip = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_log_levels);
    var_log_levels = NULL;
    Py_XDECREF(var_verbosity_level);
    var_verbosity_level = NULL;
    Py_XDECREF(var_tunneld);
    var_tunneld = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_dev);
    var_dev = NULL;
    Py_XDECREF(var_server);
    var_server = NULL;
    Py_XDECREF(var_local_ip);
    var_local_ip = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_show_installed);
    Py_DECREF(par_show_installed);
    CHECK_OBJECT(par_pair);
    Py_DECREF(par_pair);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_tunnel);
    Py_DECREF(par_tunnel);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_show_installed);
    Py_DECREF(par_show_installed);
    CHECK_OBJECT(par_pair);
    Py_DECREF(par_pair);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_tunnel);
    Py_DECREF(par_tunnel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__10_refresh_devs(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__10_refresh_devs,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c83654d6ef0e8ca91e837232420c791e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__11_get_device(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__11_get_device,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6b3839c77b32c08dc608bb6f2f2022f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__12__send_json_response(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__12__send_json_response,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        code_objects_34eda8d4cfe6d3efa57bd76989353161,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__13_do_GET(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__13_do_GET,
        mod_consts[289],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        code_objects_99c6b48a94ffd947ab683d997e9a86f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__14_start_tunneld_proc(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__14_start_tunneld_proc,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6beb8443b414a664d0f038886c6b6e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__15_prompt_device_list(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__15_prompt_device_list,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5b03cb786137d8322d5578821fd2c2c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__16_create_service(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__16_create_service,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_40478192c0b51895c3add084a35297f2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__17_get_local_ip(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__17_get_local_ip,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b5869414e2ad49bf7efb76a3a26cac04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__18_write_pairing(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__18_write_pairing,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3897e4a0593d675eda49c09e57a6f5a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__19_start_server(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__19_start_server,
        mod_consts[306],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6b25eca053180a04e293c14a4029024f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__1___init__,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        code_objects_722f2df71134428aa873de49c538a360,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__2___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__2___repr__,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        code_objects_4b1c7c6e6df7b0f6604111a199c23873,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__3_asdict(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__3_asdict,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        code_objects_7fee7e9d692ae376003a11868574d802,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__4___init__,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        code_objects_7a313a22881501eff935e1ea6cd07d05,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__5___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__5___repr__,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        code_objects_247ac04a958a04f5bbb802b5340075d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__6_refresh_apps(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__6_refresh_apps,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        code_objects_14c66aa942b2bf13a166338f0f168edc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__7_launch_app(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__7_launch_app,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        code_objects_be978dc638e2aefb1ec11039f421bb5c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__8_enable_jit(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__8_enable_jit,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        code_objects_5af5b117fcb32079e0ada41a37c5a436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_SideJITServer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_SideJITServer$$$function__9_asdict(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_SideJITServer$$$function__9_asdict,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[280],
#endif
        code_objects_19d81ad06cb931c076e21e2d14daba01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_SideJITServer,
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

static function_impl_code const function_table_SideJITServer[] = {
    impl_SideJITServer$$$function__1___init__,
    impl_SideJITServer$$$function__2___repr__,
    impl_SideJITServer$$$function__3_asdict,
    impl_SideJITServer$$$function__4___init__,
    impl_SideJITServer$$$function__5___repr__,
    impl_SideJITServer$$$function__6_refresh_apps,
    impl_SideJITServer$$$function__7_launch_app,
    impl_SideJITServer$$$function__8_enable_jit,
    impl_SideJITServer$$$function__9_asdict,
    impl_SideJITServer$$$function__10_refresh_devs,
    impl_SideJITServer$$$function__11_get_device,
    impl_SideJITServer$$$function__12__send_json_response,
    impl_SideJITServer$$$function__13_do_GET,
    impl_SideJITServer$$$function__14_start_tunneld_proc,
    impl_SideJITServer$$$function__15_prompt_device_list,
    impl_SideJITServer$$$function__16_create_service,
    impl_SideJITServer$$$function__17_get_local_ip,
    impl_SideJITServer$$$function__18_write_pairing,
    impl_SideJITServer$$$function__19_start_server,
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

    return Nuitka_Function_GetFunctionState(function, function_table_SideJITServer);
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
        module_SideJITServer,
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
        function_table_SideJITServer,
        sizeof(function_table_SideJITServer) / sizeof(function_impl_code)
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
static char const *module_full_name = "SideJITServer";
#endif

// Internal entry point for module code.
PyObject *modulecode_SideJITServer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("SideJITServer");

    // Store the module for future use.
    module_SideJITServer = module;

    moduledict_SideJITServer = MODULE_DICT(module_SideJITServer);

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
        PRINT_STRING("SideJITServer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("SideJITServer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("SideJITServer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "SideJITServer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initSideJITServer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_SideJITServer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_SideJITServer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[4]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_SideJITServer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_SideJITServer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_SideJITServer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_SideJITServer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_SideJITServer);
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

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_SideJITServer$$$class__1_App_38 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_SideJITServer$$$class__2_Device_52 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$class__2_Device_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144 = NULL;
    struct Nuitka_FrameObject *frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_2);
    }
    frame_frame_SideJITServer = MAKE_MODULE_FRAME(code_objects_7203f3f1fae266b4baea0bb12620c986, module_SideJITServer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer);
    assert(Py_REFCNT(frame_frame_SideJITServer) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_frame_SideJITServer->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[95]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[207]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_frame_SideJITServer->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_frame_SideJITServer->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[208]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[209]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_frame_SideJITServer->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts[210]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_SideJITServer$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[212], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_SideJITServer$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[213], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = module_var_accessor_SideJITServer$__path__(tstate);
        if (unlikely(tmp_assattr_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = module_var_accessor_SideJITServer$__spec__(tstate);
        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[214], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[147];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[77];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[142];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[35];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[38];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[91];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[154];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[216];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[217];
        tmp_level_value_8 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 8;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[198],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[198]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[218],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[218]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[219];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[220];
        tmp_level_value_9 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 9;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[94],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[94]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[221],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[221]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_17);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Nuitka_SysGetObject("exit");
        assert(!(tmp_assign_source_18 == NULL));
        UPDATE_STRING_DICT0(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[171];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 12;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[223];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[224];
        tmp_level_value_11 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[177],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[177]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[225];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[226];
        tmp_level_value_12 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 14;
        tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[136],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[136]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[141],
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[141]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_23);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[227];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[228];
        tmp_level_value_13 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 16;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[124],
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[229];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[230];
        tmp_level_value_14 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 17;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[151],
                const_int_0
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[231];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[232];
        tmp_level_value_15 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 18;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[121],
                const_int_0
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[233];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[234];
        tmp_level_value_16 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 19;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[80],
                const_int_0
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[235];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[236];
        tmp_level_value_17 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 20;
        tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[237],
                const_int_0
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[237]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[179],
                const_int_0
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[179]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_30);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[238];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[239];
        tmp_level_value_18 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 21;
        tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_14 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[240],
                const_int_0
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[240]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[185],
                const_int_0
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[185]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_33);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[241];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[242];
        tmp_level_value_19 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 22;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[12],
                const_int_0
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[243];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[244];
        tmp_level_value_20 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 23;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[79],
                const_int_0
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[245];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[246];
        tmp_level_value_21 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 24;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[23],
                const_int_0
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[247];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[248];
        tmp_level_value_22 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 25;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[20],
                const_int_0
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[249];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[250];
        tmp_level_value_23 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 26;
        tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_20 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[76],
                const_int_0
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[76]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_21 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[120],
                const_int_0
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[120]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_40);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[251];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[252];
        tmp_level_value_24 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 27;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[118],
                const_int_0
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[253];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[254];
        tmp_level_value_25 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 29;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[105],
                const_int_0
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[255];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_SideJITServer;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[254];
        tmp_level_value_26 = const_int_0;
        frame_frame_SideJITServer->m_frame.f_lineno = 30;
        tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_SideJITServer,
                mod_consts[105],
                const_int_0
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_LIST_EMPTY(tstate, 0);
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_44);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[256]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = module_var_accessor_SideJITServer$logging(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[164]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 35;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[257]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_SideJITServer$$$class__1_App_38 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[104];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[258], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[17];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[259], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[260];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[261], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[262];
            tmp_annotations_1 = DICT_COPY(tstate, mod_consts[263]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

            tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[264], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__2___repr__(tstate);

        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[266], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__3_asdict(tstate);

        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__1_App_38, mod_consts[74], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[17];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_SideJITServer$$$class__1_App_38;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_SideJITServer->m_frame.f_lineno = 38;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 38;

                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_47 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_SideJITServer$$$class__1_App_38);
        locals_SideJITServer$$$class__1_App_38 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_SideJITServer$$$class__1_App_38);
        locals_SideJITServer$$$class__1_App_38 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 38;
        goto try_except_handler_7;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_47);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_SideJITServer$$$class__2_Device_52 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[104];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[258], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[82];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[259], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[269];
        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[261], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_SideJITServer$$$class__2_Device_2 = MAKE_CLASS_FRAME(tstate, code_objects_a6a66e5e0c4bf0e55df70395770c16a5, module_SideJITServer, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$class__2_Device_2);
        assert(Py_REFCNT(frame_frame_SideJITServer$$$class__2_Device_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_2 = mod_consts[270];
            tmp_dict_key_1 = mod_consts[0];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_5;
                PyObject *tmp_subscript_value_1;
                PyObject *tmp_bitor_expr_left_1;
                PyObject *tmp_bitor_expr_right_1;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_5 = (PyObject *)&PyList_Type;
                tmp_subscript_value_1 = module_var_accessor_SideJITServer$App(tstate);
                assert(!(tmp_subscript_value_1 == NULL));
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_6 = (PyObject *)&PyList_Type;
                tmp_subscript_value_2 = module_var_accessor_SideJITServer$App(tstate);
                assert(!(tmp_subscript_value_2 == NULL));
                tmp_bitor_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
                if (tmp_bitor_expr_left_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_bitor_expr_right_1 = Py_None;
                tmp_dict_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
                Py_DECREF(tmp_bitor_expr_left_1);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__4___init__(tstate, tmp_defaults_2, tmp_annotations_2);

            tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[264], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$class__2_Device_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$class__2_Device_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$class__2_Device_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_SideJITServer$$$class__2_Device_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_frame_SideJITServer$$$class__2_Device_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_12;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__5___repr__(tstate);

        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[266], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__6_refresh_apps(tstate, tmp_annotations_3);

            tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            tmp_defaults_3 = mod_consts[275];
            tmp_annotations_4 = DICT_COPY(tstate, mod_consts[276]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__7_launch_app(tstate, tmp_defaults_3, tmp_annotations_4);

            tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(tstate, mod_consts[278]);


            tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__8_enable_jit(tstate, tmp_annotations_5);

            tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__9_asdict(tstate);

        tmp_result = DICT_SET_ITEM(locals_SideJITServer$$$class__2_Device_52, mod_consts[74], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[82];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_SideJITServer$$$class__2_Device_52;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_frame_SideJITServer->m_frame.f_lineno = 52;
            tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 52;

                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_51 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_SideJITServer$$$class__2_Device_52);
        locals_SideJITServer$$$class__2_Device_52 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_SideJITServer$$$class__2_Device_52);
        locals_SideJITServer$$$class__2_Device_52 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_11 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_11 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 52;
        goto try_except_handler_10;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_51);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_6;
        tmp_defaults_4 = mod_consts[275];
        tmp_annotations_6 = DICT_COPY(tstate, mod_consts[281]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_53 = MAKE_FUNCTION_SideJITServer$$$function__10_refresh_devs(tstate, tmp_defaults_4, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = DICT_COPY(tstate, mod_consts[282]);


        tmp_assign_source_54 = MAKE_FUNCTION_SideJITServer$$$function__11_get_device(tstate, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_54);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = module_var_accessor_SideJITServer$BaseHTTPRequestHandler(tstate);
        if (unlikely(tmp_tuple_element_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[218]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_direct_call_arg1_1;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_direct_call_arg1_1 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
            tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_7 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_8 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[283]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[283]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_tuple_element_4 = mod_consts[197];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_4 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_frame_SideJITServer->m_frame.f_lineno = 144;
        tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_10 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[284]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_1;
        tmp_mod_expr_left_1 = mod_consts[285];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_11 = tmp_class_creation_3__metaclass;
        tmp_name_value_27 = mod_consts[286];
        tmp_default_value_1 = mod_consts[287];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_27, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[286]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 144;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 144;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

        goto try_except_handler_13;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_60;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[258], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[259], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_15;
        }
        frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3 = MAKE_CLASS_FRAME(tstate, code_objects_1cc813936ec228fce2d6fdb07384d780, module_SideJITServer, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3);
        assert(Py_REFCNT(frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__12__send_json_response(tstate);

        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_SideJITServer$$$function__13_do_GET(tstate);

        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[289], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_frame_SideJITServer$$$class__3_SimpleHTTPRequestHandler_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_15;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144, mod_consts[291], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;

            goto try_except_handler_15;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[197];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_6 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_frame_SideJITServer->m_frame.f_lineno = 144;
            tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;

                goto try_except_handler_15;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_61 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144);
        locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_lineno_13 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_13 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144);
        locals_SideJITServer$$$class__3_SimpleHTTPRequestHandler_144 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_lineno_14 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_14 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 144;
        goto try_except_handler_13;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_61);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_SideJITServer$$$function__14_start_tunneld_proc(tstate);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;


        tmp_assign_source_64 = MAKE_FUNCTION_SideJITServer$$$function__15_prompt_device_list(tstate);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[292];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_65 = MAKE_FUNCTION_SideJITServer$$$function__16_create_service(tstate, tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_SideJITServer$$$function__17_get_local_ip(tstate);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_SideJITServer$$$function__18_write_pairing(tstate);

        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_1 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 243;
        tmp_called_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[293]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[294]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 244;
        tmp_called_value_9 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[295], 0), mod_consts[296]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[294]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 245;
        tmp_called_value_11 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[297], 0), mod_consts[298]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[294]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 246;
        tmp_called_value_13 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[299], 0), mod_consts[298]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[294]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 247;
        tmp_called_value_15 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[300], 0), mod_consts[296]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[294]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 248;
        tmp_called_value_17 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[301], 0), mod_consts[302]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[294]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 249;
        tmp_called_value_19 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[303], 0), mod_consts[298]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[294]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 250;
        tmp_called_value_21 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[304], 0), mod_consts[296]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = module_var_accessor_SideJITServer$click(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[294]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 251;
        tmp_called_value_23 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[305], 0), mod_consts[298]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_10 = MAKE_FUNCTION_SideJITServer$$$function__19_start_server(tstate);

        frame_frame_SideJITServer->m_frame.f_lineno = 251;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 250;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 249;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 248;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 247;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 246;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 245;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 244;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_frame_SideJITServer->m_frame.f_lineno = 243;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_SideJITServer, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_68);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_SideJITServer, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_SideJITServer->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_SideJITServer, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_SideJITServer);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("SideJITServer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "SideJITServer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_SideJITServer);
    return module_SideJITServer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_SideJITServer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("SideJITServer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
