/* Generated code for Python module 'direct.gui.OnscreenText'
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

/* The "module_direct$gui$OnscreenText" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$gui$OnscreenText;
PyDictObject *moduledict_direct$gui$OnscreenText;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[281];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[281];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.gui.OnscreenText"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 281; i++) {
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
void checkModuleConstants_direct$gui$OnscreenText(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 281; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_af69f3f204fe2029fe7956023ac0d205;
static PyCodeObject *codeobj_c673040b47e9ca39895277743299edc6;
static PyCodeObject *codeobj_481fa2f0bdd5320a1d05c0d91dc0a6e6;
static PyCodeObject *codeobj_3cdc5bcb0b31e470ef6cb19c28418c98;
static PyCodeObject *codeobj_faf8e6776d9ca575572578361d3fea6b;
static PyCodeObject *codeobj_fa66fe8ffe56d0564df1d9a862a148c7;
static PyCodeObject *codeobj_814a5ad51073cf39872dc5393e8156fb;
static PyCodeObject *codeobj_8b6c869da4ec5b9a4790e7c223afa16b;
static PyCodeObject *codeobj_1bf89733da73f3c96afa376fb4e685cc;
static PyCodeObject *codeobj_bdef03e839b225faa20768c8c56296f7;
static PyCodeObject *codeobj_c28098dc11adeb4962967430a15b4599;
static PyCodeObject *codeobj_ab8d23f2feabc42d5384ac96dbf9d41d;
static PyCodeObject *codeobj_299c4425aa6175d130849b2c2b2ce38f;
static PyCodeObject *codeobj_db98374898c4d80c7b82317041970e5e;
static PyCodeObject *codeobj_53a0c33728c240ba06b5d7e2096dec99;
static PyCodeObject *codeobj_86c1e3a4b0e7c7f3935e4bd5040f624e;
static PyCodeObject *codeobj_32d2e87af6e0680fc91c99b7a6a2a24d;
static PyCodeObject *codeobj_d0235a71ab4759a19d94bdb414f1df76;
static PyCodeObject *codeobj_d68669cbc4b8cc0b20d4bcda0bed8cbc;
static PyCodeObject *codeobj_282ceef9da1a2b5c0152e682ea75846d;
static PyCodeObject *codeobj_94e39b8e7119d553f00d375d89d85759;
static PyCodeObject *codeobj_a77c4fcfea5f5e037f3f245f0b15070d;
static PyCodeObject *codeobj_13b9aa222d6fffaa6f5f03b6452a055b;
static PyCodeObject *codeobj_2b1e8fcf13eab3047505f35847a8678c;
static PyCodeObject *codeobj_d94cb418e8fd435bc783254c37a259c0;
static PyCodeObject *codeobj_23e2f93c1fbadde7f67bb40f5ba5a3bf;
static PyCodeObject *codeobj_051e12ceeb1ce9a8ae92084e53ef6340;
static PyCodeObject *codeobj_eec3da954be745dcb50596d9de595c5d;
static PyCodeObject *codeobj_540be06ccd3c24b5ad94c2785d14920b;
static PyCodeObject *codeobj_4c0faefea6f6d6f49b675c6a5489e8c0;
static PyCodeObject *codeobj_6ea74884be7f845bd6f7281f77b23eae;
static PyCodeObject *codeobj_ea6446590595ab931ccc7ac9fd35b59d;
static PyCodeObject *codeobj_07b7d08b4271c5c93f78caf490387b1b;
static PyCodeObject *codeobj_8306ba766c6051bdcf4d286ca581765c;
static PyCodeObject *codeobj_b597600e1509b048f5d4cdaef102678a;
static PyCodeObject *codeobj_9f87aff5955d120199ad4ba08bd607bc;
static PyCodeObject *codeobj_2b05905877337b056cad6b82e25e84a7;
static PyCodeObject *codeobj_720b0a15919c69c18472b59084c0089c;
static PyCodeObject *codeobj_6e2ca08eeb802bb9d30fcfc70feb0310;
static PyCodeObject *codeobj_179beaab178de31795e06fd2869bb1d8;
static PyCodeObject *codeobj_763c53e6af1aa26828a7034316a69a4e;
static PyCodeObject *codeobj_36e4ae67d49c17a0409af3284053ad5b;
static PyCodeObject *codeobj_c9ba8102fecafe05ae9954974b311a25;
static PyCodeObject *codeobj_c54b16fb0803c4e1bb503dda50871189;
static PyCodeObject *codeobj_96d271b339b463eafd3ff58202d1116e;
static PyCodeObject *codeobj_2ca86fef045ca5e6843cc7adfa834269;
static PyCodeObject *codeobj_455af7f5e005b3ab7e73b23cc2c48d00;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[257]); CHECK_OBJECT(module_filename_obj);
    codeobj_af69f3f204fe2029fe7956023ac0d205 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[258], mod_consts[258], NULL, NULL, 0, 0, 0);
    codeobj_c673040b47e9ca39895277743299edc6 = MAKE_CODE_OBJECT(module_filename_obj, 23, 0, mod_consts[151], mod_consts[151], mod_consts[259], NULL, 0, 0, 0);
    codeobj_481fa2f0bdd5320a1d05c0d91dc0a6e6 = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[251], mod_consts[251], mod_consts[260], NULL, 1, 0, 0);
    codeobj_3cdc5bcb0b31e470ef6cb19c28418c98 = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[229], mod_consts[229], mod_consts[260], NULL, 1, 0, 0);
    codeobj_faf8e6776d9ca575572578361d3fea6b = MAKE_CODE_OBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[223], mod_consts[223], mod_consts[260], NULL, 1, 0, 0);
    codeobj_fa66fe8ffe56d0564df1d9a862a148c7 = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[240], mod_consts[240], mod_consts[260], NULL, 1, 0, 0);
    codeobj_814a5ad51073cf39872dc5393e8156fb = MAKE_CODE_OBJECT(module_filename_obj, 513, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[235], mod_consts[235], mod_consts[260], NULL, 1, 0, 0);
    codeobj_8b6c869da4ec5b9a4790e7c223afa16b = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[261], NULL, 20, 0, 0);
    codeobj_1bf89733da73f3c96afa376fb4e685cc = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[247], mod_consts[247], mod_consts[262], NULL, 3, 0, 0);
    codeobj_bdef03e839b225faa20768c8c56296f7 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[263], NULL, 2, 0, 0);
    codeobj_c28098dc11adeb4962967430a15b4599 = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[249], mod_consts[249], mod_consts[264], NULL, 2, 0, 0);
    codeobj_ab8d23f2feabc42d5384ac96dbf9d41d = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[73], mod_consts[73], mod_consts[260], NULL, 1, 0, 0);
    codeobj_299c4425aa6175d130849b2c2b2ce38f = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[76], mod_consts[76], mod_consts[260], NULL, 1, 0, 0);
    codeobj_db98374898c4d80c7b82317041970e5e = MAKE_CODE_OBJECT(module_filename_obj, 541, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[129], mod_consts[129], mod_consts[265], NULL, 2, 0, 0);
    codeobj_53a0c33728c240ba06b5d7e2096dec99 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[162], mod_consts[162], mod_consts[260], NULL, 1, 0, 0);
    codeobj_86c1e3a4b0e7c7f3935e4bd5040f624e = MAKE_CODE_OBJECT(module_filename_obj, 252, 0, mod_consts[164], mod_consts[164], mod_consts[260], NULL, 1, 0, 0);
    codeobj_32d2e87af6e0680fc91c99b7a6a2a24d = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[170], mod_consts[170], mod_consts[260], NULL, 1, 0, 0);
    codeobj_d0235a71ab4759a19d94bdb414f1df76 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[75], mod_consts[260], NULL, 1, 0, 0);
    codeobj_d68669cbc4b8cc0b20d4bcda0bed8cbc = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[196], mod_consts[196], mod_consts[260], NULL, 1, 0, 0);
    codeobj_282ceef9da1a2b5c0152e682ea75846d = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[206], mod_consts[206], mod_consts[260], NULL, 1, 0, 0);
    codeobj_94e39b8e7119d553f00d375d89d85759 = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[216], mod_consts[216], mod_consts[260], NULL, 1, 0, 0);
    codeobj_a77c4fcfea5f5e037f3f245f0b15070d = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[260], NULL, 1, 0, 0);
    codeobj_13b9aa222d6fffaa6f5f03b6452a055b = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[192], mod_consts[192], mod_consts[260], NULL, 1, 0, 0);
    codeobj_2b1e8fcf13eab3047505f35847a8678c = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[201], mod_consts[201], mod_consts[260], NULL, 1, 0, 0);
    codeobj_d94cb418e8fd435bc783254c37a259c0 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[211], mod_consts[211], mod_consts[260], NULL, 1, 0, 0);
    codeobj_23e2f93c1fbadde7f67bb40f5ba5a3bf = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[220], mod_consts[220], mod_consts[260], NULL, 1, 0, 0);
    codeobj_051e12ceeb1ce9a8ae92084e53ef6340 = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[266], NULL, 2, 0, 0);
    codeobj_eec3da954be745dcb50596d9de595c5d = MAKE_CODE_OBJECT(module_filename_obj, 502, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[232], mod_consts[232], mod_consts[267], NULL, 2, 0, 0);
    codeobj_540be06ccd3c24b5ad94c2785d14920b = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], mod_consts[268], NULL, 2, 0, 0);
    codeobj_4c0faefea6f6d6f49b675c6a5489e8c0 = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[226], mod_consts[226], mod_consts[269], NULL, 2, 0, 0);
    codeobj_6ea74884be7f845bd6f7281f77b23eae = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[270], NULL, 2, 0, 0);
    codeobj_ea6446590595ab931ccc7ac9fd35b59d = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[243], mod_consts[243], mod_consts[271], NULL, 2, 0, 0);
    codeobj_07b7d08b4271c5c93f78caf490387b1b = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[126], mod_consts[126], mod_consts[272], NULL, 3, 0, 0);
    codeobj_8306ba766c6051bdcf4d286ca581765c = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[204], mod_consts[204], mod_consts[273], NULL, 2, 0, 0);
    codeobj_b597600e1509b048f5d4cdaef102678a = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[214], mod_consts[214], mod_consts[274], NULL, 3, 0, 0);
    codeobj_9f87aff5955d120199ad4ba08bd607bc = MAKE_CODE_OBJECT(module_filename_obj, 516, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[275], NULL, 2, 0, 0);
    codeobj_2b05905877337b056cad6b82e25e84a7 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[65], mod_consts[65], mod_consts[263], NULL, 2, 0, 0);
    codeobj_720b0a15919c69c18472b59084c0089c = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[84], mod_consts[84], mod_consts[272], NULL, 3, 0, 0);
    codeobj_6e2ca08eeb802bb9d30fcfc70feb0310 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[199], mod_consts[199], mod_consts[276], NULL, 2, 0, 0);
    codeobj_179beaab178de31795e06fd2869bb1d8 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[209], mod_consts[209], mod_consts[274], NULL, 3, 0, 0);
    codeobj_763c53e6af1aa26828a7034316a69a4e = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[182], mod_consts[182], mod_consts[277], NULL, 2, 0, 0);
    codeobj_36e4ae67d49c17a0409af3284053ad5b = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[186], mod_consts[186], mod_consts[278], NULL, 2, 0, 0);
    codeobj_c9ba8102fecafe05ae9954974b311a25 = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[279], NULL, 2, 0, 0);
    codeobj_c54b16fb0803c4e1bb503dda50871189 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[184], mod_consts[184], mod_consts[277], NULL, 2, 0, 0);
    codeobj_96d271b339b463eafd3ff58202d1116e = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[188], mod_consts[188], mod_consts[278], NULL, 2, 0, 0);
    codeobj_2ca86fef045ca5e6843cc7adfa834269 = MAKE_CODE_OBJECT(module_filename_obj, 255, 0, mod_consts[166], mod_consts[166], mod_consts[260], NULL, 1, 0, 0);
    codeobj_455af7f5e005b3ab7e73b23cc2c48d00 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[61], mod_consts[280], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__10_clearText();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__11_setText();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__12_appendText();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__13_getText();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__14_setTextX();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__15_setX();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__16_setTextY();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__17_setY();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__18_setTextPos(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__19_getTextPos();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__20_setPos();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__21_getPos();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__22_setTextR();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__23_getTextR();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__24_setRoll();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__25_getRoll();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__26_setTextScale(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__27_getTextScale();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__28_setScale(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__29_getScale();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__2_cleanup();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__30_updateTransformMat();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__31_setWordwrap();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__32_getWordwrap();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__33___getFg();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__34_setFg();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__35___getBg();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__36_setBg();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__37___getShadow();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__38_setShadow();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__39___getFrame();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__3_destroy();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__40_setFrame();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__41_configure(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__42___setitem__();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__43_cget();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__44___getAlign();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__45_setAlign();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__4_freeze();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__5_thaw();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__6_setDecal();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__7_getDecal();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__8_setFont();


static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__9_getFont();


// The module function definitions.
static PyObject *impl_direct$gui$OnscreenText$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_style = python_pars[2];
    PyObject *par_pos = python_pars[3];
    PyObject *par_roll = python_pars[4];
    PyObject *par_scale = python_pars[5];
    PyObject *par_fg = python_pars[6];
    PyObject *par_bg = python_pars[7];
    PyObject *par_shadow = python_pars[8];
    PyObject *par_shadowOffset = python_pars[9];
    PyObject *par_frame = python_pars[10];
    PyObject *par_align = python_pars[11];
    PyObject *par_wordwrap = python_pars[12];
    PyObject *par_drawOrder = python_pars[13];
    PyObject *par_decal = python_pars[14];
    PyObject *par_font = python_pars[15];
    PyObject *par_parent = python_pars[16];
    PyObject *par_sort = python_pars[17];
    PyObject *par_mayChange = python_pars[18];
    PyObject *par_direction = python_pars[19];
    PyObject *var_ShowBaseGlobal = NULL;
    PyObject *var_textNode = NULL;
    struct Nuitka_FrameObject *frame_8b6c869da4ec5b9a4790e7c223afa16b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8b6c869da4ec5b9a4790e7c223afa16b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b6c869da4ec5b9a4790e7c223afa16b)) {
        Py_XDECREF(cache_frame_8b6c869da4ec5b9a4790e7c223afa16b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b6c869da4ec5b9a4790e7c223afa16b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b6c869da4ec5b9a4790e7c223afa16b = MAKE_FUNCTION_FRAME(tstate, codeobj_8b6c869da4ec5b9a4790e7c223afa16b, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b6c869da4ec5b9a4790e7c223afa16b->m_type_description == NULL);
    frame_8b6c869da4ec5b9a4790e7c223afa16b = cache_frame_8b6c869da4ec5b9a4790e7c223afa16b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b6c869da4ec5b9a4790e7c223afa16b);
    assert(Py_REFCNT(frame_8b6c869da4ec5b9a4790e7c223afa16b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_parent);
        tmp_cmp_expr_left_1 = par_parent;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$gui$OnscreenText;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 108;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$gui$OnscreenText,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ShowBaseGlobal == NULL);
        var_ShowBaseGlobal = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_ShowBaseGlobal);
        tmp_expression_value_1 = var_ShowBaseGlobal;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_parent;
            assert(old != NULL);
            par_parent = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 112;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[6]);

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_textNode == NULL);
        var_textNode = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_textNode);
        tmp_assattr_value_1 = var_textNode;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_style);
        tmp_cmp_expr_left_2 = par_style;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_scale);
        tmp_or_left_value_1 = par_scale;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[11];
        tmp_assign_source_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_4 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_4;
            Py_INCREF(par_scale);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        CHECK_OBJECT(par_fg);
        tmp_or_left_value_2 = par_fg;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = mod_consts[12];
        tmp_assign_source_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_5 = tmp_or_left_value_2;
        or_end_2:;
        {
            PyObject *old = par_fg;
            assert(old != NULL);
            par_fg = tmp_assign_source_5;
            Py_INCREF(par_fg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        CHECK_OBJECT(par_bg);
        tmp_or_left_value_3 = par_bg;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = mod_consts[13];
        tmp_assign_source_6 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_6 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = par_bg;
            assert(old != NULL);
            par_bg = tmp_assign_source_6;
            Py_INCREF(par_bg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        CHECK_OBJECT(par_shadow);
        tmp_or_left_value_4 = par_shadow;
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        tmp_or_right_value_4 = mod_consts[13];
        tmp_assign_source_7 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_7 = tmp_or_left_value_4;
        or_end_4:;
        {
            PyObject *old = par_shadow;
            assert(old != NULL);
            par_shadow = tmp_assign_source_7;
            Py_INCREF(par_shadow);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        CHECK_OBJECT(par_frame);
        tmp_or_left_value_5 = par_frame;
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        tmp_or_right_value_5 = mod_consts[13];
        tmp_assign_source_8 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_assign_source_8 = tmp_or_left_value_5;
        or_end_5:;
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_8;
            Py_INCREF(par_frame);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_3 = par_align;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_align;
            assert(old != NULL);
            par_align = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_style);
        tmp_cmp_expr_left_4 = par_style;
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        CHECK_OBJECT(par_scale);
        tmp_or_left_value_6 = par_scale;
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        tmp_or_right_value_6 = mod_consts[16];
        tmp_assign_source_10 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_assign_source_10 = tmp_or_left_value_6;
        or_end_6:;
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_10;
            Py_INCREF(par_scale);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        CHECK_OBJECT(par_fg);
        tmp_or_left_value_7 = par_fg;
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        tmp_or_right_value_7 = mod_consts[17];
        tmp_assign_source_11 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_assign_source_11 = tmp_or_left_value_7;
        or_end_7:;
        {
            PyObject *old = par_fg;
            assert(old != NULL);
            par_fg = tmp_assign_source_11;
            Py_INCREF(par_fg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        int tmp_or_left_truth_8;
        PyObject *tmp_or_left_value_8;
        PyObject *tmp_or_right_value_8;
        CHECK_OBJECT(par_bg);
        tmp_or_left_value_8 = par_bg;
        tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
        if (tmp_or_left_truth_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        tmp_or_right_value_8 = mod_consts[13];
        tmp_assign_source_12 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_assign_source_12 = tmp_or_left_value_8;
        or_end_8:;
        {
            PyObject *old = par_bg;
            assert(old != NULL);
            par_bg = tmp_assign_source_12;
            Py_INCREF(par_bg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        CHECK_OBJECT(par_shadow);
        tmp_or_left_value_9 = par_shadow;
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        tmp_or_right_value_9 = mod_consts[12];
        tmp_assign_source_13 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_assign_source_13 = tmp_or_left_value_9;
        or_end_9:;
        {
            PyObject *old = par_shadow;
            assert(old != NULL);
            par_shadow = tmp_assign_source_13;
            Py_INCREF(par_shadow);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        int tmp_or_left_truth_10;
        PyObject *tmp_or_left_value_10;
        PyObject *tmp_or_right_value_10;
        CHECK_OBJECT(par_frame);
        tmp_or_left_value_10 = par_frame;
        tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
        if (tmp_or_left_truth_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_10 == 1) {
            goto or_left_10;
        } else {
            goto or_right_10;
        }
        or_right_10:;
        tmp_or_right_value_10 = mod_consts[13];
        tmp_assign_source_14 = tmp_or_right_value_10;
        goto or_end_10;
        or_left_10:;
        tmp_assign_source_14 = tmp_or_left_value_10;
        or_end_10:;
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_14;
            Py_INCREF(par_frame);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_5 = par_align;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_align;
            assert(old != NULL);
            par_align = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_style);
        tmp_cmp_expr_left_6 = par_style;
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_16;
        int tmp_or_left_truth_11;
        PyObject *tmp_or_left_value_11;
        PyObject *tmp_or_right_value_11;
        CHECK_OBJECT(par_scale);
        tmp_or_left_value_11 = par_scale;
        tmp_or_left_truth_11 = CHECK_IF_TRUE(tmp_or_left_value_11);
        if (tmp_or_left_truth_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_11 == 1) {
            goto or_left_11;
        } else {
            goto or_right_11;
        }
        or_right_11:;
        tmp_or_right_value_11 = mod_consts[19];
        tmp_assign_source_16 = tmp_or_right_value_11;
        goto or_end_11;
        or_left_11:;
        tmp_assign_source_16 = tmp_or_left_value_11;
        or_end_11:;
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_16;
            Py_INCREF(par_scale);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        int tmp_or_left_truth_12;
        PyObject *tmp_or_left_value_12;
        PyObject *tmp_or_right_value_12;
        CHECK_OBJECT(par_fg);
        tmp_or_left_value_12 = par_fg;
        tmp_or_left_truth_12 = CHECK_IF_TRUE(tmp_or_left_value_12);
        if (tmp_or_left_truth_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_12 == 1) {
            goto or_left_12;
        } else {
            goto or_right_12;
        }
        or_right_12:;
        tmp_or_right_value_12 = mod_consts[20];
        tmp_assign_source_17 = tmp_or_right_value_12;
        goto or_end_12;
        or_left_12:;
        tmp_assign_source_17 = tmp_or_left_value_12;
        or_end_12:;
        {
            PyObject *old = par_fg;
            assert(old != NULL);
            par_fg = tmp_assign_source_17;
            Py_INCREF(par_fg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        int tmp_or_left_truth_13;
        PyObject *tmp_or_left_value_13;
        PyObject *tmp_or_right_value_13;
        CHECK_OBJECT(par_bg);
        tmp_or_left_value_13 = par_bg;
        tmp_or_left_truth_13 = CHECK_IF_TRUE(tmp_or_left_value_13);
        if (tmp_or_left_truth_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_13 == 1) {
            goto or_left_13;
        } else {
            goto or_right_13;
        }
        or_right_13:;
        tmp_or_right_value_13 = mod_consts[13];
        tmp_assign_source_18 = tmp_or_right_value_13;
        goto or_end_13;
        or_left_13:;
        tmp_assign_source_18 = tmp_or_left_value_13;
        or_end_13:;
        {
            PyObject *old = par_bg;
            assert(old != NULL);
            par_bg = tmp_assign_source_18;
            Py_INCREF(par_bg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        int tmp_or_left_truth_14;
        PyObject *tmp_or_left_value_14;
        PyObject *tmp_or_right_value_14;
        CHECK_OBJECT(par_shadow);
        tmp_or_left_value_14 = par_shadow;
        tmp_or_left_truth_14 = CHECK_IF_TRUE(tmp_or_left_value_14);
        if (tmp_or_left_truth_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_14 == 1) {
            goto or_left_14;
        } else {
            goto or_right_14;
        }
        or_right_14:;
        tmp_or_right_value_14 = mod_consts[12];
        tmp_assign_source_19 = tmp_or_right_value_14;
        goto or_end_14;
        or_left_14:;
        tmp_assign_source_19 = tmp_or_left_value_14;
        or_end_14:;
        {
            PyObject *old = par_shadow;
            assert(old != NULL);
            par_shadow = tmp_assign_source_19;
            Py_INCREF(par_shadow);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        int tmp_or_left_truth_15;
        PyObject *tmp_or_left_value_15;
        PyObject *tmp_or_right_value_15;
        CHECK_OBJECT(par_frame);
        tmp_or_left_value_15 = par_frame;
        tmp_or_left_truth_15 = CHECK_IF_TRUE(tmp_or_left_value_15);
        if (tmp_or_left_truth_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_15 == 1) {
            goto or_left_15;
        } else {
            goto or_right_15;
        }
        or_right_15:;
        tmp_or_right_value_15 = mod_consts[13];
        tmp_assign_source_20 = tmp_or_right_value_15;
        goto or_end_15;
        or_left_15:;
        tmp_assign_source_20 = tmp_or_left_value_15;
        or_end_15:;
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_20;
            Py_INCREF(par_frame);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_7 = par_align;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_align;
            assert(old != NULL);
            par_align = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_style);
        tmp_cmp_expr_left_8 = par_style;
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_22;
        int tmp_or_left_truth_16;
        PyObject *tmp_or_left_value_16;
        PyObject *tmp_or_right_value_16;
        CHECK_OBJECT(par_scale);
        tmp_or_left_value_16 = par_scale;
        tmp_or_left_truth_16 = CHECK_IF_TRUE(tmp_or_left_value_16);
        if (tmp_or_left_truth_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_16 == 1) {
            goto or_left_16;
        } else {
            goto or_right_16;
        }
        or_right_16:;
        tmp_or_right_value_16 = mod_consts[19];
        tmp_assign_source_22 = tmp_or_right_value_16;
        goto or_end_16;
        or_left_16:;
        tmp_assign_source_22 = tmp_or_left_value_16;
        or_end_16:;
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_22;
            Py_INCREF(par_scale);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        int tmp_or_left_truth_17;
        PyObject *tmp_or_left_value_17;
        PyObject *tmp_or_right_value_17;
        CHECK_OBJECT(par_fg);
        tmp_or_left_value_17 = par_fg;
        tmp_or_left_truth_17 = CHECK_IF_TRUE(tmp_or_left_value_17);
        if (tmp_or_left_truth_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_17 == 1) {
            goto or_left_17;
        } else {
            goto or_right_17;
        }
        or_right_17:;
        tmp_or_right_value_17 = mod_consts[22];
        tmp_assign_source_23 = tmp_or_right_value_17;
        goto or_end_17;
        or_left_17:;
        tmp_assign_source_23 = tmp_or_left_value_17;
        or_end_17:;
        {
            PyObject *old = par_fg;
            assert(old != NULL);
            par_fg = tmp_assign_source_23;
            Py_INCREF(par_fg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        int tmp_or_left_truth_18;
        PyObject *tmp_or_left_value_18;
        PyObject *tmp_or_right_value_18;
        CHECK_OBJECT(par_bg);
        tmp_or_left_value_18 = par_bg;
        tmp_or_left_truth_18 = CHECK_IF_TRUE(tmp_or_left_value_18);
        if (tmp_or_left_truth_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_18 == 1) {
            goto or_left_18;
        } else {
            goto or_right_18;
        }
        or_right_18:;
        tmp_or_right_value_18 = mod_consts[13];
        tmp_assign_source_24 = tmp_or_right_value_18;
        goto or_end_18;
        or_left_18:;
        tmp_assign_source_24 = tmp_or_left_value_18;
        or_end_18:;
        {
            PyObject *old = par_bg;
            assert(old != NULL);
            par_bg = tmp_assign_source_24;
            Py_INCREF(par_bg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        int tmp_or_left_truth_19;
        PyObject *tmp_or_left_value_19;
        PyObject *tmp_or_right_value_19;
        CHECK_OBJECT(par_shadow);
        tmp_or_left_value_19 = par_shadow;
        tmp_or_left_truth_19 = CHECK_IF_TRUE(tmp_or_left_value_19);
        if (tmp_or_left_truth_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_19 == 1) {
            goto or_left_19;
        } else {
            goto or_right_19;
        }
        or_right_19:;
        tmp_or_right_value_19 = mod_consts[13];
        tmp_assign_source_25 = tmp_or_right_value_19;
        goto or_end_19;
        or_left_19:;
        tmp_assign_source_25 = tmp_or_left_value_19;
        or_end_19:;
        {
            PyObject *old = par_shadow;
            assert(old != NULL);
            par_shadow = tmp_assign_source_25;
            Py_INCREF(par_shadow);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        int tmp_or_left_truth_20;
        PyObject *tmp_or_left_value_20;
        PyObject *tmp_or_right_value_20;
        CHECK_OBJECT(par_frame);
        tmp_or_left_value_20 = par_frame;
        tmp_or_left_truth_20 = CHECK_IF_TRUE(tmp_or_left_value_20);
        if (tmp_or_left_truth_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_20 == 1) {
            goto or_left_20;
        } else {
            goto or_right_20;
        }
        or_right_20:;
        tmp_or_right_value_20 = mod_consts[13];
        tmp_assign_source_26 = tmp_or_right_value_20;
        goto or_end_20;
        or_left_20:;
        tmp_assign_source_26 = tmp_or_left_value_20;
        or_end_20:;
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_26;
            Py_INCREF(par_frame);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_9 = par_align;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[14]);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_align;
            assert(old != NULL);
            par_align = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_style);
        tmp_cmp_expr_left_10 = par_style;
        tmp_cmp_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
            tmp_cmp_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_cmp_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_28;
        int tmp_or_left_truth_21;
        PyObject *tmp_or_left_value_21;
        PyObject *tmp_or_right_value_21;
        CHECK_OBJECT(par_scale);
        tmp_or_left_value_21 = par_scale;
        tmp_or_left_truth_21 = CHECK_IF_TRUE(tmp_or_left_value_21);
        if (tmp_or_left_truth_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_21 == 1) {
            goto or_left_21;
        } else {
            goto or_right_21;
        }
        or_right_21:;
        tmp_or_right_value_21 = mod_consts[19];
        tmp_assign_source_28 = tmp_or_right_value_21;
        goto or_end_21;
        or_left_21:;
        tmp_assign_source_28 = tmp_or_left_value_21;
        or_end_21:;
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_28;
            Py_INCREF(par_scale);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        int tmp_or_left_truth_22;
        PyObject *tmp_or_left_value_22;
        PyObject *tmp_or_right_value_22;
        CHECK_OBJECT(par_fg);
        tmp_or_left_value_22 = par_fg;
        tmp_or_left_truth_22 = CHECK_IF_TRUE(tmp_or_left_value_22);
        if (tmp_or_left_truth_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_22 == 1) {
            goto or_left_22;
        } else {
            goto or_right_22;
        }
        or_right_22:;
        tmp_or_right_value_22 = mod_consts[12];
        tmp_assign_source_29 = tmp_or_right_value_22;
        goto or_end_22;
        or_left_22:;
        tmp_assign_source_29 = tmp_or_left_value_22;
        or_end_22:;
        {
            PyObject *old = par_fg;
            assert(old != NULL);
            par_fg = tmp_assign_source_29;
            Py_INCREF(par_fg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        int tmp_or_left_truth_23;
        PyObject *tmp_or_left_value_23;
        PyObject *tmp_or_right_value_23;
        CHECK_OBJECT(par_bg);
        tmp_or_left_value_23 = par_bg;
        tmp_or_left_truth_23 = CHECK_IF_TRUE(tmp_or_left_value_23);
        if (tmp_or_left_truth_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_23 == 1) {
            goto or_left_23;
        } else {
            goto or_right_23;
        }
        or_right_23:;
        tmp_or_right_value_23 = mod_consts[24];
        tmp_assign_source_30 = tmp_or_right_value_23;
        goto or_end_23;
        or_left_23:;
        tmp_assign_source_30 = tmp_or_left_value_23;
        or_end_23:;
        {
            PyObject *old = par_bg;
            assert(old != NULL);
            par_bg = tmp_assign_source_30;
            Py_INCREF(par_bg);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        int tmp_or_left_truth_24;
        PyObject *tmp_or_left_value_24;
        PyObject *tmp_or_right_value_24;
        CHECK_OBJECT(par_shadow);
        tmp_or_left_value_24 = par_shadow;
        tmp_or_left_truth_24 = CHECK_IF_TRUE(tmp_or_left_value_24);
        if (tmp_or_left_truth_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_24 == 1) {
            goto or_left_24;
        } else {
            goto or_right_24;
        }
        or_right_24:;
        tmp_or_right_value_24 = mod_consts[13];
        tmp_assign_source_31 = tmp_or_right_value_24;
        goto or_end_24;
        or_left_24:;
        tmp_assign_source_31 = tmp_or_left_value_24;
        or_end_24:;
        {
            PyObject *old = par_shadow;
            assert(old != NULL);
            par_shadow = tmp_assign_source_31;
            Py_INCREF(par_shadow);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        int tmp_or_left_truth_25;
        PyObject *tmp_or_left_value_25;
        PyObject *tmp_or_right_value_25;
        CHECK_OBJECT(par_frame);
        tmp_or_left_value_25 = par_frame;
        tmp_or_left_truth_25 = CHECK_IF_TRUE(tmp_or_left_value_25);
        if (tmp_or_left_truth_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_25 == 1) {
            goto or_left_25;
        } else {
            goto or_right_25;
        }
        or_right_25:;
        tmp_or_right_value_25 = mod_consts[13];
        tmp_assign_source_32 = tmp_or_right_value_25;
        goto or_end_25;
        or_left_25:;
        tmp_assign_source_32 = tmp_or_left_value_25;
        or_end_25:;
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_32;
            Py_INCREF(par_frame);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_11 = par_align;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[14]);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_align;
            assert(old != NULL);
            par_align = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 161;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_10:;
    branch_end_8:;
    branch_end_6:;
    branch_end_4:;
    branch_end_2:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_args_element_value_2 = par_scale;
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_scale);
        tmp_tuple_element_1 = par_scale;
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_scale);
        tmp_tuple_element_1 = par_scale;
        PyTuple_SET_ITEM0(tmp_assign_source_34, 1, tmp_tuple_element_1);
        {
            PyObject *old = par_scale;
            assert(old != NULL);
            par_scale = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (par_scale == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = par_scale;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_pos);
        tmp_assattr_value_3 = par_pos;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[30], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_roll);
        tmp_assattr_value_4 = par_roll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[31], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_wordwrap);
        tmp_assattr_value_5 = par_wordwrap;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[32], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_decal);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_decal);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_2 = var_textNode;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 175;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[33],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_font);
        tmp_cmp_expr_left_12 = par_font;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 178;
        tmp_assign_source_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[36]);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_font;
            assert(old != NULL);
            par_font = tmp_assign_source_35;
            Py_DECREF(old);
        }

    }
    branch_no_14:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_4 = var_textNode;
        CHECK_OBJECT(par_font);
        tmp_args_element_value_4 = par_font;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 180;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[37], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_7 = var_textNode;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_8 = par_fg;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_9 = par_fg;
        tmp_subscript_value_2 = mod_consts[39];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_10 = par_fg;
        tmp_subscript_value_3 = mod_consts[40];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_11 = par_fg;
        tmp_subscript_value_4 = mod_consts[41];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_4, 3);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_5 = var_textNode;
        CHECK_OBJECT(par_align);
        tmp_args_element_value_9 = par_align;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 182;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[42], tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_wordwrap);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_wordwrap);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_6 = var_textNode;
        CHECK_OBJECT(par_wordwrap);
        tmp_args_element_value_10 = par_wordwrap;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 185;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[43], tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_bg);
        tmp_expression_value_12 = par_bg;
        tmp_subscript_value_5 = mod_consts[41];
        tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_5, 3);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = mod_consts[2];
        tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_13 = var_textNode;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[44]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_14 = par_bg;
        tmp_subscript_value_6 = mod_consts[2];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_6, 0);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_15 = par_bg;
        tmp_subscript_value_7 = mod_consts[39];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_7, 1);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_16 = par_bg;
        tmp_subscript_value_8 = mod_consts[40];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_8, 2);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_17 = par_bg;
        tmp_subscript_value_9 = mod_consts[41];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_9, 3);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_7 = var_textNode;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 190;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS4(
            tstate,
            tmp_called_instance_7,
            mod_consts[45],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_18 = par_shadow;
        tmp_subscript_value_10 = mod_consts[41];
        tmp_cmp_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_10, 3);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = mod_consts[2];
        tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_19 = var_textNode;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[47]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_20 = par_shadow;
        tmp_subscript_value_11 = mod_consts[2];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_11, 0);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_21 = par_shadow;
        tmp_subscript_value_12 = mod_consts[39];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_12, 1);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_22 = par_shadow;
        tmp_subscript_value_13 = mod_consts[40];
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_13, 2);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_23 = par_shadow;
        tmp_subscript_value_14 = mod_consts[41];
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_14, 3);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_24 = var_textNode;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[48]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadowOffset);
        tmp_dircall_arg2_1 = par_shadowOffset;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_10 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_25 = par_frame;
        tmp_subscript_value_15 = mod_consts[41];
        tmp_cmp_expr_left_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_15, 3);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = mod_consts[2];
        tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_26 = var_textNode;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[49]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_27 = par_frame;
        tmp_subscript_value_16 = mod_consts[2];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_16, 0);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_28 = par_frame;
        tmp_subscript_value_17 = mod_consts[39];
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_17, 1);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_29 = par_frame;
        tmp_subscript_value_18 = mod_consts[40];
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_18, 2);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_30 = par_frame;
        tmp_subscript_value_19 = mod_consts[41];
        tmp_args_element_value_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_19, 3);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_8 = var_textNode;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 202;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS4(
            tstate,
            tmp_called_instance_8,
            mod_consts[50],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(par_direction);
        tmp_cmp_expr_left_16 = par_direction;
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_19 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        int tmp_truth_name_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_direction);
        tmp_args_element_value_23 = par_direction;
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_13);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_13);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_13);
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(par_direction);
        tmp_expression_value_31 = par_direction;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[52]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 206;
        tmp_assign_source_36 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_direction;
            assert(old != NULL);
            par_direction = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(par_direction);
        tmp_cmp_expr_left_17 = par_direction;
        tmp_cmp_expr_right_17 = mod_consts[53];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[55]);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_direction;
            assert(old != NULL);
            par_direction = tmp_assign_source_37;
            Py_DECREF(old);
        }

    }
    goto branch_end_21;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(par_direction);
        tmp_cmp_expr_left_18 = par_direction;
        tmp_cmp_expr_right_18 = mod_consts[56];
        tmp_condition_result_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[57]);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_direction;
            assert(old != NULL);
            par_direction = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 212;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[58]);

        if (tmp_raise_type_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 212;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_22:;
    branch_end_21:;
    branch_no_20:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(var_textNode);
        tmp_expression_value_34 = var_textNode;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[59]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_direction == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_25 = par_direction;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 213;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_19:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 219;
        tmp_call_result_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[61]);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(par_drawOrder);
        tmp_cmp_expr_left_19 = par_drawOrder;
        tmp_cmp_expr_right_19 = Py_None;
        tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_10 = var_textNode;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 222;
        tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_11 = var_textNode;
        CHECK_OBJECT(par_drawOrder);
        tmp_args_element_value_26 = par_drawOrder;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 223;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[64], tmp_args_element_value_26);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_no_23:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_called_instance_12 = par_self;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_27 = par_text;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 225;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[65], tmp_args_element_value_27);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_text);
        tmp_operand_value_2 = par_text;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[66], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_mayChange);
        tmp_assattr_value_7 = par_mayChange;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[66], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_24:;
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[66]);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(var_textNode);
        tmp_called_instance_13 = var_textNode;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 236;
        tmp_assattr_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[67]);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[7], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_25:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[68], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(par_self);
        tmp_expression_value_36 = par_self;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[69]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_expression_value_37 = par_parent;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[70]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_38 = par_self;
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[7]);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sort);
        tmp_args_element_value_30 = par_sort;
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame.f_lineno = 241;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b6c869da4ec5b9a4790e7c223afa16b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b6c869da4ec5b9a4790e7c223afa16b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b6c869da4ec5b9a4790e7c223afa16b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b6c869da4ec5b9a4790e7c223afa16b,
        type_description_1,
        par_self,
        par_text,
        par_style,
        par_pos,
        par_roll,
        par_scale,
        par_fg,
        par_bg,
        par_shadow,
        par_shadowOffset,
        par_frame,
        par_align,
        par_wordwrap,
        par_drawOrder,
        par_decal,
        par_font,
        par_parent,
        par_sort,
        par_mayChange,
        par_direction,
        var_ShowBaseGlobal,
        var_textNode
    );


    // Release cached frame if used for exception.
    if (frame_8b6c869da4ec5b9a4790e7c223afa16b == cache_frame_8b6c869da4ec5b9a4790e7c223afa16b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b6c869da4ec5b9a4790e7c223afa16b);
        cache_frame_8b6c869da4ec5b9a4790e7c223afa16b = NULL;
    }

    assertFrameObject(frame_8b6c869da4ec5b9a4790e7c223afa16b);

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
    Py_XDECREF(par_scale);
    par_scale = NULL;
    CHECK_OBJECT(par_fg);
    Py_DECREF(par_fg);
    par_fg = NULL;
    CHECK_OBJECT(par_bg);
    Py_DECREF(par_bg);
    par_bg = NULL;
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);
    par_shadow = NULL;
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    par_frame = NULL;
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    par_align = NULL;
    CHECK_OBJECT(par_font);
    Py_DECREF(par_font);
    par_font = NULL;
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    par_parent = NULL;
    Py_XDECREF(par_direction);
    par_direction = NULL;
    Py_XDECREF(var_ShowBaseGlobal);
    var_ShowBaseGlobal = NULL;
    CHECK_OBJECT(var_textNode);
    Py_DECREF(var_textNode);
    var_textNode = NULL;
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

    Py_XDECREF(par_scale);
    par_scale = NULL;
    CHECK_OBJECT(par_fg);
    Py_DECREF(par_fg);
    par_fg = NULL;
    CHECK_OBJECT(par_bg);
    Py_DECREF(par_bg);
    par_bg = NULL;
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);
    par_shadow = NULL;
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    par_frame = NULL;
    Py_XDECREF(par_align);
    par_align = NULL;
    Py_XDECREF(par_font);
    par_font = NULL;
    Py_XDECREF(par_parent);
    par_parent = NULL;
    Py_XDECREF(par_direction);
    par_direction = NULL;
    Py_XDECREF(var_ShowBaseGlobal);
    var_ShowBaseGlobal = NULL;
    Py_XDECREF(var_textNode);
    var_textNode = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);
    CHECK_OBJECT(par_shadowOffset);
    Py_DECREF(par_shadowOffset);
    CHECK_OBJECT(par_wordwrap);
    Py_DECREF(par_wordwrap);
    CHECK_OBJECT(par_drawOrder);
    Py_DECREF(par_drawOrder);
    CHECK_OBJECT(par_decal);
    Py_DECREF(par_decal);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_mayChange);
    Py_DECREF(par_mayChange);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);
    CHECK_OBJECT(par_shadowOffset);
    Py_DECREF(par_shadowOffset);
    CHECK_OBJECT(par_wordwrap);
    Py_DECREF(par_wordwrap);
    CHECK_OBJECT(par_drawOrder);
    Py_DECREF(par_drawOrder);
    CHECK_OBJECT(par_decal);
    Py_DECREF(par_decal);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_mayChange);
    Py_DECREF(par_mayChange);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__2_cleanup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ab8d23f2feabc42d5384ac96dbf9d41d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d)) {
        Py_XDECREF(cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d = MAKE_FUNCTION_FRAME(tstate, codeobj_ab8d23f2feabc42d5384ac96dbf9d41d, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d->m_type_description == NULL);
    frame_ab8d23f2feabc42d5384ac96dbf9d41d = cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ab8d23f2feabc42d5384ac96dbf9d41d);
    assert(Py_REFCNT(frame_ab8d23f2feabc42d5384ac96dbf9d41d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[68], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ab8d23f2feabc42d5384ac96dbf9d41d->m_frame.f_lineno = 247;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[72]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_ab8d23f2feabc42d5384ac96dbf9d41d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab8d23f2feabc42d5384ac96dbf9d41d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab8d23f2feabc42d5384ac96dbf9d41d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab8d23f2feabc42d5384ac96dbf9d41d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ab8d23f2feabc42d5384ac96dbf9d41d == cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d);
        cache_frame_ab8d23f2feabc42d5384ac96dbf9d41d = NULL;
    }

    assertFrameObject(frame_ab8d23f2feabc42d5384ac96dbf9d41d);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__3_destroy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_53a0c33728c240ba06b5d7e2096dec99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53a0c33728c240ba06b5d7e2096dec99 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53a0c33728c240ba06b5d7e2096dec99)) {
        Py_XDECREF(cache_frame_53a0c33728c240ba06b5d7e2096dec99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53a0c33728c240ba06b5d7e2096dec99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53a0c33728c240ba06b5d7e2096dec99 = MAKE_FUNCTION_FRAME(tstate, codeobj_53a0c33728c240ba06b5d7e2096dec99, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53a0c33728c240ba06b5d7e2096dec99->m_type_description == NULL);
    frame_53a0c33728c240ba06b5d7e2096dec99 = cache_frame_53a0c33728c240ba06b5d7e2096dec99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53a0c33728c240ba06b5d7e2096dec99);
    assert(Py_REFCNT(frame_53a0c33728c240ba06b5d7e2096dec99) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_53a0c33728c240ba06b5d7e2096dec99->m_frame.f_lineno = 250;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[73]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53a0c33728c240ba06b5d7e2096dec99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53a0c33728c240ba06b5d7e2096dec99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53a0c33728c240ba06b5d7e2096dec99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53a0c33728c240ba06b5d7e2096dec99,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_53a0c33728c240ba06b5d7e2096dec99 == cache_frame_53a0c33728c240ba06b5d7e2096dec99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53a0c33728c240ba06b5d7e2096dec99);
        cache_frame_53a0c33728c240ba06b5d7e2096dec99 = NULL;
    }

    assertFrameObject(frame_53a0c33728c240ba06b5d7e2096dec99);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__6_setDecal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_decal = python_pars[1];
    struct Nuitka_FrameObject *frame_540be06ccd3c24b5ad94c2785d14920b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_540be06ccd3c24b5ad94c2785d14920b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_540be06ccd3c24b5ad94c2785d14920b)) {
        Py_XDECREF(cache_frame_540be06ccd3c24b5ad94c2785d14920b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_540be06ccd3c24b5ad94c2785d14920b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_540be06ccd3c24b5ad94c2785d14920b = MAKE_FUNCTION_FRAME(tstate, codeobj_540be06ccd3c24b5ad94c2785d14920b, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_540be06ccd3c24b5ad94c2785d14920b->m_type_description == NULL);
    frame_540be06ccd3c24b5ad94c2785d14920b = cache_frame_540be06ccd3c24b5ad94c2785d14920b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_540be06ccd3c24b5ad94c2785d14920b);
    assert(Py_REFCNT(frame_540be06ccd3c24b5ad94c2785d14920b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_decal);
        tmp_args_element_value_1 = par_decal;
        frame_540be06ccd3c24b5ad94c2785d14920b->m_frame.f_lineno = 266;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[33], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_540be06ccd3c24b5ad94c2785d14920b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_540be06ccd3c24b5ad94c2785d14920b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_540be06ccd3c24b5ad94c2785d14920b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_540be06ccd3c24b5ad94c2785d14920b,
        type_description_1,
        par_self,
        par_decal
    );


    // Release cached frame if used for exception.
    if (frame_540be06ccd3c24b5ad94c2785d14920b == cache_frame_540be06ccd3c24b5ad94c2785d14920b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_540be06ccd3c24b5ad94c2785d14920b);
        cache_frame_540be06ccd3c24b5ad94c2785d14920b = NULL;
    }

    assertFrameObject(frame_540be06ccd3c24b5ad94c2785d14920b);

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
    CHECK_OBJECT(par_decal);
    Py_DECREF(par_decal);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_decal);
    Py_DECREF(par_decal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__7_getDecal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_32d2e87af6e0680fc91c99b7a6a2a24d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d)) {
        Py_XDECREF(cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d = MAKE_FUNCTION_FRAME(tstate, codeobj_32d2e87af6e0680fc91c99b7a6a2a24d, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d->m_type_description == NULL);
    frame_32d2e87af6e0680fc91c99b7a6a2a24d = cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_32d2e87af6e0680fc91c99b7a6a2a24d);
    assert(Py_REFCNT(frame_32d2e87af6e0680fc91c99b7a6a2a24d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32d2e87af6e0680fc91c99b7a6a2a24d->m_frame.f_lineno = 269;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[74]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_32d2e87af6e0680fc91c99b7a6a2a24d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32d2e87af6e0680fc91c99b7a6a2a24d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32d2e87af6e0680fc91c99b7a6a2a24d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32d2e87af6e0680fc91c99b7a6a2a24d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_32d2e87af6e0680fc91c99b7a6a2a24d == cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d);
        cache_frame_32d2e87af6e0680fc91c99b7a6a2a24d = NULL;
    }

    assertFrameObject(frame_32d2e87af6e0680fc91c99b7a6a2a24d);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__8_setFont(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_font = python_pars[1];
    struct Nuitka_FrameObject *frame_6ea74884be7f845bd6f7281f77b23eae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ea74884be7f845bd6f7281f77b23eae = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ea74884be7f845bd6f7281f77b23eae)) {
        Py_XDECREF(cache_frame_6ea74884be7f845bd6f7281f77b23eae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ea74884be7f845bd6f7281f77b23eae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ea74884be7f845bd6f7281f77b23eae = MAKE_FUNCTION_FRAME(tstate, codeobj_6ea74884be7f845bd6f7281f77b23eae, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ea74884be7f845bd6f7281f77b23eae->m_type_description == NULL);
    frame_6ea74884be7f845bd6f7281f77b23eae = cache_frame_6ea74884be7f845bd6f7281f77b23eae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6ea74884be7f845bd6f7281f77b23eae);
    assert(Py_REFCNT(frame_6ea74884be7f845bd6f7281f77b23eae) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_font);
        tmp_args_element_value_1 = par_font;
        frame_6ea74884be7f845bd6f7281f77b23eae->m_frame.f_lineno = 274;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ea74884be7f845bd6f7281f77b23eae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ea74884be7f845bd6f7281f77b23eae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ea74884be7f845bd6f7281f77b23eae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ea74884be7f845bd6f7281f77b23eae,
        type_description_1,
        par_self,
        par_font
    );


    // Release cached frame if used for exception.
    if (frame_6ea74884be7f845bd6f7281f77b23eae == cache_frame_6ea74884be7f845bd6f7281f77b23eae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ea74884be7f845bd6f7281f77b23eae);
        cache_frame_6ea74884be7f845bd6f7281f77b23eae = NULL;
    }

    assertFrameObject(frame_6ea74884be7f845bd6f7281f77b23eae);

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
    CHECK_OBJECT(par_font);
    Py_DECREF(par_font);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_font);
    Py_DECREF(par_font);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__9_getFont(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d0235a71ab4759a19d94bdb414f1df76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0235a71ab4759a19d94bdb414f1df76 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0235a71ab4759a19d94bdb414f1df76)) {
        Py_XDECREF(cache_frame_d0235a71ab4759a19d94bdb414f1df76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0235a71ab4759a19d94bdb414f1df76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0235a71ab4759a19d94bdb414f1df76 = MAKE_FUNCTION_FRAME(tstate, codeobj_d0235a71ab4759a19d94bdb414f1df76, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0235a71ab4759a19d94bdb414f1df76->m_type_description == NULL);
    frame_d0235a71ab4759a19d94bdb414f1df76 = cache_frame_d0235a71ab4759a19d94bdb414f1df76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0235a71ab4759a19d94bdb414f1df76);
    assert(Py_REFCNT(frame_d0235a71ab4759a19d94bdb414f1df76) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d0235a71ab4759a19d94bdb414f1df76->m_frame.f_lineno = 277;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_d0235a71ab4759a19d94bdb414f1df76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0235a71ab4759a19d94bdb414f1df76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0235a71ab4759a19d94bdb414f1df76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0235a71ab4759a19d94bdb414f1df76,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d0235a71ab4759a19d94bdb414f1df76 == cache_frame_d0235a71ab4759a19d94bdb414f1df76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0235a71ab4759a19d94bdb414f1df76);
        cache_frame_d0235a71ab4759a19d94bdb414f1df76 = NULL;
    }

    assertFrameObject(frame_d0235a71ab4759a19d94bdb414f1df76);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__10_clearText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_299c4425aa6175d130849b2c2b2ce38f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_299c4425aa6175d130849b2c2b2ce38f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_299c4425aa6175d130849b2c2b2ce38f)) {
        Py_XDECREF(cache_frame_299c4425aa6175d130849b2c2b2ce38f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_299c4425aa6175d130849b2c2b2ce38f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_299c4425aa6175d130849b2c2b2ce38f = MAKE_FUNCTION_FRAME(tstate, codeobj_299c4425aa6175d130849b2c2b2ce38f, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_299c4425aa6175d130849b2c2b2ce38f->m_type_description == NULL);
    frame_299c4425aa6175d130849b2c2b2ce38f = cache_frame_299c4425aa6175d130849b2c2b2ce38f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_299c4425aa6175d130849b2c2b2ce38f);
    assert(Py_REFCNT(frame_299c4425aa6175d130849b2c2b2ce38f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_299c4425aa6175d130849b2c2b2ce38f->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[76]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_299c4425aa6175d130849b2c2b2ce38f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_299c4425aa6175d130849b2c2b2ce38f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_299c4425aa6175d130849b2c2b2ce38f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_299c4425aa6175d130849b2c2b2ce38f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_299c4425aa6175d130849b2c2b2ce38f == cache_frame_299c4425aa6175d130849b2c2b2ce38f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_299c4425aa6175d130849b2c2b2ce38f);
        cache_frame_299c4425aa6175d130849b2c2b2ce38f = NULL;
    }

    assertFrameObject(frame_299c4425aa6175d130849b2c2b2ce38f);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__11_setText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    struct Nuitka_FrameObject *frame_2b05905877337b056cad6b82e25e84a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2b05905877337b056cad6b82e25e84a7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b05905877337b056cad6b82e25e84a7)) {
        Py_XDECREF(cache_frame_2b05905877337b056cad6b82e25e84a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b05905877337b056cad6b82e25e84a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b05905877337b056cad6b82e25e84a7 = MAKE_FUNCTION_FRAME(tstate, codeobj_2b05905877337b056cad6b82e25e84a7, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b05905877337b056cad6b82e25e84a7->m_type_description == NULL);
    frame_2b05905877337b056cad6b82e25e84a7 = cache_frame_2b05905877337b056cad6b82e25e84a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2b05905877337b056cad6b82e25e84a7);
    assert(Py_REFCNT(frame_2b05905877337b056cad6b82e25e84a7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2b05905877337b056cad6b82e25e84a7->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 286;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[78], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        frame_2b05905877337b056cad6b82e25e84a7->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[79], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_4 = par_text;
        frame_2b05905877337b056cad6b82e25e84a7->m_frame.f_lineno = 294;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[65], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b05905877337b056cad6b82e25e84a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b05905877337b056cad6b82e25e84a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b05905877337b056cad6b82e25e84a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b05905877337b056cad6b82e25e84a7,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_2b05905877337b056cad6b82e25e84a7 == cache_frame_2b05905877337b056cad6b82e25e84a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b05905877337b056cad6b82e25e84a7);
        cache_frame_2b05905877337b056cad6b82e25e84a7 = NULL;
    }

    assertFrameObject(frame_2b05905877337b056cad6b82e25e84a7);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__12_appendText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    struct Nuitka_FrameObject *frame_bdef03e839b225faa20768c8c56296f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bdef03e839b225faa20768c8c56296f7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bdef03e839b225faa20768c8c56296f7)) {
        Py_XDECREF(cache_frame_bdef03e839b225faa20768c8c56296f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdef03e839b225faa20768c8c56296f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdef03e839b225faa20768c8c56296f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_bdef03e839b225faa20768c8c56296f7, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdef03e839b225faa20768c8c56296f7->m_type_description == NULL);
    frame_bdef03e839b225faa20768c8c56296f7 = cache_frame_bdef03e839b225faa20768c8c56296f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bdef03e839b225faa20768c8c56296f7);
    assert(Py_REFCNT(frame_bdef03e839b225faa20768c8c56296f7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bdef03e839b225faa20768c8c56296f7->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 298;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[78], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        frame_bdef03e839b225faa20768c8c56296f7->m_frame.f_lineno = 304;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[80], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_4 = par_text;
        frame_bdef03e839b225faa20768c8c56296f7->m_frame.f_lineno = 306;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[81], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdef03e839b225faa20768c8c56296f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdef03e839b225faa20768c8c56296f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdef03e839b225faa20768c8c56296f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdef03e839b225faa20768c8c56296f7,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bdef03e839b225faa20768c8c56296f7 == cache_frame_bdef03e839b225faa20768c8c56296f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdef03e839b225faa20768c8c56296f7);
        cache_frame_bdef03e839b225faa20768c8c56296f7 = NULL;
    }

    assertFrameObject(frame_bdef03e839b225faa20768c8c56296f7);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__13_getText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a77c4fcfea5f5e037f3f245f0b15070d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a77c4fcfea5f5e037f3f245f0b15070d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a77c4fcfea5f5e037f3f245f0b15070d)) {
        Py_XDECREF(cache_frame_a77c4fcfea5f5e037f3f245f0b15070d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a77c4fcfea5f5e037f3f245f0b15070d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a77c4fcfea5f5e037f3f245f0b15070d = MAKE_FUNCTION_FRAME(tstate, codeobj_a77c4fcfea5f5e037f3f245f0b15070d, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a77c4fcfea5f5e037f3f245f0b15070d->m_type_description == NULL);
    frame_a77c4fcfea5f5e037f3f245f0b15070d = cache_frame_a77c4fcfea5f5e037f3f245f0b15070d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a77c4fcfea5f5e037f3f245f0b15070d);
    assert(Py_REFCNT(frame_a77c4fcfea5f5e037f3f245f0b15070d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 309;
            type_description_1 = "o";
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
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a77c4fcfea5f5e037f3f245f0b15070d->m_frame.f_lineno = 310;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[82]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a77c4fcfea5f5e037f3f245f0b15070d->m_frame.f_lineno = 312;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[83]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a77c4fcfea5f5e037f3f245f0b15070d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a77c4fcfea5f5e037f3f245f0b15070d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a77c4fcfea5f5e037f3f245f0b15070d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a77c4fcfea5f5e037f3f245f0b15070d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a77c4fcfea5f5e037f3f245f0b15070d == cache_frame_a77c4fcfea5f5e037f3f245f0b15070d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a77c4fcfea5f5e037f3f245f0b15070d);
        cache_frame_a77c4fcfea5f5e037f3f245f0b15070d = NULL;
    }

    assertFrameObject(frame_a77c4fcfea5f5e037f3f245f0b15070d);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__14_setTextX(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_763c53e6af1aa26828a7034316a69a4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_763c53e6af1aa26828a7034316a69a4e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_763c53e6af1aa26828a7034316a69a4e)) {
        Py_XDECREF(cache_frame_763c53e6af1aa26828a7034316a69a4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_763c53e6af1aa26828a7034316a69a4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_763c53e6af1aa26828a7034316a69a4e = MAKE_FUNCTION_FRAME(tstate, codeobj_763c53e6af1aa26828a7034316a69a4e, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_763c53e6af1aa26828a7034316a69a4e->m_type_description == NULL);
    frame_763c53e6af1aa26828a7034316a69a4e = cache_frame_763c53e6af1aa26828a7034316a69a4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_763c53e6af1aa26828a7034316a69a4e);
    assert(Py_REFCNT(frame_763c53e6af1aa26828a7034316a69a4e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_763c53e6af1aa26828a7034316a69a4e->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_763c53e6af1aa26828a7034316a69a4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_763c53e6af1aa26828a7034316a69a4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_763c53e6af1aa26828a7034316a69a4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_763c53e6af1aa26828a7034316a69a4e,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_763c53e6af1aa26828a7034316a69a4e == cache_frame_763c53e6af1aa26828a7034316a69a4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_763c53e6af1aa26828a7034316a69a4e);
        cache_frame_763c53e6af1aa26828a7034316a69a4e = NULL;
    }

    assertFrameObject(frame_763c53e6af1aa26828a7034316a69a4e);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__15_setX(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_c54b16fb0803c4e1bb503dda50871189;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c54b16fb0803c4e1bb503dda50871189 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c54b16fb0803c4e1bb503dda50871189)) {
        Py_XDECREF(cache_frame_c54b16fb0803c4e1bb503dda50871189);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c54b16fb0803c4e1bb503dda50871189 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c54b16fb0803c4e1bb503dda50871189 = MAKE_FUNCTION_FRAME(tstate, codeobj_c54b16fb0803c4e1bb503dda50871189, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c54b16fb0803c4e1bb503dda50871189->m_type_description == NULL);
    frame_c54b16fb0803c4e1bb503dda50871189 = cache_frame_c54b16fb0803c4e1bb503dda50871189;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c54b16fb0803c4e1bb503dda50871189);
    assert(Py_REFCNT(frame_c54b16fb0803c4e1bb503dda50871189) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c54b16fb0803c4e1bb503dda50871189->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c54b16fb0803c4e1bb503dda50871189, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c54b16fb0803c4e1bb503dda50871189->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c54b16fb0803c4e1bb503dda50871189, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c54b16fb0803c4e1bb503dda50871189,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c54b16fb0803c4e1bb503dda50871189 == cache_frame_c54b16fb0803c4e1bb503dda50871189) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c54b16fb0803c4e1bb503dda50871189);
        cache_frame_c54b16fb0803c4e1bb503dda50871189 = NULL;
    }

    assertFrameObject(frame_c54b16fb0803c4e1bb503dda50871189);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__16_setTextY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_36e4ae67d49c17a0409af3284053ad5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36e4ae67d49c17a0409af3284053ad5b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36e4ae67d49c17a0409af3284053ad5b)) {
        Py_XDECREF(cache_frame_36e4ae67d49c17a0409af3284053ad5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36e4ae67d49c17a0409af3284053ad5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36e4ae67d49c17a0409af3284053ad5b = MAKE_FUNCTION_FRAME(tstate, codeobj_36e4ae67d49c17a0409af3284053ad5b, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36e4ae67d49c17a0409af3284053ad5b->m_type_description == NULL);
    frame_36e4ae67d49c17a0409af3284053ad5b = cache_frame_36e4ae67d49c17a0409af3284053ad5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36e4ae67d49c17a0409af3284053ad5b);
    assert(Py_REFCNT(frame_36e4ae67d49c17a0409af3284053ad5b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        frame_36e4ae67d49c17a0409af3284053ad5b->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36e4ae67d49c17a0409af3284053ad5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36e4ae67d49c17a0409af3284053ad5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36e4ae67d49c17a0409af3284053ad5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36e4ae67d49c17a0409af3284053ad5b,
        type_description_1,
        par_self,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_36e4ae67d49c17a0409af3284053ad5b == cache_frame_36e4ae67d49c17a0409af3284053ad5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36e4ae67d49c17a0409af3284053ad5b);
        cache_frame_36e4ae67d49c17a0409af3284053ad5b = NULL;
    }

    assertFrameObject(frame_36e4ae67d49c17a0409af3284053ad5b);

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
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__17_setY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_96d271b339b463eafd3ff58202d1116e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96d271b339b463eafd3ff58202d1116e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96d271b339b463eafd3ff58202d1116e)) {
        Py_XDECREF(cache_frame_96d271b339b463eafd3ff58202d1116e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96d271b339b463eafd3ff58202d1116e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96d271b339b463eafd3ff58202d1116e = MAKE_FUNCTION_FRAME(tstate, codeobj_96d271b339b463eafd3ff58202d1116e, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96d271b339b463eafd3ff58202d1116e->m_type_description == NULL);
    frame_96d271b339b463eafd3ff58202d1116e = cache_frame_96d271b339b463eafd3ff58202d1116e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_96d271b339b463eafd3ff58202d1116e);
    assert(Py_REFCNT(frame_96d271b339b463eafd3ff58202d1116e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        frame_96d271b339b463eafd3ff58202d1116e->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96d271b339b463eafd3ff58202d1116e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96d271b339b463eafd3ff58202d1116e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96d271b339b463eafd3ff58202d1116e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96d271b339b463eafd3ff58202d1116e,
        type_description_1,
        par_self,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_96d271b339b463eafd3ff58202d1116e == cache_frame_96d271b339b463eafd3ff58202d1116e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96d271b339b463eafd3ff58202d1116e);
        cache_frame_96d271b339b463eafd3ff58202d1116e = NULL;
    }

    assertFrameObject(frame_96d271b339b463eafd3ff58202d1116e);

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
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__18_setTextPos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_720b0a15919c69c18472b59084c0089c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_720b0a15919c69c18472b59084c0089c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_720b0a15919c69c18472b59084c0089c)) {
        Py_XDECREF(cache_frame_720b0a15919c69c18472b59084c0089c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_720b0a15919c69c18472b59084c0089c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_720b0a15919c69c18472b59084c0089c = MAKE_FUNCTION_FRAME(tstate, codeobj_720b0a15919c69c18472b59084c0089c, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_720b0a15919c69c18472b59084c0089c->m_type_description == NULL);
    frame_720b0a15919c69c18472b59084c0089c = cache_frame_720b0a15919c69c18472b59084c0089c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_720b0a15919c69c18472b59084c0089c);
    assert(Py_REFCNT(frame_720b0a15919c69c18472b59084c0089c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_1 = par_y;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_720b0a15919c69c18472b59084c0089c->m_frame.f_lineno = 349;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 352;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_720b0a15919c69c18472b59084c0089c->m_frame.f_lineno = 352;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_720b0a15919c69c18472b59084c0089c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_720b0a15919c69c18472b59084c0089c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_720b0a15919c69c18472b59084c0089c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_720b0a15919c69c18472b59084c0089c,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_720b0a15919c69c18472b59084c0089c == cache_frame_720b0a15919c69c18472b59084c0089c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_720b0a15919c69c18472b59084c0089c);
        cache_frame_720b0a15919c69c18472b59084c0089c = NULL;
    }

    assertFrameObject(frame_720b0a15919c69c18472b59084c0089c);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__19_getTextPos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_13b9aa222d6fffaa6f5f03b6452a055b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13b9aa222d6fffaa6f5f03b6452a055b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13b9aa222d6fffaa6f5f03b6452a055b)) {
        Py_XDECREF(cache_frame_13b9aa222d6fffaa6f5f03b6452a055b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13b9aa222d6fffaa6f5f03b6452a055b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13b9aa222d6fffaa6f5f03b6452a055b = MAKE_FUNCTION_FRAME(tstate, codeobj_13b9aa222d6fffaa6f5f03b6452a055b, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13b9aa222d6fffaa6f5f03b6452a055b->m_type_description == NULL);
    frame_13b9aa222d6fffaa6f5f03b6452a055b = cache_frame_13b9aa222d6fffaa6f5f03b6452a055b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_13b9aa222d6fffaa6f5f03b6452a055b);
    assert(Py_REFCNT(frame_13b9aa222d6fffaa6f5f03b6452a055b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_13b9aa222d6fffaa6f5f03b6452a055b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13b9aa222d6fffaa6f5f03b6452a055b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13b9aa222d6fffaa6f5f03b6452a055b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13b9aa222d6fffaa6f5f03b6452a055b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_13b9aa222d6fffaa6f5f03b6452a055b == cache_frame_13b9aa222d6fffaa6f5f03b6452a055b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13b9aa222d6fffaa6f5f03b6452a055b);
        cache_frame_13b9aa222d6fffaa6f5f03b6452a055b = NULL;
    }

    assertFrameObject(frame_13b9aa222d6fffaa6f5f03b6452a055b);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__20_setPos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_07b7d08b4271c5c93f78caf490387b1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_07b7d08b4271c5c93f78caf490387b1b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07b7d08b4271c5c93f78caf490387b1b)) {
        Py_XDECREF(cache_frame_07b7d08b4271c5c93f78caf490387b1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07b7d08b4271c5c93f78caf490387b1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07b7d08b4271c5c93f78caf490387b1b = MAKE_FUNCTION_FRAME(tstate, codeobj_07b7d08b4271c5c93f78caf490387b1b, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07b7d08b4271c5c93f78caf490387b1b->m_type_description == NULL);
    frame_07b7d08b4271c5c93f78caf490387b1b = cache_frame_07b7d08b4271c5c93f78caf490387b1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07b7d08b4271c5c93f78caf490387b1b);
    assert(Py_REFCNT(frame_07b7d08b4271c5c93f78caf490387b1b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_07b7d08b4271c5c93f78caf490387b1b->m_frame.f_lineno = 370;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07b7d08b4271c5c93f78caf490387b1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07b7d08b4271c5c93f78caf490387b1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07b7d08b4271c5c93f78caf490387b1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07b7d08b4271c5c93f78caf490387b1b,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_07b7d08b4271c5c93f78caf490387b1b == cache_frame_07b7d08b4271c5c93f78caf490387b1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07b7d08b4271c5c93f78caf490387b1b);
        cache_frame_07b7d08b4271c5c93f78caf490387b1b = NULL;
    }

    assertFrameObject(frame_07b7d08b4271c5c93f78caf490387b1b);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__21_getPos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d68669cbc4b8cc0b20d4bcda0bed8cbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc)) {
        Py_XDECREF(cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc = MAKE_FUNCTION_FRAME(tstate, codeobj_d68669cbc4b8cc0b20d4bcda0bed8cbc, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc->m_type_description == NULL);
    frame_d68669cbc4b8cc0b20d4bcda0bed8cbc = cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d68669cbc4b8cc0b20d4bcda0bed8cbc);
    assert(Py_REFCNT(frame_d68669cbc4b8cc0b20d4bcda0bed8cbc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
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
        exception_tb = MAKE_TRACEBACK(frame_d68669cbc4b8cc0b20d4bcda0bed8cbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d68669cbc4b8cc0b20d4bcda0bed8cbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d68669cbc4b8cc0b20d4bcda0bed8cbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d68669cbc4b8cc0b20d4bcda0bed8cbc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d68669cbc4b8cc0b20d4bcda0bed8cbc == cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc);
        cache_frame_d68669cbc4b8cc0b20d4bcda0bed8cbc = NULL;
    }

    assertFrameObject(frame_d68669cbc4b8cc0b20d4bcda0bed8cbc);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__22_setTextR(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_6e2ca08eeb802bb9d30fcfc70feb0310;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310)) {
        Py_XDECREF(cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e2ca08eeb802bb9d30fcfc70feb0310, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310->m_type_description == NULL);
    frame_6e2ca08eeb802bb9d30fcfc70feb0310 = cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e2ca08eeb802bb9d30fcfc70feb0310);
    assert(Py_REFCNT(frame_6e2ca08eeb802bb9d30fcfc70feb0310) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_r);
        tmp_operand_value_1 = par_r;
        tmp_assattr_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6e2ca08eeb802bb9d30fcfc70feb0310->m_frame.f_lineno = 388;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e2ca08eeb802bb9d30fcfc70feb0310, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e2ca08eeb802bb9d30fcfc70feb0310->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e2ca08eeb802bb9d30fcfc70feb0310, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e2ca08eeb802bb9d30fcfc70feb0310,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_6e2ca08eeb802bb9d30fcfc70feb0310 == cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310);
        cache_frame_6e2ca08eeb802bb9d30fcfc70feb0310 = NULL;
    }

    assertFrameObject(frame_6e2ca08eeb802bb9d30fcfc70feb0310);

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
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__23_getTextR(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b1e8fcf13eab3047505f35847a8678c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b1e8fcf13eab3047505f35847a8678c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b1e8fcf13eab3047505f35847a8678c)) {
        Py_XDECREF(cache_frame_2b1e8fcf13eab3047505f35847a8678c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b1e8fcf13eab3047505f35847a8678c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b1e8fcf13eab3047505f35847a8678c = MAKE_FUNCTION_FRAME(tstate, codeobj_2b1e8fcf13eab3047505f35847a8678c, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b1e8fcf13eab3047505f35847a8678c->m_type_description == NULL);
    frame_2b1e8fcf13eab3047505f35847a8678c = cache_frame_2b1e8fcf13eab3047505f35847a8678c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2b1e8fcf13eab3047505f35847a8678c);
    assert(Py_REFCNT(frame_2b1e8fcf13eab3047505f35847a8678c) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
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
        exception_tb = MAKE_TRACEBACK(frame_2b1e8fcf13eab3047505f35847a8678c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b1e8fcf13eab3047505f35847a8678c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b1e8fcf13eab3047505f35847a8678c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b1e8fcf13eab3047505f35847a8678c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b1e8fcf13eab3047505f35847a8678c == cache_frame_2b1e8fcf13eab3047505f35847a8678c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b1e8fcf13eab3047505f35847a8678c);
        cache_frame_2b1e8fcf13eab3047505f35847a8678c = NULL;
    }

    assertFrameObject(frame_2b1e8fcf13eab3047505f35847a8678c);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__24_setRoll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_roll = python_pars[1];
    struct Nuitka_FrameObject *frame_8306ba766c6051bdcf4d286ca581765c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8306ba766c6051bdcf4d286ca581765c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8306ba766c6051bdcf4d286ca581765c)) {
        Py_XDECREF(cache_frame_8306ba766c6051bdcf4d286ca581765c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8306ba766c6051bdcf4d286ca581765c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8306ba766c6051bdcf4d286ca581765c = MAKE_FUNCTION_FRAME(tstate, codeobj_8306ba766c6051bdcf4d286ca581765c, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8306ba766c6051bdcf4d286ca581765c->m_type_description == NULL);
    frame_8306ba766c6051bdcf4d286ca581765c = cache_frame_8306ba766c6051bdcf4d286ca581765c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8306ba766c6051bdcf4d286ca581765c);
    assert(Py_REFCNT(frame_8306ba766c6051bdcf4d286ca581765c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_roll);
        tmp_assattr_value_1 = par_roll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8306ba766c6051bdcf4d286ca581765c->m_frame.f_lineno = 403;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8306ba766c6051bdcf4d286ca581765c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8306ba766c6051bdcf4d286ca581765c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8306ba766c6051bdcf4d286ca581765c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8306ba766c6051bdcf4d286ca581765c,
        type_description_1,
        par_self,
        par_roll
    );


    // Release cached frame if used for exception.
    if (frame_8306ba766c6051bdcf4d286ca581765c == cache_frame_8306ba766c6051bdcf4d286ca581765c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8306ba766c6051bdcf4d286ca581765c);
        cache_frame_8306ba766c6051bdcf4d286ca581765c = NULL;
    }

    assertFrameObject(frame_8306ba766c6051bdcf4d286ca581765c);

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
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__25_getRoll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_282ceef9da1a2b5c0152e682ea75846d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_282ceef9da1a2b5c0152e682ea75846d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_282ceef9da1a2b5c0152e682ea75846d)) {
        Py_XDECREF(cache_frame_282ceef9da1a2b5c0152e682ea75846d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_282ceef9da1a2b5c0152e682ea75846d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_282ceef9da1a2b5c0152e682ea75846d = MAKE_FUNCTION_FRAME(tstate, codeobj_282ceef9da1a2b5c0152e682ea75846d, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_282ceef9da1a2b5c0152e682ea75846d->m_type_description == NULL);
    frame_282ceef9da1a2b5c0152e682ea75846d = cache_frame_282ceef9da1a2b5c0152e682ea75846d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_282ceef9da1a2b5c0152e682ea75846d);
    assert(Py_REFCNT(frame_282ceef9da1a2b5c0152e682ea75846d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
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
        exception_tb = MAKE_TRACEBACK(frame_282ceef9da1a2b5c0152e682ea75846d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_282ceef9da1a2b5c0152e682ea75846d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_282ceef9da1a2b5c0152e682ea75846d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_282ceef9da1a2b5c0152e682ea75846d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_282ceef9da1a2b5c0152e682ea75846d == cache_frame_282ceef9da1a2b5c0152e682ea75846d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_282ceef9da1a2b5c0152e682ea75846d);
        cache_frame_282ceef9da1a2b5c0152e682ea75846d = NULL;
    }

    assertFrameObject(frame_282ceef9da1a2b5c0152e682ea75846d);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__26_setTextScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sx = python_pars[1];
    PyObject *par_sy = python_pars[2];
    struct Nuitka_FrameObject *frame_179beaab178de31795e06fd2869bb1d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_179beaab178de31795e06fd2869bb1d8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_179beaab178de31795e06fd2869bb1d8)) {
        Py_XDECREF(cache_frame_179beaab178de31795e06fd2869bb1d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_179beaab178de31795e06fd2869bb1d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_179beaab178de31795e06fd2869bb1d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_179beaab178de31795e06fd2869bb1d8, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_179beaab178de31795e06fd2869bb1d8->m_type_description == NULL);
    frame_179beaab178de31795e06fd2869bb1d8 = cache_frame_179beaab178de31795e06fd2869bb1d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_179beaab178de31795e06fd2869bb1d8);
    assert(Py_REFCNT(frame_179beaab178de31795e06fd2869bb1d8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sy);
        tmp_cmp_expr_left_1 = par_sy;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sx);
        tmp_args_element_value_1 = par_sx;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_179beaab178de31795e06fd2869bb1d8->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_sx);
        tmp_assattr_value_1 = par_sx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_1 = par_sx;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_1 = par_sx;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_2 = par_sx;
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_sy);
        tmp_tuple_element_2 = par_sy;
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[29], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_179beaab178de31795e06fd2869bb1d8->m_frame.f_lineno = 429;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
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
        exception_tb = MAKE_TRACEBACK(frame_179beaab178de31795e06fd2869bb1d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_179beaab178de31795e06fd2869bb1d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_179beaab178de31795e06fd2869bb1d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_179beaab178de31795e06fd2869bb1d8,
        type_description_1,
        par_self,
        par_sx,
        par_sy
    );


    // Release cached frame if used for exception.
    if (frame_179beaab178de31795e06fd2869bb1d8 == cache_frame_179beaab178de31795e06fd2869bb1d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_179beaab178de31795e06fd2869bb1d8);
        cache_frame_179beaab178de31795e06fd2869bb1d8 = NULL;
    }

    assertFrameObject(frame_179beaab178de31795e06fd2869bb1d8);

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
    CHECK_OBJECT(par_sx);
    Py_DECREF(par_sx);
    CHECK_OBJECT(par_sy);
    Py_DECREF(par_sy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sx);
    Py_DECREF(par_sx);
    CHECK_OBJECT(par_sy);
    Py_DECREF(par_sy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__27_getTextScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d94cb418e8fd435bc783254c37a259c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d94cb418e8fd435bc783254c37a259c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d94cb418e8fd435bc783254c37a259c0)) {
        Py_XDECREF(cache_frame_d94cb418e8fd435bc783254c37a259c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d94cb418e8fd435bc783254c37a259c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d94cb418e8fd435bc783254c37a259c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_d94cb418e8fd435bc783254c37a259c0, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d94cb418e8fd435bc783254c37a259c0->m_type_description == NULL);
    frame_d94cb418e8fd435bc783254c37a259c0 = cache_frame_d94cb418e8fd435bc783254c37a259c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d94cb418e8fd435bc783254c37a259c0);
    assert(Py_REFCNT(frame_d94cb418e8fd435bc783254c37a259c0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
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
        exception_tb = MAKE_TRACEBACK(frame_d94cb418e8fd435bc783254c37a259c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d94cb418e8fd435bc783254c37a259c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d94cb418e8fd435bc783254c37a259c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d94cb418e8fd435bc783254c37a259c0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d94cb418e8fd435bc783254c37a259c0 == cache_frame_d94cb418e8fd435bc783254c37a259c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d94cb418e8fd435bc783254c37a259c0);
        cache_frame_d94cb418e8fd435bc783254c37a259c0 = NULL;
    }

    assertFrameObject(frame_d94cb418e8fd435bc783254c37a259c0);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__28_setScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sx = python_pars[1];
    PyObject *par_sy = python_pars[2];
    struct Nuitka_FrameObject *frame_b597600e1509b048f5d4cdaef102678a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b597600e1509b048f5d4cdaef102678a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b597600e1509b048f5d4cdaef102678a)) {
        Py_XDECREF(cache_frame_b597600e1509b048f5d4cdaef102678a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b597600e1509b048f5d4cdaef102678a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b597600e1509b048f5d4cdaef102678a = MAKE_FUNCTION_FRAME(tstate, codeobj_b597600e1509b048f5d4cdaef102678a, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b597600e1509b048f5d4cdaef102678a->m_type_description == NULL);
    frame_b597600e1509b048f5d4cdaef102678a = cache_frame_b597600e1509b048f5d4cdaef102678a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b597600e1509b048f5d4cdaef102678a);
    assert(Py_REFCNT(frame_b597600e1509b048f5d4cdaef102678a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sy);
        tmp_cmp_expr_left_1 = par_sy;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sx);
        tmp_args_element_value_1 = par_sx;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b597600e1509b048f5d4cdaef102678a->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 449;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_sx);
        tmp_assattr_value_1 = par_sx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_1 = par_sx;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_1 = par_sx;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_sx);
        tmp_tuple_element_2 = par_sx;
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_sy);
        tmp_tuple_element_2 = par_sy;
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[29], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 455;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_b597600e1509b048f5d4cdaef102678a->m_frame.f_lineno = 455;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
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
        exception_tb = MAKE_TRACEBACK(frame_b597600e1509b048f5d4cdaef102678a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b597600e1509b048f5d4cdaef102678a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b597600e1509b048f5d4cdaef102678a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b597600e1509b048f5d4cdaef102678a,
        type_description_1,
        par_self,
        par_sx,
        par_sy
    );


    // Release cached frame if used for exception.
    if (frame_b597600e1509b048f5d4cdaef102678a == cache_frame_b597600e1509b048f5d4cdaef102678a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b597600e1509b048f5d4cdaef102678a);
        cache_frame_b597600e1509b048f5d4cdaef102678a = NULL;
    }

    assertFrameObject(frame_b597600e1509b048f5d4cdaef102678a);

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
    CHECK_OBJECT(par_sx);
    Py_DECREF(par_sx);
    CHECK_OBJECT(par_sy);
    Py_DECREF(par_sy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sx);
    Py_DECREF(par_sx);
    CHECK_OBJECT(par_sy);
    Py_DECREF(par_sy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__29_getScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_94e39b8e7119d553f00d375d89d85759;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94e39b8e7119d553f00d375d89d85759 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94e39b8e7119d553f00d375d89d85759)) {
        Py_XDECREF(cache_frame_94e39b8e7119d553f00d375d89d85759);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94e39b8e7119d553f00d375d89d85759 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94e39b8e7119d553f00d375d89d85759 = MAKE_FUNCTION_FRAME(tstate, codeobj_94e39b8e7119d553f00d375d89d85759, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94e39b8e7119d553f00d375d89d85759->m_type_description == NULL);
    frame_94e39b8e7119d553f00d375d89d85759 = cache_frame_94e39b8e7119d553f00d375d89d85759;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94e39b8e7119d553f00d375d89d85759);
    assert(Py_REFCNT(frame_94e39b8e7119d553f00d375d89d85759) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
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
        exception_tb = MAKE_TRACEBACK(frame_94e39b8e7119d553f00d375d89d85759, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94e39b8e7119d553f00d375d89d85759->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94e39b8e7119d553f00d375d89d85759, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94e39b8e7119d553f00d375d89d85759,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_94e39b8e7119d553f00d375d89d85759 == cache_frame_94e39b8e7119d553f00d375d89d85759) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94e39b8e7119d553f00d375d89d85759);
        cache_frame_94e39b8e7119d553f00d375d89d85759 = NULL;
    }

    assertFrameObject(frame_94e39b8e7119d553f00d375d89d85759);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__30_updateTransformMat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_mat = NULL;
    struct Nuitka_FrameObject *frame_455af7f5e005b3ab7e73b23cc2c48d00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_455af7f5e005b3ab7e73b23cc2c48d00 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_455af7f5e005b3ab7e73b23cc2c48d00)) {
        Py_XDECREF(cache_frame_455af7f5e005b3ab7e73b23cc2c48d00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_455af7f5e005b3ab7e73b23cc2c48d00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_455af7f5e005b3ab7e73b23cc2c48d00 = MAKE_FUNCTION_FRAME(tstate, codeobj_455af7f5e005b3ab7e73b23cc2c48d00, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_455af7f5e005b3ab7e73b23cc2c48d00->m_type_description == NULL);
    frame_455af7f5e005b3ab7e73b23cc2c48d00 = cache_frame_455af7f5e005b3ab7e73b23cc2c48d00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_455af7f5e005b3ab7e73b23cc2c48d00);
    assert(Py_REFCNT(frame_455af7f5e005b3ab7e73b23cc2c48d00) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 467;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[99]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[101]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[29]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[29]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[39];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 469;
        tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[102]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[31]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 470;
        tmp_args_element_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[103]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[104]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[101]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[30]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[2];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[30]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[39];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 471;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_mat == NULL);
        var_mat = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mat);
        tmp_args_element_value_13 = var_mat;
        frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame.f_lineno = 473;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[106], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_455af7f5e005b3ab7e73b23cc2c48d00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_455af7f5e005b3ab7e73b23cc2c48d00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_455af7f5e005b3ab7e73b23cc2c48d00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_455af7f5e005b3ab7e73b23cc2c48d00,
        type_description_1,
        par_self,
        var_mat
    );


    // Release cached frame if used for exception.
    if (frame_455af7f5e005b3ab7e73b23cc2c48d00 == cache_frame_455af7f5e005b3ab7e73b23cc2c48d00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_455af7f5e005b3ab7e73b23cc2c48d00);
        cache_frame_455af7f5e005b3ab7e73b23cc2c48d00 = NULL;
    }

    assertFrameObject(frame_455af7f5e005b3ab7e73b23cc2c48d00);

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
    CHECK_OBJECT(var_mat);
    Py_DECREF(var_mat);
    var_mat = NULL;
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

    Py_XDECREF(var_mat);
    var_mat = NULL;
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


static PyObject *impl_direct$gui$OnscreenText$$$function__31_setWordwrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_wordwrap = python_pars[1];
    struct Nuitka_FrameObject *frame_c9ba8102fecafe05ae9954974b311a25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c9ba8102fecafe05ae9954974b311a25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9ba8102fecafe05ae9954974b311a25)) {
        Py_XDECREF(cache_frame_c9ba8102fecafe05ae9954974b311a25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9ba8102fecafe05ae9954974b311a25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9ba8102fecafe05ae9954974b311a25 = MAKE_FUNCTION_FRAME(tstate, codeobj_c9ba8102fecafe05ae9954974b311a25, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9ba8102fecafe05ae9954974b311a25->m_type_description == NULL);
    frame_c9ba8102fecafe05ae9954974b311a25 = cache_frame_c9ba8102fecafe05ae9954974b311a25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9ba8102fecafe05ae9954974b311a25);
    assert(Py_REFCNT(frame_c9ba8102fecafe05ae9954974b311a25) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_wordwrap);
        tmp_assattr_value_1 = par_wordwrap;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_wordwrap);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_wordwrap);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_wordwrap);
        tmp_args_element_value_1 = par_wordwrap;
        frame_c9ba8102fecafe05ae9954974b311a25->m_frame.f_lineno = 479;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c9ba8102fecafe05ae9954974b311a25->m_frame.f_lineno = 481;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[107]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
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
        exception_tb = MAKE_TRACEBACK(frame_c9ba8102fecafe05ae9954974b311a25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9ba8102fecafe05ae9954974b311a25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9ba8102fecafe05ae9954974b311a25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9ba8102fecafe05ae9954974b311a25,
        type_description_1,
        par_self,
        par_wordwrap
    );


    // Release cached frame if used for exception.
    if (frame_c9ba8102fecafe05ae9954974b311a25 == cache_frame_c9ba8102fecafe05ae9954974b311a25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9ba8102fecafe05ae9954974b311a25);
        cache_frame_c9ba8102fecafe05ae9954974b311a25 = NULL;
    }

    assertFrameObject(frame_c9ba8102fecafe05ae9954974b311a25);

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
    CHECK_OBJECT(par_wordwrap);
    Py_DECREF(par_wordwrap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_wordwrap);
    Py_DECREF(par_wordwrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__32_getWordwrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_23e2f93c1fbadde7f67bb40f5ba5a3bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf)) {
        Py_XDECREF(cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf = MAKE_FUNCTION_FRAME(tstate, codeobj_23e2f93c1fbadde7f67bb40f5ba5a3bf, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf->m_type_description == NULL);
    frame_23e2f93c1fbadde7f67bb40f5ba5a3bf = cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_23e2f93c1fbadde7f67bb40f5ba5a3bf);
    assert(Py_REFCNT(frame_23e2f93c1fbadde7f67bb40f5ba5a3bf) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
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
        exception_tb = MAKE_TRACEBACK(frame_23e2f93c1fbadde7f67bb40f5ba5a3bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23e2f93c1fbadde7f67bb40f5ba5a3bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23e2f93c1fbadde7f67bb40f5ba5a3bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23e2f93c1fbadde7f67bb40f5ba5a3bf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_23e2f93c1fbadde7f67bb40f5ba5a3bf == cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf);
        cache_frame_23e2f93c1fbadde7f67bb40f5ba5a3bf = NULL;
    }

    assertFrameObject(frame_23e2f93c1fbadde7f67bb40f5ba5a3bf);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__33___getFg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_faf8e6776d9ca575572578361d3fea6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_faf8e6776d9ca575572578361d3fea6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faf8e6776d9ca575572578361d3fea6b)) {
        Py_XDECREF(cache_frame_faf8e6776d9ca575572578361d3fea6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faf8e6776d9ca575572578361d3fea6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faf8e6776d9ca575572578361d3fea6b = MAKE_FUNCTION_FRAME(tstate, codeobj_faf8e6776d9ca575572578361d3fea6b, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faf8e6776d9ca575572578361d3fea6b->m_type_description == NULL);
    frame_faf8e6776d9ca575572578361d3fea6b = cache_frame_faf8e6776d9ca575572578361d3fea6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_faf8e6776d9ca575572578361d3fea6b);
    assert(Py_REFCNT(frame_faf8e6776d9ca575572578361d3fea6b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_faf8e6776d9ca575572578361d3fea6b->m_frame.f_lineno = 489;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[108]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
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
        exception_tb = MAKE_TRACEBACK(frame_faf8e6776d9ca575572578361d3fea6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faf8e6776d9ca575572578361d3fea6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faf8e6776d9ca575572578361d3fea6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faf8e6776d9ca575572578361d3fea6b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_faf8e6776d9ca575572578361d3fea6b == cache_frame_faf8e6776d9ca575572578361d3fea6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faf8e6776d9ca575572578361d3fea6b);
        cache_frame_faf8e6776d9ca575572578361d3fea6b = NULL;
    }

    assertFrameObject(frame_faf8e6776d9ca575572578361d3fea6b);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__34_setFg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fg = python_pars[1];
    struct Nuitka_FrameObject *frame_4c0faefea6f6d6f49b675c6a5489e8c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0)) {
        Py_XDECREF(cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_4c0faefea6f6d6f49b675c6a5489e8c0, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0->m_type_description == NULL);
    frame_4c0faefea6f6d6f49b675c6a5489e8c0 = cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4c0faefea6f6d6f49b675c6a5489e8c0);
    assert(Py_REFCNT(frame_4c0faefea6f6d6f49b675c6a5489e8c0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_3 = par_fg;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_4 = par_fg;
        tmp_subscript_value_2 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_5 = par_fg;
        tmp_subscript_value_3 = mod_consts[40];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fg);
        tmp_expression_value_6 = par_fg;
        tmp_subscript_value_4 = mod_consts[41];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4c0faefea6f6d6f49b675c6a5489e8c0->m_frame.f_lineno = 492;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c0faefea6f6d6f49b675c6a5489e8c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c0faefea6f6d6f49b675c6a5489e8c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c0faefea6f6d6f49b675c6a5489e8c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c0faefea6f6d6f49b675c6a5489e8c0,
        type_description_1,
        par_self,
        par_fg
    );


    // Release cached frame if used for exception.
    if (frame_4c0faefea6f6d6f49b675c6a5489e8c0 == cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0);
        cache_frame_4c0faefea6f6d6f49b675c6a5489e8c0 = NULL;
    }

    assertFrameObject(frame_4c0faefea6f6d6f49b675c6a5489e8c0);

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
    CHECK_OBJECT(par_fg);
    Py_DECREF(par_fg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fg);
    Py_DECREF(par_fg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__35___getBg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3cdc5bcb0b31e470ef6cb19c28418c98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98)) {
        Py_XDECREF(cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98 = MAKE_FUNCTION_FRAME(tstate, codeobj_3cdc5bcb0b31e470ef6cb19c28418c98, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98->m_type_description == NULL);
    frame_3cdc5bcb0b31e470ef6cb19c28418c98 = cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3cdc5bcb0b31e470ef6cb19c28418c98);
    assert(Py_REFCNT(frame_3cdc5bcb0b31e470ef6cb19c28418c98) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3cdc5bcb0b31e470ef6cb19c28418c98->m_frame.f_lineno = 497;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[109]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 497;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3cdc5bcb0b31e470ef6cb19c28418c98->m_frame.f_lineno = 498;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[110]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3cdc5bcb0b31e470ef6cb19c28418c98->m_frame.f_lineno = 500;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[112]);

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cdc5bcb0b31e470ef6cb19c28418c98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cdc5bcb0b31e470ef6cb19c28418c98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cdc5bcb0b31e470ef6cb19c28418c98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cdc5bcb0b31e470ef6cb19c28418c98,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3cdc5bcb0b31e470ef6cb19c28418c98 == cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98);
        cache_frame_3cdc5bcb0b31e470ef6cb19c28418c98 = NULL;
    }

    assertFrameObject(frame_3cdc5bcb0b31e470ef6cb19c28418c98);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__36_setBg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bg = python_pars[1];
    struct Nuitka_FrameObject *frame_eec3da954be745dcb50596d9de595c5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_eec3da954be745dcb50596d9de595c5d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eec3da954be745dcb50596d9de595c5d)) {
        Py_XDECREF(cache_frame_eec3da954be745dcb50596d9de595c5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eec3da954be745dcb50596d9de595c5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eec3da954be745dcb50596d9de595c5d = MAKE_FUNCTION_FRAME(tstate, codeobj_eec3da954be745dcb50596d9de595c5d, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eec3da954be745dcb50596d9de595c5d->m_type_description == NULL);
    frame_eec3da954be745dcb50596d9de595c5d = cache_frame_eec3da954be745dcb50596d9de595c5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eec3da954be745dcb50596d9de595c5d);
    assert(Py_REFCNT(frame_eec3da954be745dcb50596d9de595c5d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_bg);
        tmp_expression_value_1 = par_bg;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
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
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[44]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_4 = par_bg;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_5 = par_bg;
        tmp_subscript_value_3 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_6 = par_bg;
        tmp_subscript_value_4 = mod_consts[40];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bg);
        tmp_expression_value_7 = par_bg;
        tmp_subscript_value_5 = mod_consts[41];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_eec3da954be745dcb50596d9de595c5d->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_eec3da954be745dcb50596d9de595c5d->m_frame.f_lineno = 506;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS4(
            tstate,
            tmp_called_instance_1,
            mod_consts[45],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_eec3da954be745dcb50596d9de595c5d->m_frame.f_lineno = 509;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[113]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eec3da954be745dcb50596d9de595c5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eec3da954be745dcb50596d9de595c5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eec3da954be745dcb50596d9de595c5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eec3da954be745dcb50596d9de595c5d,
        type_description_1,
        par_self,
        par_bg
    );


    // Release cached frame if used for exception.
    if (frame_eec3da954be745dcb50596d9de595c5d == cache_frame_eec3da954be745dcb50596d9de595c5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eec3da954be745dcb50596d9de595c5d);
        cache_frame_eec3da954be745dcb50596d9de595c5d = NULL;
    }

    assertFrameObject(frame_eec3da954be745dcb50596d9de595c5d);

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
    CHECK_OBJECT(par_bg);
    Py_DECREF(par_bg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bg);
    Py_DECREF(par_bg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__37___getShadow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_814a5ad51073cf39872dc5393e8156fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_814a5ad51073cf39872dc5393e8156fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_814a5ad51073cf39872dc5393e8156fb)) {
        Py_XDECREF(cache_frame_814a5ad51073cf39872dc5393e8156fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_814a5ad51073cf39872dc5393e8156fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_814a5ad51073cf39872dc5393e8156fb = MAKE_FUNCTION_FRAME(tstate, codeobj_814a5ad51073cf39872dc5393e8156fb, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_814a5ad51073cf39872dc5393e8156fb->m_type_description == NULL);
    frame_814a5ad51073cf39872dc5393e8156fb = cache_frame_814a5ad51073cf39872dc5393e8156fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_814a5ad51073cf39872dc5393e8156fb);
    assert(Py_REFCNT(frame_814a5ad51073cf39872dc5393e8156fb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_814a5ad51073cf39872dc5393e8156fb->m_frame.f_lineno = 514;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[114]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
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
        exception_tb = MAKE_TRACEBACK(frame_814a5ad51073cf39872dc5393e8156fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_814a5ad51073cf39872dc5393e8156fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_814a5ad51073cf39872dc5393e8156fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_814a5ad51073cf39872dc5393e8156fb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_814a5ad51073cf39872dc5393e8156fb == cache_frame_814a5ad51073cf39872dc5393e8156fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_814a5ad51073cf39872dc5393e8156fb);
        cache_frame_814a5ad51073cf39872dc5393e8156fb = NULL;
    }

    assertFrameObject(frame_814a5ad51073cf39872dc5393e8156fb);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__38_setShadow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_shadow = python_pars[1];
    struct Nuitka_FrameObject *frame_9f87aff5955d120199ad4ba08bd607bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9f87aff5955d120199ad4ba08bd607bc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f87aff5955d120199ad4ba08bd607bc)) {
        Py_XDECREF(cache_frame_9f87aff5955d120199ad4ba08bd607bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f87aff5955d120199ad4ba08bd607bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f87aff5955d120199ad4ba08bd607bc = MAKE_FUNCTION_FRAME(tstate, codeobj_9f87aff5955d120199ad4ba08bd607bc, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f87aff5955d120199ad4ba08bd607bc->m_type_description == NULL);
    frame_9f87aff5955d120199ad4ba08bd607bc = cache_frame_9f87aff5955d120199ad4ba08bd607bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9f87aff5955d120199ad4ba08bd607bc);
    assert(Py_REFCNT(frame_9f87aff5955d120199ad4ba08bd607bc) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_1 = par_shadow;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
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
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[47]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_4 = par_shadow;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_5 = par_shadow;
        tmp_subscript_value_3 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_6 = par_shadow;
        tmp_subscript_value_4 = mod_consts[40];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shadow);
        tmp_expression_value_7 = par_shadow;
        tmp_subscript_value_5 = mod_consts[41];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f87aff5955d120199ad4ba08bd607bc->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f87aff5955d120199ad4ba08bd607bc->m_frame.f_lineno = 520;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_1,
            mod_consts[48],
            &PyTuple_GET_ITEM(mod_consts[115], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f87aff5955d120199ad4ba08bd607bc->m_frame.f_lineno = 523;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[116]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f87aff5955d120199ad4ba08bd607bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f87aff5955d120199ad4ba08bd607bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f87aff5955d120199ad4ba08bd607bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f87aff5955d120199ad4ba08bd607bc,
        type_description_1,
        par_self,
        par_shadow
    );


    // Release cached frame if used for exception.
    if (frame_9f87aff5955d120199ad4ba08bd607bc == cache_frame_9f87aff5955d120199ad4ba08bd607bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f87aff5955d120199ad4ba08bd607bc);
        cache_frame_9f87aff5955d120199ad4ba08bd607bc = NULL;
    }

    assertFrameObject(frame_9f87aff5955d120199ad4ba08bd607bc);

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
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__39___getFrame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fa66fe8ffe56d0564df1d9a862a148c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa66fe8ffe56d0564df1d9a862a148c7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa66fe8ffe56d0564df1d9a862a148c7)) {
        Py_XDECREF(cache_frame_fa66fe8ffe56d0564df1d9a862a148c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa66fe8ffe56d0564df1d9a862a148c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa66fe8ffe56d0564df1d9a862a148c7 = MAKE_FUNCTION_FRAME(tstate, codeobj_fa66fe8ffe56d0564df1d9a862a148c7, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa66fe8ffe56d0564df1d9a862a148c7->m_type_description == NULL);
    frame_fa66fe8ffe56d0564df1d9a862a148c7 = cache_frame_fa66fe8ffe56d0564df1d9a862a148c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fa66fe8ffe56d0564df1d9a862a148c7);
    assert(Py_REFCNT(frame_fa66fe8ffe56d0564df1d9a862a148c7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fa66fe8ffe56d0564df1d9a862a148c7->m_frame.f_lineno = 528;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[117]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
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
        exception_tb = MAKE_TRACEBACK(frame_fa66fe8ffe56d0564df1d9a862a148c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa66fe8ffe56d0564df1d9a862a148c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa66fe8ffe56d0564df1d9a862a148c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa66fe8ffe56d0564df1d9a862a148c7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fa66fe8ffe56d0564df1d9a862a148c7 == cache_frame_fa66fe8ffe56d0564df1d9a862a148c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa66fe8ffe56d0564df1d9a862a148c7);
        cache_frame_fa66fe8ffe56d0564df1d9a862a148c7 = NULL;
    }

    assertFrameObject(frame_fa66fe8ffe56d0564df1d9a862a148c7);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__40_setFrame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    struct Nuitka_FrameObject *frame_ea6446590595ab931ccc7ac9fd35b59d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ea6446590595ab931ccc7ac9fd35b59d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea6446590595ab931ccc7ac9fd35b59d)) {
        Py_XDECREF(cache_frame_ea6446590595ab931ccc7ac9fd35b59d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea6446590595ab931ccc7ac9fd35b59d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea6446590595ab931ccc7ac9fd35b59d = MAKE_FUNCTION_FRAME(tstate, codeobj_ea6446590595ab931ccc7ac9fd35b59d, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea6446590595ab931ccc7ac9fd35b59d->m_type_description == NULL);
    frame_ea6446590595ab931ccc7ac9fd35b59d = cache_frame_ea6446590595ab931ccc7ac9fd35b59d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ea6446590595ab931ccc7ac9fd35b59d);
    assert(Py_REFCNT(frame_ea6446590595ab931ccc7ac9fd35b59d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_1 = par_frame;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
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
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[49]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_4 = par_frame;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_5 = par_frame;
        tmp_subscript_value_3 = mod_consts[39];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_6 = par_frame;
        tmp_subscript_value_4 = mod_consts[40];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_7 = par_frame;
        tmp_subscript_value_5 = mod_consts[41];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ea6446590595ab931ccc7ac9fd35b59d->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ea6446590595ab931ccc7ac9fd35b59d->m_frame.f_lineno = 534;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS4(
            tstate,
            tmp_called_instance_1,
            mod_consts[50],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ea6446590595ab931ccc7ac9fd35b59d->m_frame.f_lineno = 537;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[118]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea6446590595ab931ccc7ac9fd35b59d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea6446590595ab931ccc7ac9fd35b59d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea6446590595ab931ccc7ac9fd35b59d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea6446590595ab931ccc7ac9fd35b59d,
        type_description_1,
        par_self,
        par_frame
    );


    // Release cached frame if used for exception.
    if (frame_ea6446590595ab931ccc7ac9fd35b59d == cache_frame_ea6446590595ab931ccc7ac9fd35b59d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea6446590595ab931ccc7ac9fd35b59d);
        cache_frame_ea6446590595ab931ccc7ac9fd35b59d = NULL;
    }

    assertFrameObject(frame_ea6446590595ab931ccc7ac9fd35b59d);

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
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__41_configure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_option = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_value = NULL;
    PyObject *var_setter = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_db98374898c4d80c7b82317041970e5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_db98374898c4d80c7b82317041970e5e = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_db98374898c4d80c7b82317041970e5e)) {
        Py_XDECREF(cache_frame_db98374898c4d80c7b82317041970e5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db98374898c4d80c7b82317041970e5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db98374898c4d80c7b82317041970e5e = MAKE_FUNCTION_FRAME(tstate, codeobj_db98374898c4d80c7b82317041970e5e, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db98374898c4d80c7b82317041970e5e->m_type_description == NULL);
    frame_db98374898c4d80c7b82317041970e5e = cache_frame_db98374898c4d80c7b82317041970e5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_db98374898c4d80c7b82317041970e5e);
    assert(Py_REFCNT(frame_db98374898c4d80c7b82317041970e5e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[66]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 544;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[120]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_1 = par_kw;
        tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 546;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
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
            exception_lineno = 546;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 546;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 546;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[121];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 546;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_option;
            par_option = tmp_assign_source_6;
            Py_INCREF(par_option);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_1 = par_self;
        tmp_add_expr_left_2 = mod_consts[123];
        CHECK_OBJECT(par_option);
        tmp_expression_value_3 = par_option;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[124]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 549;
        tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_option);
        tmp_expression_value_4 = par_option;
        tmp_subscript_value_2 = mod_consts[125];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_setter;
            var_setter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_setter);
        tmp_cmp_expr_left_1 = var_setter;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 550;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[126]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_setter);
        tmp_called_value_4 = var_setter;
        CHECK_OBJECT(var_value);
        tmp_expression_value_6 = var_value;
        tmp_subscript_value_3 = mod_consts[2];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_value);
        tmp_expression_value_7 = var_value;
        tmp_subscript_value_4 = mod_consts[39];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_4, 1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 551;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_setter);
        tmp_called_value_5 = var_setter;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_5 = var_value;
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 553;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_2:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_db98374898c4d80c7b82317041970e5e, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_db98374898c4d80c7b82317041970e5e, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_mod_expr_left_1 = mod_consts[128];
        CHECK_OBJECT(par_option);
        tmp_mod_expr_right_1 = par_option;
        tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = 555;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_db98374898c4d80c7b82317041970e5e->m_frame) frame_db98374898c4d80c7b82317041970e5e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    branch_end_3:;
    goto try_end_4;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 546;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db98374898c4d80c7b82317041970e5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db98374898c4d80c7b82317041970e5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db98374898c4d80c7b82317041970e5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db98374898c4d80c7b82317041970e5e,
        type_description_1,
        par_self,
        par_option,
        par_kw,
        var_value,
        var_setter
    );


    // Release cached frame if used for exception.
    if (frame_db98374898c4d80c7b82317041970e5e == cache_frame_db98374898c4d80c7b82317041970e5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db98374898c4d80c7b82317041970e5e);
        cache_frame_db98374898c4d80c7b82317041970e5e = NULL;
    }

    assertFrameObject(frame_db98374898c4d80c7b82317041970e5e);

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
    Py_XDECREF(par_option);
    par_option = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_setter);
    var_setter = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_option);
    par_option = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_setter);
    var_setter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__42___setitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_1bf89733da73f3c96afa376fb4e685cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1bf89733da73f3c96afa376fb4e685cc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bf89733da73f3c96afa376fb4e685cc)) {
        Py_XDECREF(cache_frame_1bf89733da73f3c96afa376fb4e685cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bf89733da73f3c96afa376fb4e685cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bf89733da73f3c96afa376fb4e685cc = MAKE_FUNCTION_FRAME(tstate, codeobj_1bf89733da73f3c96afa376fb4e685cc, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bf89733da73f3c96afa376fb4e685cc->m_type_description == NULL);
    frame_1bf89733da73f3c96afa376fb4e685cc = cache_frame_1bf89733da73f3c96afa376fb4e685cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1bf89733da73f3c96afa376fb4e685cc);
    assert(Py_REFCNT(frame_1bf89733da73f3c96afa376fb4e685cc) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[129]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = mod_consts[130];
        CHECK_OBJECT(par_key);
        tmp_dict_key_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_dict_value_1 = par_value;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooo";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bf89733da73f3c96afa376fb4e685cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bf89733da73f3c96afa376fb4e685cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bf89733da73f3c96afa376fb4e685cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bf89733da73f3c96afa376fb4e685cc,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1bf89733da73f3c96afa376fb4e685cc == cache_frame_1bf89733da73f3c96afa376fb4e685cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bf89733da73f3c96afa376fb4e685cc);
        cache_frame_1bf89733da73f3c96afa376fb4e685cc = NULL;
    }

    assertFrameObject(frame_1bf89733da73f3c96afa376fb4e685cc);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__43_cget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_option = python_pars[1];
    PyObject *var_getter = NULL;
    struct Nuitka_FrameObject *frame_c28098dc11adeb4962967430a15b4599;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c28098dc11adeb4962967430a15b4599 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c28098dc11adeb4962967430a15b4599)) {
        Py_XDECREF(cache_frame_c28098dc11adeb4962967430a15b4599);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c28098dc11adeb4962967430a15b4599 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c28098dc11adeb4962967430a15b4599 = MAKE_FUNCTION_FRAME(tstate, codeobj_c28098dc11adeb4962967430a15b4599, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c28098dc11adeb4962967430a15b4599->m_type_description == NULL);
    frame_c28098dc11adeb4962967430a15b4599 = cache_frame_c28098dc11adeb4962967430a15b4599;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c28098dc11adeb4962967430a15b4599);
    assert(Py_REFCNT(frame_c28098dc11adeb4962967430a15b4599) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_add_expr_left_2 = mod_consts[131];
        CHECK_OBJECT(par_option);
        tmp_expression_value_2 = par_option;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[124]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c28098dc11adeb4962967430a15b4599->m_frame.f_lineno = 564;
        tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_option);
        tmp_expression_value_3 = par_option;
        tmp_subscript_value_2 = mod_consts[125];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c28098dc11adeb4962967430a15b4599->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_getter == NULL);
        var_getter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        CHECK_OBJECT(var_getter);
        tmp_called_value_3 = var_getter;
        frame_c28098dc11adeb4962967430a15b4599->m_frame.f_lineno = 565;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c28098dc11adeb4962967430a15b4599, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c28098dc11adeb4962967430a15b4599->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c28098dc11adeb4962967430a15b4599, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c28098dc11adeb4962967430a15b4599,
        type_description_1,
        par_self,
        par_option,
        var_getter
    );


    // Release cached frame if used for exception.
    if (frame_c28098dc11adeb4962967430a15b4599 == cache_frame_c28098dc11adeb4962967430a15b4599) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c28098dc11adeb4962967430a15b4599);
        cache_frame_c28098dc11adeb4962967430a15b4599 = NULL;
    }

    assertFrameObject(frame_c28098dc11adeb4962967430a15b4599);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_getter);
    Py_DECREF(var_getter);
    var_getter = NULL;
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

    Py_XDECREF(var_getter);
    var_getter = NULL;
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
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$gui$OnscreenText$$$function__44___getAlign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_481fa2f0bdd5320a1d05c0d91dc0a6e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6)) {
        Py_XDECREF(cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_481fa2f0bdd5320a1d05c0d91dc0a6e6, module_direct$gui$OnscreenText, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6->m_type_description == NULL);
    frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 = cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_481fa2f0bdd5320a1d05c0d91dc0a6e6);
    assert(Py_REFCNT(frame_481fa2f0bdd5320a1d05c0d91dc0a6e6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_481fa2f0bdd5320a1d05c0d91dc0a6e6->m_frame.f_lineno = 568;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[132]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
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
        exception_tb = MAKE_TRACEBACK(frame_481fa2f0bdd5320a1d05c0d91dc0a6e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_481fa2f0bdd5320a1d05c0d91dc0a6e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_481fa2f0bdd5320a1d05c0d91dc0a6e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_481fa2f0bdd5320a1d05c0d91dc0a6e6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 == cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6);
        cache_frame_481fa2f0bdd5320a1d05c0d91dc0a6e6 = NULL;
    }

    assertFrameObject(frame_481fa2f0bdd5320a1d05c0d91dc0a6e6);

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


static PyObject *impl_direct$gui$OnscreenText$$$function__45_setAlign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_align = python_pars[1];
    struct Nuitka_FrameObject *frame_051e12ceeb1ce9a8ae92084e53ef6340;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_051e12ceeb1ce9a8ae92084e53ef6340 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_051e12ceeb1ce9a8ae92084e53ef6340)) {
        Py_XDECREF(cache_frame_051e12ceeb1ce9a8ae92084e53ef6340);

#if _DEBUG_REFCOUNTS
        if (cache_frame_051e12ceeb1ce9a8ae92084e53ef6340 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_051e12ceeb1ce9a8ae92084e53ef6340 = MAKE_FUNCTION_FRAME(tstate, codeobj_051e12ceeb1ce9a8ae92084e53ef6340, module_direct$gui$OnscreenText, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_051e12ceeb1ce9a8ae92084e53ef6340->m_type_description == NULL);
    frame_051e12ceeb1ce9a8ae92084e53ef6340 = cache_frame_051e12ceeb1ce9a8ae92084e53ef6340;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_051e12ceeb1ce9a8ae92084e53ef6340);
    assert(Py_REFCNT(frame_051e12ceeb1ce9a8ae92084e53ef6340) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_align);
        tmp_args_element_value_1 = par_align;
        frame_051e12ceeb1ce9a8ae92084e53ef6340->m_frame.f_lineno = 571;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[42], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_051e12ceeb1ce9a8ae92084e53ef6340, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_051e12ceeb1ce9a8ae92084e53ef6340->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_051e12ceeb1ce9a8ae92084e53ef6340, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_051e12ceeb1ce9a8ae92084e53ef6340,
        type_description_1,
        par_self,
        par_align
    );


    // Release cached frame if used for exception.
    if (frame_051e12ceeb1ce9a8ae92084e53ef6340 == cache_frame_051e12ceeb1ce9a8ae92084e53ef6340) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_051e12ceeb1ce9a8ae92084e53ef6340);
        cache_frame_051e12ceeb1ce9a8ae92084e53ef6340 = NULL;
    }

    assertFrameObject(frame_051e12ceeb1ce9a8ae92084e53ef6340);

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
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__10_clearText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__10_clearText,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_299c4425aa6175d130849b2c2b2ce38f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__11_setText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__11_setText,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_2b05905877337b056cad6b82e25e84a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__12_appendText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__12_appendText,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_bdef03e839b225faa20768c8c56296f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__13_getText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__13_getText,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_a77c4fcfea5f5e037f3f245f0b15070d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__14_setTextX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__14_setTextX,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_763c53e6af1aa26828a7034316a69a4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__15_setX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__15_setX,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_c54b16fb0803c4e1bb503dda50871189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__16_setTextY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__16_setTextY,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_36e4ae67d49c17a0409af3284053ad5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__17_setY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__17_setY,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_96d271b339b463eafd3ff58202d1116e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__18_setTextPos(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__18_setTextPos,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_720b0a15919c69c18472b59084c0089c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__19_getTextPos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__19_getTextPos,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_13b9aa222d6fffaa6f5f03b6452a055b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__1___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_8b6c869da4ec5b9a4790e7c223afa16b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__20_setPos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__20_setPos,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_07b7d08b4271c5c93f78caf490387b1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__21_getPos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__21_getPos,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_d68669cbc4b8cc0b20d4bcda0bed8cbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__22_setTextR() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__22_setTextR,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_6e2ca08eeb802bb9d30fcfc70feb0310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__23_getTextR() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__23_getTextR,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_2b1e8fcf13eab3047505f35847a8678c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__24_setRoll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__24_setRoll,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_8306ba766c6051bdcf4d286ca581765c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__25_getRoll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__25_getRoll,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_282ceef9da1a2b5c0152e682ea75846d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__26_setTextScale(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__26_setTextScale,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_179beaab178de31795e06fd2869bb1d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__27_getTextScale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__27_getTextScale,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_d94cb418e8fd435bc783254c37a259c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__28_setScale(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__28_setScale,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_b597600e1509b048f5d4cdaef102678a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__29_getScale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__29_getScale,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_94e39b8e7119d553f00d375d89d85759,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__2_cleanup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__2_cleanup,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_ab8d23f2feabc42d5384ac96dbf9d41d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__30_updateTransformMat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__30_updateTransformMat,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_455af7f5e005b3ab7e73b23cc2c48d00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__31_setWordwrap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__31_setWordwrap,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_c9ba8102fecafe05ae9954974b311a25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__32_getWordwrap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__32_getWordwrap,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_23e2f93c1fbadde7f67bb40f5ba5a3bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__33___getFg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__33___getFg,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_faf8e6776d9ca575572578361d3fea6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__34_setFg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__34_setFg,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_4c0faefea6f6d6f49b675c6a5489e8c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__35___getBg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__35___getBg,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_3cdc5bcb0b31e470ef6cb19c28418c98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__36_setBg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__36_setBg,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_eec3da954be745dcb50596d9de595c5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__37___getShadow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__37___getShadow,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_814a5ad51073cf39872dc5393e8156fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__38_setShadow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__38_setShadow,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_9f87aff5955d120199ad4ba08bd607bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__39___getFrame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__39___getFrame,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_fa66fe8ffe56d0564df1d9a862a148c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__3_destroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__3_destroy,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_53a0c33728c240ba06b5d7e2096dec99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__40_setFrame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__40_setFrame,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_ea6446590595ab931ccc7ac9fd35b59d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__41_configure(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__41_configure,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_db98374898c4d80c7b82317041970e5e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__42___setitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__42___setitem__,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_1bf89733da73f3c96afa376fb4e685cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__43_cget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__43_cget,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_c28098dc11adeb4962967430a15b4599,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__44___getAlign() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__44___getAlign,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_481fa2f0bdd5320a1d05c0d91dc0a6e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__45_setAlign() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__45_setAlign,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_051e12ceeb1ce9a8ae92084e53ef6340,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__4_freeze() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_86c1e3a4b0e7c7f3935e4bd5040f624e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__5_thaw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_2ca86fef045ca5e6843cc7adfa834269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__6_setDecal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__6_setDecal,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_540be06ccd3c24b5ad94c2785d14920b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__7_getDecal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__7_getDecal,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_32d2e87af6e0680fc91c99b7a6a2a24d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__8_setFont() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__8_setFont,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_6ea74884be7f845bd6f7281f77b23eae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$gui$OnscreenText$$$function__9_getFont() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$gui$OnscreenText$$$function__9_getFont,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_d0235a71ab4759a19d94bdb414f1df76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$gui$OnscreenText,
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

function_impl_code functable_direct$gui$OnscreenText[] = {
    impl_direct$gui$OnscreenText$$$function__1___init__,
    impl_direct$gui$OnscreenText$$$function__2_cleanup,
    impl_direct$gui$OnscreenText$$$function__3_destroy,
    NULL,
    NULL,
    impl_direct$gui$OnscreenText$$$function__6_setDecal,
    impl_direct$gui$OnscreenText$$$function__7_getDecal,
    impl_direct$gui$OnscreenText$$$function__8_setFont,
    impl_direct$gui$OnscreenText$$$function__9_getFont,
    impl_direct$gui$OnscreenText$$$function__10_clearText,
    impl_direct$gui$OnscreenText$$$function__11_setText,
    impl_direct$gui$OnscreenText$$$function__12_appendText,
    impl_direct$gui$OnscreenText$$$function__13_getText,
    impl_direct$gui$OnscreenText$$$function__14_setTextX,
    impl_direct$gui$OnscreenText$$$function__15_setX,
    impl_direct$gui$OnscreenText$$$function__16_setTextY,
    impl_direct$gui$OnscreenText$$$function__17_setY,
    impl_direct$gui$OnscreenText$$$function__18_setTextPos,
    impl_direct$gui$OnscreenText$$$function__19_getTextPos,
    impl_direct$gui$OnscreenText$$$function__20_setPos,
    impl_direct$gui$OnscreenText$$$function__21_getPos,
    impl_direct$gui$OnscreenText$$$function__22_setTextR,
    impl_direct$gui$OnscreenText$$$function__23_getTextR,
    impl_direct$gui$OnscreenText$$$function__24_setRoll,
    impl_direct$gui$OnscreenText$$$function__25_getRoll,
    impl_direct$gui$OnscreenText$$$function__26_setTextScale,
    impl_direct$gui$OnscreenText$$$function__27_getTextScale,
    impl_direct$gui$OnscreenText$$$function__28_setScale,
    impl_direct$gui$OnscreenText$$$function__29_getScale,
    impl_direct$gui$OnscreenText$$$function__30_updateTransformMat,
    impl_direct$gui$OnscreenText$$$function__31_setWordwrap,
    impl_direct$gui$OnscreenText$$$function__32_getWordwrap,
    impl_direct$gui$OnscreenText$$$function__33___getFg,
    impl_direct$gui$OnscreenText$$$function__34_setFg,
    impl_direct$gui$OnscreenText$$$function__35___getBg,
    impl_direct$gui$OnscreenText$$$function__36_setBg,
    impl_direct$gui$OnscreenText$$$function__37___getShadow,
    impl_direct$gui$OnscreenText$$$function__38_setShadow,
    impl_direct$gui$OnscreenText$$$function__39___getFrame,
    impl_direct$gui$OnscreenText$$$function__40_setFrame,
    impl_direct$gui$OnscreenText$$$function__41_configure,
    impl_direct$gui$OnscreenText$$$function__42___setitem__,
    impl_direct$gui$OnscreenText$$$function__43_cget,
    impl_direct$gui$OnscreenText$$$function__44___getAlign,
    impl_direct$gui$OnscreenText$$$function__45_setAlign,
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

    function_impl_code *current = functable_direct$gui$OnscreenText;
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

    if (offset > sizeof(functable_direct$gui$OnscreenText) || offset < 0) {
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
        functable_direct$gui$OnscreenText[offset],
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
        module_direct$gui$OnscreenText,
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
PyObject *modulecode_direct$gui$OnscreenText(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.gui.OnscreenText");

    // Store the module for future use.
    module_direct$gui$OnscreenText = module;

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
        PRINT_STRING("direct.gui.OnscreenText: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.gui.OnscreenText: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$gui$OnscreenText\n");

    moduledict_direct$gui$OnscreenText = MODULE_DICT(module_direct$gui$OnscreenText);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$gui$OnscreenText,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$gui$OnscreenText,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[144]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$gui$OnscreenText,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$gui$OnscreenText,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$gui$OnscreenText,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$gui$OnscreenText);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$gui$OnscreenText);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_af69f3f204fe2029fe7956023ac0d205;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c673040b47e9ca39895277743299edc6_2;
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
        tmp_assign_source_1 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_2);
    }
    frame_af69f3f204fe2029fe7956023ac0d205 = MAKE_MODULE_FRAME(codeobj_af69f3f204fe2029fe7956023ac0d205, module_direct$gui$OnscreenText);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_af69f3f204fe2029fe7956023ac0d205);
    assert(Py_REFCNT(frame_af69f3f204fe2029fe7956023ac0d205) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[137], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[138], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST6(mod_consts[140]);
        UPDATE_STRING_DICT1(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[142];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$gui$OnscreenText;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$gui$OnscreenText;
        tmp_fromlist_value_1 = mod_consts[143];
        tmp_level_value_1 = mod_consts[2];
        frame_af69f3f204fe2029fe7956023ac0d205->m_frame.f_lineno = 9;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$gui$OnscreenText, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[144];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$gui$OnscreenText;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[145];
        tmp_level_value_2 = mod_consts[39];
        frame_af69f3f204fe2029fe7956023ac0d205->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$gui$OnscreenText,
                mod_consts[146],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 23;

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
        tmp_subscript_value_1 = mod_consts[2];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[150]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[150]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[151];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_af69f3f204fe2029fe7956023ac0d205->m_frame.f_lineno = 23;
        tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[152]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[153];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[154];
        tmp_default_value_1 = mod_consts[155];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[154]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        frame_c673040b47e9ca39895277743299edc6_2 = MAKE_CLASS_FRAME(tstate, codeobj_c673040b47e9ca39895277743299edc6, module_direct$gui$OnscreenText, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c673040b47e9ca39895277743299edc6_2);
        assert(Py_REFCNT(frame_c673040b47e9ca39895277743299edc6_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[144];
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(19);
            PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[10]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[159];
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[2];
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[115];
            PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[2];
            PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[2];
            PyTuple_SET_ITEM0(tmp_defaults_1, 16, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_True;
            PyTuple_SET_ITEM0(tmp_defaults_1, 17, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 18, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__2_cleanup();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__3_destroy();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[162], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__4_freeze();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__5_thaw();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__6_setDecal();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__7_getDecal();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 271;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[170]);

            if (unlikely(tmp_args_element_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[170]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[168]);

            if (unlikely(tmp_args_element_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[168]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[173], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__8_setFont();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__9_getFont();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_3 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_3 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[75]);

            if (unlikely(tmp_args_element_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[75]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_4 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[37]);

            if (unlikely(tmp_args_element_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[37]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 279;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__10_clearText();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__11_setText();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__12_appendText();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__13_getText();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_4 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_5 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[83]);

            if (unlikely(tmp_args_element_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[83]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_6 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[65]);

            if (unlikely(tmp_args_element_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_args_element_value_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 314;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[181], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__14_setTextX();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[182], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__15_setX();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__16_setTextY();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[186], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__17_setY();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[188], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[190];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__18_setTextPos(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__19_getTextPos();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[192], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_5 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 360;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_7 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[192]);

            if (unlikely(tmp_args_element_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[192]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_8 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[84]);

            if (unlikely(tmp_args_element_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[84]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 360;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[194], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__20_setPos();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__21_getPos();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[196], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_6 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 379;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_9 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[196]);

            if (unlikely(tmp_args_element_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[196]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 379;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[198], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__22_setTextR();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[199], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__23_getTextR();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[201], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_7 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 393;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_10 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[201]);

            if (unlikely(tmp_args_element_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[201]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_11 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[199]);

            if (unlikely(tmp_args_element_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[199]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_10);

                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 393;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__24_setRoll();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[204], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__25_getRoll();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[206], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_8 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 412;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_12 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[206]);

            if (unlikely(tmp_args_element_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[206]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_13 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[204]);

            if (unlikely(tmp_args_element_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[204]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_12);

                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 412;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[208], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[190];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__26_setTextScale(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__27_getTextScale();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_9 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 437;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_14 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[211]);

            if (unlikely(tmp_args_element_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_15 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[209]);

            if (unlikely(tmp_args_element_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[209]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_14);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 437;
            {
                PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[213], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[190];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__28_setScale(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__29_getScale();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[216], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_args_element_value_17;
            tmp_called_value_10 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 464;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_16 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[216]);

            if (unlikely(tmp_args_element_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[216]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_17 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[214]);

            if (unlikely(tmp_args_element_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[214]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 464;
            {
                PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__30_updateTransformMat();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__31_setWordwrap();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__32_getWordwrap();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[220], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_args_element_value_19;
            tmp_called_value_11 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 486;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_18 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[220]);

            if (unlikely(tmp_args_element_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[220]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_19 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[43]);

            if (unlikely(tmp_args_element_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_18);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_18);

                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 486;
            {
                PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__33___getFg();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[225], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__34_setFg();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[226], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            tmp_called_value_12 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_20 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[225]);

            if (unlikely(tmp_args_element_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[225]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_21 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[226]);

            if (unlikely(tmp_args_element_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_args_element_value_20);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[226]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_args_element_value_20);

                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 494;
            {
                PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[228], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__35___getBg();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[231], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__36_setBg();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[232], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_13 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 511;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_22 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[231]);

            if (unlikely(tmp_args_element_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_23 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[232]);

            if (unlikely(tmp_args_element_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_22);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[232]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_22);

                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 511;
            {
                PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[234], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__37___getShadow();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__38_setShadow();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_args_element_value_25;
            tmp_called_value_14 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 525;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_24 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[237]);

            if (unlikely(tmp_args_element_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[237]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_25 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[48]);

            if (unlikely(tmp_args_element_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_24);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[48]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_24);

                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 525;
            {
                PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[239], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__39___getFrame();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[242], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__40_setFrame();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[243], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_args_element_value_27;
            tmp_called_value_15 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 539;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_26 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[242]);

            if (unlikely(tmp_args_element_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[242]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_27 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[243]);

            if (unlikely(tmp_args_element_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_26);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[243]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_26);

                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 539;
            {
                PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[245], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[190];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__41_configure(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__42___setitem__();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[247], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__43_cget();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[249], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__44___getAlign();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[253], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$gui$OnscreenText$$$function__45_setAlign();

        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_args_element_value_29;
            tmp_called_value_16 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[172]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[172]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 573;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_28 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[253]);

            if (unlikely(tmp_args_element_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[253]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_29 = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[42]);

            if (unlikely(tmp_args_element_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_28);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[42]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_28);

                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c673040b47e9ca39895277743299edc6_2->m_frame.f_lineno = 573;
            {
                PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[255], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[249]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[249]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 576;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c673040b47e9ca39895277743299edc6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c673040b47e9ca39895277743299edc6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c673040b47e9ca39895277743299edc6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c673040b47e9ca39895277743299edc6_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c673040b47e9ca39895277743299edc6_2);

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


                exception_lineno = 23;

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
        tmp_res = PyObject_SetItem(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_17 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[151];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_af69f3f204fe2029fe7956023ac0d205->m_frame.f_lineno = 23;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23);
        locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23 = NULL;
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

        Py_DECREF(locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23);
        locals_direct$gui$OnscreenText$$$class__1_OnscreenText_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_18);
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
        exception_tb = MAKE_TRACEBACK(frame_af69f3f204fe2029fe7956023ac0d205, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af69f3f204fe2029fe7956023ac0d205->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af69f3f204fe2029fe7956023ac0d205, exception_lineno);
    }



    assertFrameObject(frame_af69f3f204fe2029fe7956023ac0d205);

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
    PGO_onModuleExit("direct.gui.OnscreenText", false);

    Py_INCREF(module_direct$gui$OnscreenText);
    return module_direct$gui$OnscreenText;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$gui$OnscreenText, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$gui$OnscreenText", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
