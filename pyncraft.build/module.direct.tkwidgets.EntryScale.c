/* Generated code for Python module 'direct.tkwidgets.EntryScale'
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

/* The "module_direct$tkwidgets$EntryScale" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$tkwidgets$EntryScale;
PyDictObject *moduledict_direct$tkwidgets$EntryScale;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[339];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[339];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.tkwidgets.EntryScale"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 339; i++) {
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
void checkModuleConstants_direct$tkwidgets$EntryScale(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 339; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1a6f18ad688d4b3bde37e97cc38a2dae;
static PyCodeObject *codeobj_a7bc82c37dbe3c6430350aae21bbc10c;
static PyCodeObject *codeobj_cbfa4e4e0193f7770124736b7db75504;
static PyCodeObject *codeobj_c1cace694b813f157df205b38275c656;
static PyCodeObject *codeobj_54758c3bd3a4bf0271771c145da8ae7b;
static PyCodeObject *codeobj_923676bbb3e7ea417b1c9bb351d3aa39;
static PyCodeObject *codeobj_f55a45006be38bb282e6dabb1baa802f;
static PyCodeObject *codeobj_f46e9575e72ef06d13c9a1e4555b7da0;
static PyCodeObject *codeobj_5b39f2b2a00fb02c981c0f65bc134b7d;
static PyCodeObject *codeobj_a75b1494e651aa8b79a769546b56ffb8;
static PyCodeObject *codeobj_dab5f2932e5931bb832068b65690621f;
static PyCodeObject *codeobj_62c9e96f3c4ef9f9ca4ea0205cc58b69;
static PyCodeObject *codeobj_32ddeb93dd1aa2c94de43f434a1d6988;
static PyCodeObject *codeobj_6e8e8cd82ce5733fcb88af7d7326057f;
static PyCodeObject *codeobj_fcbe5f6854d6c978cfe6ba2713b1fcca;
static PyCodeObject *codeobj_8779c29a046b5d387f3c2dd84ae9c4e6;
static PyCodeObject *codeobj_767c234af673c63d32d4e3b729a006d2;
static PyCodeObject *codeobj_6e5bd1c18b0d8b1d76bfe030eeb2a381;
static PyCodeObject *codeobj_0bf52388b29b48f52dec7dae44fcb089;
static PyCodeObject *codeobj_568f0216b854da17dd146d4f173013c5;
static PyCodeObject *codeobj_2f103d468132ee803a804c10a4e5e5ef;
static PyCodeObject *codeobj_f54ebcee105adf28921b4abfac485b66;
static PyCodeObject *codeobj_4f0a7f99ed7cdaba4c3630fe8174e555;
static PyCodeObject *codeobj_4a7a2df26c591b1d5d618fc3a78e3b05;
static PyCodeObject *codeobj_2ca3d654ab722c5fe13ea93b10ed51b5;
static PyCodeObject *codeobj_fcf9e15e9a803fa4e4ca0db8a10a052b;
static PyCodeObject *codeobj_0064a8d74efc5848804f213ffc26f590;
static PyCodeObject *codeobj_4cd54239fe529d5818c337407f2e4778;
static PyCodeObject *codeobj_5843b379db40564d7355af51b561640a;
static PyCodeObject *codeobj_f79c4c13b305e6c1e1616f5bc0b39e10;
static PyCodeObject *codeobj_4fde92ab7bbfedfc656eff0c460e9307;
static PyCodeObject *codeobj_038033f5e3b8170dd6e97862e787e7a9;
static PyCodeObject *codeobj_37e185413b20c26d2f9f014a81d145a8;
static PyCodeObject *codeobj_cf5ecc30cdda4403f1e272e88039f735;
static PyCodeObject *codeobj_330219f496854d009ca3b60043b10a65;
static PyCodeObject *codeobj_d11cda5bef6772c5c0ceb51e45e82cac;
static PyCodeObject *codeobj_bc00af167795b6bccffc4dbaf591ba70;
static PyCodeObject *codeobj_ba43a28c8c35aeb21af60973ed5ba43b;
static PyCodeObject *codeobj_449e3f611889a41f72de9cfe182ec8b7;
static PyCodeObject *codeobj_699aa5f15da956fc4990a3b788283369;
static PyCodeObject *codeobj_abc8469ce86983005cba50256354345a;
static PyCodeObject *codeobj_ede9dcddb569bf65a13f10f2446c12b2;
static PyCodeObject *codeobj_79d4b4d718a5a435cb3971bd31a84abb;
static PyCodeObject *codeobj_e977c6003eea6b41fa875c5b8e336ca9;
static PyCodeObject *codeobj_73942832d560b955abd45ca14381bcbc;
static PyCodeObject *codeobj_d2b5a06bc7b39c0c4b33a63b37c7ac20;
static PyCodeObject *codeobj_f06294e9b10be349725ed55e39b0397d;
static PyCodeObject *codeobj_8f256d6798573a40059610e5da6b04dd;
static PyCodeObject *codeobj_137363f6030d0bee8ade673007437c7c;
static PyCodeObject *codeobj_8fd0cce23a4f5c29efe9de43e595f330;
static PyCodeObject *codeobj_a4346ba55a3e6aecbead2acb716150fa;
static PyCodeObject *codeobj_067a1e5c39d8b038183496aa309f121f;
static PyCodeObject *codeobj_488429163d79c1979dcb432299039d62;
static PyCodeObject *codeobj_d48f385d74b22ea00a85640f51697835;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[307]); CHECK_OBJECT(module_filename_obj);
    codeobj_1a6f18ad688d4b3bde37e97cc38a2dae = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[308], NULL, 1, 0, 0);
    codeobj_a7bc82c37dbe3c6430350aae21bbc10c = MAKE_CODE_OBJECT(module_filename_obj, 498, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[308], NULL, 1, 0, 0);
    codeobj_cbfa4e4e0193f7770124736b7db75504 = MAKE_CODE_OBJECT(module_filename_obj, 502, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[308], NULL, 1, 0, 0);
    codeobj_c1cace694b813f157df205b38275c656 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[309], NULL, 1, 0, 0);
    codeobj_54758c3bd3a4bf0271771c145da8ae7b = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[310], NULL, 3, 0, 0);
    codeobj_923676bbb3e7ea417b1c9bb351d3aa39 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[311], mod_consts[311], NULL, NULL, 0, 0, 0);
    codeobj_f55a45006be38bb282e6dabb1baa802f = MAKE_CODE_OBJECT(module_filename_obj, 22, 0, mod_consts[15], mod_consts[15], mod_consts[312], NULL, 0, 0, 0);
    codeobj_f46e9575e72ef06d13c9a1e4555b7da0 = MAKE_CODE_OBJECT(module_filename_obj, 293, 0, mod_consts[173], mod_consts[173], mod_consts[312], NULL, 0, 0, 0);
    codeobj_5b39f2b2a00fb02c981c0f65bc134b7d = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[22], mod_consts[22], mod_consts[313], NULL, 2, 0, 0);
    codeobj_a75b1494e651aa8b79a769546b56ffb8 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[22], mod_consts[22], mod_consts[314], NULL, 2, 0, 0);
    codeobj_dab5f2932e5931bb832068b65690621f = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[276], mod_consts[276], mod_consts[315], NULL, 2, 0, 0);
    codeobj_62c9e96f3c4ef9f9ca4ea0205cc58b69 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[276], mod_consts[276], mod_consts[316], NULL, 2, 0, 0);
    codeobj_32ddeb93dd1aa2c94de43f434a1d6988 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[281], mod_consts[281], mod_consts[315], NULL, 2, 0, 0);
    codeobj_6e8e8cd82ce5733fcb88af7d7326057f = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[281], mod_consts[281], mod_consts[316], NULL, 2, 0, 0);
    codeobj_fcbe5f6854d6c978cfe6ba2713b1fcca = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[296], mod_consts[296], mod_consts[315], NULL, 2, 0, 0);
    codeobj_8779c29a046b5d387f3c2dd84ae9c4e6 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[299], mod_consts[299], mod_consts[315], NULL, 2, 0, 0);
    codeobj_767c234af673c63d32d4e3b729a006d2 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[317], NULL, 2, 0, 0);
    codeobj_6e5bd1c18b0d8b1d76bfe030eeb2a381 = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], mod_consts[318], NULL, 3, 0, 0);
    codeobj_0bf52388b29b48f52dec7dae44fcb089 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[319], NULL, 2, 0, 0);
    codeobj_568f0216b854da17dd146d4f173013c5 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[320], NULL, 1, 0, 0);
    codeobj_2f103d468132ee803a804c10a4e5e5ef = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[321], NULL, 1, 0, 0);
    codeobj_f54ebcee105adf28921b4abfac485b66 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[131], mod_consts[131], mod_consts[322], NULL, 1, 0, 0);
    codeobj_4f0a7f99ed7cdaba4c3630fe8174e555 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[321], NULL, 1, 0, 0);
    codeobj_4a7a2df26c591b1d5d618fc3a78e3b05 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[64], mod_consts[323], NULL, 2, 0, 0);
    codeobj_2ca3d654ab722c5fe13ea93b10ed51b5 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[93], mod_consts[324], NULL, 2, 0, 0);
    codeobj_fcf9e15e9a803fa4e4ca0db8a10a052b = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[325], NULL, 2, 0, 0);
    codeobj_0064a8d74efc5848804f213ffc26f590 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[326], NULL, 2, 0, 0);
    codeobj_4cd54239fe529d5818c337407f2e4778 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[321], NULL, 1, 0, 0);
    codeobj_5843b379db40564d7355af51b561640a = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], mod_consts[321], NULL, 1, 0, 0);
    codeobj_f79c4c13b305e6c1e1616f5bc0b39e10 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], mod_consts[321], NULL, 1, 0, 0);
    codeobj_4fde92ab7bbfedfc656eff0c460e9307 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[221], mod_consts[221], mod_consts[322], NULL, 2, 0, 0);
    codeobj_038033f5e3b8170dd6e97862e787e7a9 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], mod_consts[321], NULL, 1, 0, 0);
    codeobj_37e185413b20c26d2f9f014a81d145a8 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_VARARGS, mod_consts[279], mod_consts[279], mod_consts[327], NULL, 1, 0, 0);
    codeobj_cf5ecc30cdda4403f1e272e88039f735 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_VARARGS, mod_consts[279], mod_consts[279], mod_consts[327], NULL, 1, 0, 0);
    codeobj_330219f496854d009ca3b60043b10a65 = MAKE_CODE_OBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[210], mod_consts[210], mod_consts[328], NULL, 5, 0, 0);
    codeobj_d11cda5bef6772c5c0ceb51e45e82cac = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_VARARGS, mod_consts[210], mod_consts[210], mod_consts[327], NULL, 1, 0, 0);
    codeobj_bc00af167795b6bccffc4dbaf591ba70 = MAKE_CODE_OBJECT(module_filename_obj, 453, CO_VARARGS, mod_consts[210], mod_consts[210], mod_consts[327], NULL, 1, 0, 0);
    codeobj_ba43a28c8c35aeb21af60973ed5ba43b = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_VARARGS, mod_consts[112], mod_consts[112], mod_consts[327], NULL, 1, 0, 0);
    codeobj_449e3f611889a41f72de9cfe182ec8b7 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_VARARGS, mod_consts[112], mod_consts[112], mod_consts[327], NULL, 1, 0, 0);
    codeobj_699aa5f15da956fc4990a3b788283369 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_VARARGS, mod_consts[114], mod_consts[114], mod_consts[327], NULL, 1, 0, 0);
    codeobj_abc8469ce86983005cba50256354345a = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_VARARGS, mod_consts[114], mod_consts[114], mod_consts[327], NULL, 1, 0, 0);
    codeobj_ede9dcddb569bf65a13f10f2446c12b2 = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[204], mod_consts[204], mod_consts[329], NULL, 1, 0, 0);
    codeobj_79d4b4d718a5a435cb3971bd31a84abb = MAKE_CODE_OBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[207], mod_consts[207], mod_consts[330], NULL, 1, 0, 0);
    codeobj_e977c6003eea6b41fa875c5b8e336ca9 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[174], mod_consts[174], mod_consts[321], NULL, 1, 0, 0);
    codeobj_73942832d560b955abd45ca14381bcbc = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[306], mod_consts[306], mod_consts[331], NULL, 2, 0, 0);
    codeobj_d2b5a06bc7b39c0c4b33a63b37c7ac20 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[79], mod_consts[79], mod_consts[321], NULL, 1, 0, 0);
    codeobj_f06294e9b10be349725ed55e39b0397d = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[332], NULL, 3, 0, 0);
    codeobj_8f256d6798573a40059610e5da6b04dd = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[333], NULL, 3, 0, 0);
    codeobj_137363f6030d0bee8ade673007437c7c = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[292], mod_consts[292], mod_consts[318], NULL, 3, 0, 0);
    codeobj_8fd0cce23a4f5c29efe9de43e595f330 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], mod_consts[334], NULL, 2, 0, 0);
    codeobj_a4346ba55a3e6aecbead2acb716150fa = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], mod_consts[335], NULL, 2, 0, 0);
    codeobj_067a1e5c39d8b038183496aa309f121f = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[178], mod_consts[178], mod_consts[336], NULL, 3, 0, 0);
    codeobj_488429163d79c1979dcb432299039d62 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], mod_consts[337], NULL, 2, 0, 0);
    codeobj_d48f385d74b22ea00a85640f51697835 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], mod_consts[321], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__10_askForResolution(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__11_setResolution();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__12__updateLabelText();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__13__updateValidate();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__14__scaleCommand();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__15__entryCommand(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__16__setSigDigits();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__17_get();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__18_set(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__19_onReturn();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__20_onReturnRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__21___onPress();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__22_onPress();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__23___onRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__24_onRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__26__updateLabels();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__28_get();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__29_getAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__2_label();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__30_set(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__31_setAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__33_reset();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__34___onReturn();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__35_onReturn();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__37_onReturnRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__38___onPress();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__39_onPress();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__3_scale();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__40___onRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__41_onRelease();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__4_entry();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__5_askForLabel(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__6_askForMin(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__7_setMin();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__8_askForMax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__9_setMax();


// The module function definitions.
static PyObject *impl_direct$tkwidgets$EntryScale$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    PyObject *var_interior = NULL;
    struct Nuitka_FrameObject *frame_a75b1494e651aa8b79a769546b56ffb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a75b1494e651aa8b79a769546b56ffb8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a75b1494e651aa8b79a769546b56ffb8)) {
        Py_XDECREF(cache_frame_a75b1494e651aa8b79a769546b56ffb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a75b1494e651aa8b79a769546b56ffb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a75b1494e651aa8b79a769546b56ffb8 = MAKE_FUNCTION_FRAME(tstate, codeobj_a75b1494e651aa8b79a769546b56ffb8, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a75b1494e651aa8b79a769546b56ffb8->m_type_description == NULL);
    frame_a75b1494e651aa8b79a769546b56ffb8 = cache_frame_a75b1494e651aa8b79a769546b56ffb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a75b1494e651aa8b79a769546b56ffb8);
    assert(Py_REFCNT(frame_a75b1494e651aa8b79a769546b56ffb8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_2 = mod_consts[1];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_1;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = mod_consts[2];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
                tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_1 == NULL)) {
                    tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
                }

                if (tmp_expression_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[9], "ili");
            PyTuple_SET_ITEM(tmp_assign_source_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[10];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[2];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[12];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_3;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[13];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
                CHECK_OBJECT(par_self);
                tmp_expression_value_3 = par_self;
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[14];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[15];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_4 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[16]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 9, tmp_tuple_element_1);
            tmp_tuple_element_6 = mod_consts[17];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = mod_consts[18];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_6);
                CHECK_OBJECT(par_self);
                tmp_expression_value_5 = par_self;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[19]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 10, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_1 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_2 = var_optiondefs;
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[20],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_4 = par_parent;
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[22],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[23];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[25];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[26], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 54;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[27]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interior == NULL);
        var_interior = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(var_interior);
        tmp_expression_value_8 = var_interior;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[18];
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 55;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[31]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[32];
        tmp_args_element_value_6 = mod_consts[33];
        tmp_args_element_value_7 = Py_None;
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_args_element_value_9 = var_interior;
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[35], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 61;
        tmp_assattr_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[37], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[37]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[38]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 62;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[39];
        tmp_kw_call_arg_value_1_1 = mod_consts[40];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[41]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[35]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[42];
        tmp_dict_key_1 = mod_consts[43];
        tmp_dict_value_1 = mod_consts[44];
        tmp_kw_call_dict_value_1_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            CHECK_OBJECT(par_self);
            tmp_expression_value_16 = par_self;
            tmp_subscript_value_3 = mod_consts[10];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            CHECK_OBJECT(par_self);
            tmp_expression_value_17 = par_self;
            tmp_subscript_value_4 = mod_consts[12];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[45];
            tmp_dict_value_1 = mod_consts[25];
            tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = mod_consts[25];
            tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_kw_call_dict_value_2_1 = mod_consts[47];
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[37]);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[48]);
        if (tmp_kw_call_dict_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_kw_call_dict_value_3_1);

            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 63;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        Py_DECREF(tmp_kw_call_dict_value_4_1);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[50], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[50]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[51]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 77;
        tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[31]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[54];
        tmp_kw_call_arg_value_1_2 = mod_consts[33];
        tmp_kw_call_arg_value_2_2 = Py_None;
        tmp_kw_call_arg_value_3_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_arg_value_3_2 == NULL)) {
            tmp_kw_call_arg_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_kw_call_arg_value_4_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[35]);
        if (tmp_kw_call_arg_value_4_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_subscript_value_5 = mod_consts[14];
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_5);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = mod_consts[56];
        tmp_kw_call_dict_value_2_2 = mod_consts[57];
        tmp_kw_call_dict_value_3_2 = mod_consts[58];
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
            tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[54], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[54]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[51]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 86;
        tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[61]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[54]);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[62]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[64]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[35]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[51]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 90;
        tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[31]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[67];
        tmp_args_element_value_14 = mod_consts[33];
        tmp_args_element_value_15 = Py_None;
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_args_element_value_17 = var_interior;
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assattr_value_8 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[68], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_arg_value_3_3;
        PyObject *tmp_kw_call_arg_value_4_3;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[31]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[69];
        tmp_kw_call_arg_value_1_3 = mod_consts[33];
        tmp_kw_call_arg_value_2_3 = Py_None;
        tmp_kw_call_arg_value_3_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_arg_value_3_3 == NULL)) {
            tmp_kw_call_arg_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_kw_call_arg_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_kw_call_arg_value_4_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[68]);
        if (tmp_kw_call_arg_value_4_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_4_3);

            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_subscript_value_6 = mod_consts[10];
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_6);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_4_3);

            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 98;
        tmp_kw_call_dict_value_0_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_4_3);

            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_dict_value_1_3 == NULL)) {
            tmp_kw_call_dict_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_3 = mod_consts[72];
        tmp_kw_call_dict_value_3_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_kw_call_dict_value_3_3 == NULL)) {
            tmp_kw_call_dict_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_kw_call_dict_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_4_2 = mod_consts[74];
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 96;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3, tmp_kw_call_arg_value_4_3};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_2};
            tmp_assattr_value_9 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_arg_value_4_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[69], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[69]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[51]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 103;
        tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[76], 0), mod_consts[77]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[69]);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[62]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[78]);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_kw_call_arg_value_3_4;
        PyObject *tmp_kw_call_arg_value_4_4;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_kw_call_dict_value_3_4;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[31]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[79];
        tmp_kw_call_arg_value_1_4 = mod_consts[33];
        tmp_kw_call_arg_value_2_4 = Py_None;
        tmp_kw_call_arg_value_3_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_kw_call_arg_value_3_4 == NULL)) {
            tmp_kw_call_arg_value_3_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_kw_call_arg_value_3_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_kw_call_arg_value_4_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[68]);
        if (tmp_kw_call_arg_value_4_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[81]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_arg_value_4_4);

            exception_lineno = 109;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_4 = mod_consts[82];
        tmp_kw_call_dict_value_2_4 = mod_consts[83];
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_subscript_value_7 = mod_consts[10];
        tmp_kw_call_dict_value_3_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_7);
        if (tmp_kw_call_dict_value_3_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_arg_value_4_4);
            Py_DECREF(tmp_kw_call_dict_value_0_4);

            exception_lineno = 112;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_subscript_value_8 = mod_consts[12];
        tmp_kw_call_dict_value_4_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_8);
        if (tmp_kw_call_dict_value_4_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_arg_value_4_4);
            Py_DECREF(tmp_kw_call_dict_value_0_4);
            Py_DECREF(tmp_kw_call_dict_value_3_4);

            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_46 = par_self;
        tmp_subscript_value_9 = mod_consts[84];
        tmp_kw_call_dict_value_5_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_9);
        if (tmp_kw_call_dict_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_arg_value_4_4);
            Py_DECREF(tmp_kw_call_dict_value_0_4);
            Py_DECREF(tmp_kw_call_dict_value_3_4);
            Py_DECREF(tmp_kw_call_dict_value_4_3);

            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_6_1 = mod_consts[25];
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 107;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4, tmp_kw_call_arg_value_3_4, tmp_kw_call_arg_value_4_4};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_assattr_value_10 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_arg_value_4_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_3_4);
        Py_DECREF(tmp_kw_call_dict_value_4_3);
        Py_DECREF(tmp_kw_call_dict_value_5_1);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[79], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_48 = par_self;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[79]);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[51]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 116;
        tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[61]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_50 = par_self;
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[79]);
        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[38]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_51 = par_self;
        tmp_subscript_value_10 = mod_consts[1];
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_10);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 118;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(par_self);
        tmp_expression_value_53 = par_self;
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[79]);
        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[62]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[86];
        CHECK_OBJECT(par_self);
        tmp_expression_value_54 = par_self;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[87]);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(par_self);
        tmp_expression_value_56 = par_self;
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[79]);
        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[62]);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[88];
        CHECK_OBJECT(par_self);
        tmp_expression_value_57 = par_self;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[89]);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(par_self);
        tmp_expression_value_59 = par_self;
        tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[79]);
        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[62]);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_60 = par_self;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[90]);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_arg_value_3_5;
        PyObject *tmp_kw_call_arg_value_4_5;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_5;
        PyObject *tmp_kw_call_dict_value_3_5;
        PyObject *tmp_kw_call_dict_value_4_4;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_61 = par_self;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[31]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[91];
        tmp_kw_call_arg_value_1_5 = mod_consts[33];
        tmp_kw_call_arg_value_2_5 = Py_None;
        tmp_kw_call_arg_value_3_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_arg_value_3_5 == NULL)) {
            tmp_kw_call_arg_value_3_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_kw_call_arg_value_3_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_62 = par_self;
        tmp_kw_call_arg_value_4_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[68]);
        if (tmp_kw_call_arg_value_4_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_4_5);

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_63 = par_self;
        tmp_subscript_value_11 = mod_consts[12];
        tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_11);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_4_5);

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 125;
        tmp_kw_call_dict_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_4_5);

            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_dict_value_1_5 == NULL)) {
            tmp_kw_call_dict_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_dict_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_4_5);
            Py_DECREF(tmp_kw_call_dict_value_0_5);

            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_5 = mod_consts[72];
        tmp_kw_call_dict_value_3_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_dict_value_3_5 == NULL)) {
            tmp_kw_call_dict_value_3_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_dict_value_3_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_arg_value_4_5);
            Py_DECREF(tmp_kw_call_dict_value_0_5);

            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_4_4 = mod_consts[74];
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 123;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5, tmp_kw_call_arg_value_3_5, tmp_kw_call_arg_value_4_5};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_5, tmp_kw_call_dict_value_3_5, tmp_kw_call_dict_value_4_4};
            tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_22, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_arg_value_4_5);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[91], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(par_self);
        tmp_expression_value_65 = par_self;
        tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[91]);
        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[62]);
        Py_DECREF(tmp_expression_value_64);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_66 = par_self;
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[93]);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_68 = par_self;
        tmp_expression_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[91]);
        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[51]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 131;
        tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[76], 0), mod_consts[77]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_70 = par_self;
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[68]);
        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[51]);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 132;
        tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(par_self);
        tmp_expression_value_71 = par_self;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[94]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a75b1494e651aa8b79a769546b56ffb8->m_frame.f_lineno = 135;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a75b1494e651aa8b79a769546b56ffb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a75b1494e651aa8b79a769546b56ffb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a75b1494e651aa8b79a769546b56ffb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a75b1494e651aa8b79a769546b56ffb8,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs,
        var_interior
    );


    // Release cached frame if used for exception.
    if (frame_a75b1494e651aa8b79a769546b56ffb8 == cache_frame_a75b1494e651aa8b79a769546b56ffb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a75b1494e651aa8b79a769546b56ffb8);
        cache_frame_a75b1494e651aa8b79a769546b56ffb8 = NULL;
    }

    assertFrameObject(frame_a75b1494e651aa8b79a769546b56ffb8);

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
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    CHECK_OBJECT(var_interior);
    Py_DECREF(var_interior);
    var_interior = NULL;
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

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__2_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_038033f5e3b8170dd6e97862e787e7a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_038033f5e3b8170dd6e97862e787e7a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_038033f5e3b8170dd6e97862e787e7a9)) {
        Py_XDECREF(cache_frame_038033f5e3b8170dd6e97862e787e7a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_038033f5e3b8170dd6e97862e787e7a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_038033f5e3b8170dd6e97862e787e7a9 = MAKE_FUNCTION_FRAME(tstate, codeobj_038033f5e3b8170dd6e97862e787e7a9, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_038033f5e3b8170dd6e97862e787e7a9->m_type_description == NULL);
    frame_038033f5e3b8170dd6e97862e787e7a9 = cache_frame_038033f5e3b8170dd6e97862e787e7a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_038033f5e3b8170dd6e97862e787e7a9);
    assert(Py_REFCNT(frame_038033f5e3b8170dd6e97862e787e7a9) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_038033f5e3b8170dd6e97862e787e7a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_038033f5e3b8170dd6e97862e787e7a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_038033f5e3b8170dd6e97862e787e7a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_038033f5e3b8170dd6e97862e787e7a9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_038033f5e3b8170dd6e97862e787e7a9 == cache_frame_038033f5e3b8170dd6e97862e787e7a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_038033f5e3b8170dd6e97862e787e7a9);
        cache_frame_038033f5e3b8170dd6e97862e787e7a9 = NULL;
    }

    assertFrameObject(frame_038033f5e3b8170dd6e97862e787e7a9);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__3_scale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d2b5a06bc7b39c0c4b33a63b37c7ac20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20)) {
        Py_XDECREF(cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 = MAKE_FUNCTION_FRAME(tstate, codeobj_d2b5a06bc7b39c0c4b33a63b37c7ac20, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20->m_type_description == NULL);
    frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 = cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d2b5a06bc7b39c0c4b33a63b37c7ac20);
    assert(Py_REFCNT(frame_d2b5a06bc7b39c0c4b33a63b37c7ac20) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_d2b5a06bc7b39c0c4b33a63b37c7ac20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2b5a06bc7b39c0c4b33a63b37c7ac20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2b5a06bc7b39c0c4b33a63b37c7ac20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2b5a06bc7b39c0c4b33a63b37c7ac20,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 == cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20);
        cache_frame_d2b5a06bc7b39c0c4b33a63b37c7ac20 = NULL;
    }

    assertFrameObject(frame_d2b5a06bc7b39c0c4b33a63b37c7ac20);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__4_entry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4cd54239fe529d5818c337407f2e4778;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4cd54239fe529d5818c337407f2e4778 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4cd54239fe529d5818c337407f2e4778)) {
        Py_XDECREF(cache_frame_4cd54239fe529d5818c337407f2e4778);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cd54239fe529d5818c337407f2e4778 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cd54239fe529d5818c337407f2e4778 = MAKE_FUNCTION_FRAME(tstate, codeobj_4cd54239fe529d5818c337407f2e4778, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cd54239fe529d5818c337407f2e4778->m_type_description == NULL);
    frame_4cd54239fe529d5818c337407f2e4778 = cache_frame_4cd54239fe529d5818c337407f2e4778;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4cd54239fe529d5818c337407f2e4778);
    assert(Py_REFCNT(frame_4cd54239fe529d5818c337407f2e4778) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_4cd54239fe529d5818c337407f2e4778, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cd54239fe529d5818c337407f2e4778->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cd54239fe529d5818c337407f2e4778, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cd54239fe529d5818c337407f2e4778,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4cd54239fe529d5818c337407f2e4778 == cache_frame_4cd54239fe529d5818c337407f2e4778) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cd54239fe529d5818c337407f2e4778);
        cache_frame_4cd54239fe529d5818c337407f2e4778 = NULL;
    }

    assertFrameObject(frame_4cd54239fe529d5818c337407f2e4778);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__5_askForLabel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_newLabel = NULL;
    struct Nuitka_FrameObject *frame_4a7a2df26c591b1d5d618fc3a78e3b05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05)) {
        Py_XDECREF(cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05 = MAKE_FUNCTION_FRAME(tstate, codeobj_4a7a2df26c591b1d5d618fc3a78e3b05, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05->m_type_description == NULL);
    frame_4a7a2df26c591b1d5d618fc3a78e3b05 = cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4a7a2df26c591b1d5d618fc3a78e3b05);
    assert(Py_REFCNT(frame_4a7a2df26c591b1d5d618fc3a78e3b05) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[96];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4a7a2df26c591b1d5d618fc3a78e3b05->m_frame.f_lineno = 147;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4a7a2df26c591b1d5d618fc3a78e3b05->m_frame.f_lineno = 148;
        tmp_kw_call_value_3_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4a7a2df26c591b1d5d618fc3a78e3b05->m_frame.f_lineno = 145;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_newLabel == NULL);
        var_newLabel = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_newLabel);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_newLabel);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_newLabel);
        tmp_ass_subvalue_1 = var_newLabel;
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a7a2df26c591b1d5d618fc3a78e3b05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a7a2df26c591b1d5d618fc3a78e3b05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a7a2df26c591b1d5d618fc3a78e3b05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a7a2df26c591b1d5d618fc3a78e3b05,
        type_description_1,
        par_self,
        par_event,
        var_newLabel
    );


    // Release cached frame if used for exception.
    if (frame_4a7a2df26c591b1d5d618fc3a78e3b05 == cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05);
        cache_frame_4a7a2df26c591b1d5d618fc3a78e3b05 = NULL;
    }

    assertFrameObject(frame_4a7a2df26c591b1d5d618fc3a78e3b05);

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
    Py_XDECREF(var_newLabel);
    var_newLabel = NULL;
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

    Py_XDECREF(var_newLabel);
    var_newLabel = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__6_askForMin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_newMin = NULL;
    struct Nuitka_FrameObject *frame_fcf9e15e9a803fa4e4ca0db8a10a052b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b)) {
        Py_XDECREF(cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b = MAKE_FUNCTION_FRAME(tstate, codeobj_fcf9e15e9a803fa4e4ca0db8a10a052b, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_type_description == NULL);
    frame_fcf9e15e9a803fa4e4ca0db8a10a052b = cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fcf9e15e9a803fa4e4ca0db8a10a052b);
    assert(Py_REFCNT(frame_fcf9e15e9a803fa4e4ca0db8a10a052b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[99];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_frame.f_lineno = 155;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_frame.f_lineno = 156;
        tmp_kw_call_value_3_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_frame.f_lineno = 153;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_newMin == NULL);
        var_newMin = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_newMin);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_newMin);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_newMin);
        tmp_args_element_value_2 = var_newMin;
        frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_frame.f_lineno = 158;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[100], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_fcf9e15e9a803fa4e4ca0db8a10a052b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcf9e15e9a803fa4e4ca0db8a10a052b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcf9e15e9a803fa4e4ca0db8a10a052b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcf9e15e9a803fa4e4ca0db8a10a052b,
        type_description_1,
        par_self,
        par_event,
        var_newMin
    );


    // Release cached frame if used for exception.
    if (frame_fcf9e15e9a803fa4e4ca0db8a10a052b == cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b);
        cache_frame_fcf9e15e9a803fa4e4ca0db8a10a052b = NULL;
    }

    assertFrameObject(frame_fcf9e15e9a803fa4e4ca0db8a10a052b);

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
    Py_XDECREF(var_newMin);
    var_newMin = NULL;
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

    Py_XDECREF(var_newMin);
    var_newMin = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__7_setMin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newMin = python_pars[1];
    struct Nuitka_FrameObject *frame_a4346ba55a3e6aecbead2acb716150fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a4346ba55a3e6aecbead2acb716150fa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4346ba55a3e6aecbead2acb716150fa)) {
        Py_XDECREF(cache_frame_a4346ba55a3e6aecbead2acb716150fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4346ba55a3e6aecbead2acb716150fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4346ba55a3e6aecbead2acb716150fa = MAKE_FUNCTION_FRAME(tstate, codeobj_a4346ba55a3e6aecbead2acb716150fa, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4346ba55a3e6aecbead2acb716150fa->m_type_description == NULL);
    frame_a4346ba55a3e6aecbead2acb716150fa = cache_frame_a4346ba55a3e6aecbead2acb716150fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a4346ba55a3e6aecbead2acb716150fa);
    assert(Py_REFCNT(frame_a4346ba55a3e6aecbead2acb716150fa) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_newMin);
        tmp_ass_subvalue_1 = par_newMin;
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[10];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_newMin);
        tmp_ass_subvalue_2 = par_newMin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[101];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_newMin);
        tmp_ass_subvalue_3 = par_newMin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[69]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a4346ba55a3e6aecbead2acb716150fa->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[102]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_a4346ba55a3e6aecbead2acb716150fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4346ba55a3e6aecbead2acb716150fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4346ba55a3e6aecbead2acb716150fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4346ba55a3e6aecbead2acb716150fa,
        type_description_1,
        par_self,
        par_newMin
    );


    // Release cached frame if used for exception.
    if (frame_a4346ba55a3e6aecbead2acb716150fa == cache_frame_a4346ba55a3e6aecbead2acb716150fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4346ba55a3e6aecbead2acb716150fa);
        cache_frame_a4346ba55a3e6aecbead2acb716150fa = NULL;
    }

    assertFrameObject(frame_a4346ba55a3e6aecbead2acb716150fa);

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
    CHECK_OBJECT(par_newMin);
    Py_DECREF(par_newMin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newMin);
    Py_DECREF(par_newMin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__8_askForMax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_newMax = NULL;
    struct Nuitka_FrameObject *frame_2ca3d654ab722c5fe13ea93b10ed51b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5)) {
        Py_XDECREF(cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_2ca3d654ab722c5fe13ea93b10ed51b5, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5->m_type_description == NULL);
    frame_2ca3d654ab722c5fe13ea93b10ed51b5 = cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2ca3d654ab722c5fe13ea93b10ed51b5);
    assert(Py_REFCNT(frame_2ca3d654ab722c5fe13ea93b10ed51b5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2ca3d654ab722c5fe13ea93b10ed51b5->m_frame.f_lineno = 168;
        tmp_kw_call_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[12];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = mod_consts[103];
        frame_2ca3d654ab722c5fe13ea93b10ed51b5->m_frame.f_lineno = 167;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_newMax == NULL);
        var_newMax = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_newMax);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_newMax);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_newMax);
        tmp_args_element_value_1 = var_newMax;
        frame_2ca3d654ab722c5fe13ea93b10ed51b5->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[105], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2ca3d654ab722c5fe13ea93b10ed51b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ca3d654ab722c5fe13ea93b10ed51b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ca3d654ab722c5fe13ea93b10ed51b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ca3d654ab722c5fe13ea93b10ed51b5,
        type_description_1,
        par_self,
        par_event,
        var_newMax
    );


    // Release cached frame if used for exception.
    if (frame_2ca3d654ab722c5fe13ea93b10ed51b5 == cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5);
        cache_frame_2ca3d654ab722c5fe13ea93b10ed51b5 = NULL;
    }

    assertFrameObject(frame_2ca3d654ab722c5fe13ea93b10ed51b5);

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
    Py_XDECREF(var_newMax);
    var_newMax = NULL;
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

    Py_XDECREF(var_newMax);
    var_newMax = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__9_setMax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newMax = python_pars[1];
    struct Nuitka_FrameObject *frame_8fd0cce23a4f5c29efe9de43e595f330;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8fd0cce23a4f5c29efe9de43e595f330 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8fd0cce23a4f5c29efe9de43e595f330)) {
        Py_XDECREF(cache_frame_8fd0cce23a4f5c29efe9de43e595f330);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fd0cce23a4f5c29efe9de43e595f330 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fd0cce23a4f5c29efe9de43e595f330 = MAKE_FUNCTION_FRAME(tstate, codeobj_8fd0cce23a4f5c29efe9de43e595f330, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fd0cce23a4f5c29efe9de43e595f330->m_type_description == NULL);
    frame_8fd0cce23a4f5c29efe9de43e595f330 = cache_frame_8fd0cce23a4f5c29efe9de43e595f330;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8fd0cce23a4f5c29efe9de43e595f330);
    assert(Py_REFCNT(frame_8fd0cce23a4f5c29efe9de43e595f330) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_newMax);
        tmp_ass_subvalue_1 = par_newMax;
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[12];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_newMax);
        tmp_ass_subvalue_2 = par_newMax;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[106];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_newMax);
        tmp_ass_subvalue_3 = par_newMax;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[91]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8fd0cce23a4f5c29efe9de43e595f330->m_frame.f_lineno = 178;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[102]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_8fd0cce23a4f5c29efe9de43e595f330, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fd0cce23a4f5c29efe9de43e595f330->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fd0cce23a4f5c29efe9de43e595f330, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fd0cce23a4f5c29efe9de43e595f330,
        type_description_1,
        par_self,
        par_newMax
    );


    // Release cached frame if used for exception.
    if (frame_8fd0cce23a4f5c29efe9de43e595f330 == cache_frame_8fd0cce23a4f5c29efe9de43e595f330) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fd0cce23a4f5c29efe9de43e595f330);
        cache_frame_8fd0cce23a4f5c29efe9de43e595f330 = NULL;
    }

    assertFrameObject(frame_8fd0cce23a4f5c29efe9de43e595f330);

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
    CHECK_OBJECT(par_newMax);
    Py_DECREF(par_newMax);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newMax);
    Py_DECREF(par_newMax);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__10_askForResolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_newResolution = NULL;
    struct Nuitka_FrameObject *frame_0064a8d74efc5848804f213ffc26f590;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0064a8d74efc5848804f213ffc26f590 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0064a8d74efc5848804f213ffc26f590)) {
        Py_XDECREF(cache_frame_0064a8d74efc5848804f213ffc26f590);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0064a8d74efc5848804f213ffc26f590 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0064a8d74efc5848804f213ffc26f590 = MAKE_FUNCTION_FRAME(tstate, codeobj_0064a8d74efc5848804f213ffc26f590, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0064a8d74efc5848804f213ffc26f590->m_type_description == NULL);
    frame_0064a8d74efc5848804f213ffc26f590 = cache_frame_0064a8d74efc5848804f213ffc26f590;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0064a8d74efc5848804f213ffc26f590);
    assert(Py_REFCNT(frame_0064a8d74efc5848804f213ffc26f590) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0064a8d74efc5848804f213ffc26f590->m_frame.f_lineno = 182;
        tmp_kw_call_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[84];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 183;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = mod_consts[107];
        frame_0064a8d74efc5848804f213ffc26f590->m_frame.f_lineno = 181;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_newResolution == NULL);
        var_newResolution = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_newResolution);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_newResolution);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_newResolution);
        tmp_args_element_value_1 = var_newResolution;
        frame_0064a8d74efc5848804f213ffc26f590->m_frame.f_lineno = 186;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[108], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_0064a8d74efc5848804f213ffc26f590, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0064a8d74efc5848804f213ffc26f590->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0064a8d74efc5848804f213ffc26f590, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0064a8d74efc5848804f213ffc26f590,
        type_description_1,
        par_self,
        par_event,
        var_newResolution
    );


    // Release cached frame if used for exception.
    if (frame_0064a8d74efc5848804f213ffc26f590 == cache_frame_0064a8d74efc5848804f213ffc26f590) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0064a8d74efc5848804f213ffc26f590);
        cache_frame_0064a8d74efc5848804f213ffc26f590 = NULL;
    }

    assertFrameObject(frame_0064a8d74efc5848804f213ffc26f590);

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
    Py_XDECREF(var_newResolution);
    var_newResolution = NULL;
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

    Py_XDECREF(var_newResolution);
    var_newResolution = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__11_setResolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newResolution = python_pars[1];
    struct Nuitka_FrameObject *frame_488429163d79c1979dcb432299039d62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_488429163d79c1979dcb432299039d62 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_488429163d79c1979dcb432299039d62)) {
        Py_XDECREF(cache_frame_488429163d79c1979dcb432299039d62);

#if _DEBUG_REFCOUNTS
        if (cache_frame_488429163d79c1979dcb432299039d62 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_488429163d79c1979dcb432299039d62 = MAKE_FUNCTION_FRAME(tstate, codeobj_488429163d79c1979dcb432299039d62, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_488429163d79c1979dcb432299039d62->m_type_description == NULL);
    frame_488429163d79c1979dcb432299039d62 = cache_frame_488429163d79c1979dcb432299039d62;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_488429163d79c1979dcb432299039d62);
    assert(Py_REFCNT(frame_488429163d79c1979dcb432299039d62) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_newResolution);
        tmp_ass_subvalue_1 = par_newResolution;
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_newResolution);
        tmp_ass_subvalue_2 = par_newResolution;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[50]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_488429163d79c1979dcb432299039d62->m_frame.f_lineno = 191;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[102]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_488429163d79c1979dcb432299039d62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_488429163d79c1979dcb432299039d62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_488429163d79c1979dcb432299039d62, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_488429163d79c1979dcb432299039d62,
        type_description_1,
        par_self,
        par_newResolution
    );


    // Release cached frame if used for exception.
    if (frame_488429163d79c1979dcb432299039d62 == cache_frame_488429163d79c1979dcb432299039d62) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_488429163d79c1979dcb432299039d62);
        cache_frame_488429163d79c1979dcb432299039d62 = NULL;
    }

    assertFrameObject(frame_488429163d79c1979dcb432299039d62);

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
    CHECK_OBJECT(par_newResolution);
    Py_DECREF(par_newResolution);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newResolution);
    Py_DECREF(par_newResolution);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__12__updateLabelText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2f103d468132ee803a804c10a4e5e5ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2f103d468132ee803a804c10a4e5e5ef = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f103d468132ee803a804c10a4e5e5ef)) {
        Py_XDECREF(cache_frame_2f103d468132ee803a804c10a4e5e5ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f103d468132ee803a804c10a4e5e5ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f103d468132ee803a804c10a4e5e5ef = MAKE_FUNCTION_FRAME(tstate, codeobj_2f103d468132ee803a804c10a4e5e5ef, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f103d468132ee803a804c10a4e5e5ef->m_type_description == NULL);
    frame_2f103d468132ee803a804c10a4e5e5ef = cache_frame_2f103d468132ee803a804c10a4e5e5ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f103d468132ee803a804c10a4e5e5ef);
    assert(Py_REFCNT(frame_2f103d468132ee803a804c10a4e5e5ef) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[54]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f103d468132ee803a804c10a4e5e5ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f103d468132ee803a804c10a4e5e5ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f103d468132ee803a804c10a4e5e5ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f103d468132ee803a804c10a4e5e5ef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2f103d468132ee803a804c10a4e5e5ef == cache_frame_2f103d468132ee803a804c10a4e5e5ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f103d468132ee803a804c10a4e5e5ef);
        cache_frame_2f103d468132ee803a804c10a4e5e5ef = NULL;
    }

    assertFrameObject(frame_2f103d468132ee803a804c10a4e5e5ef);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__13__updateValidate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4f0a7f99ed7cdaba4c3630fe8174e555;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555)) {
        Py_XDECREF(cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555 = MAKE_FUNCTION_FRAME(tstate, codeobj_4f0a7f99ed7cdaba4c3630fe8174e555, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555->m_type_description == NULL);
    frame_4f0a7f99ed7cdaba4c3630fe8174e555 = cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4f0a7f99ed7cdaba4c3630fe8174e555);
    assert(Py_REFCNT(frame_4f0a7f99ed7cdaba4c3630fe8174e555) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[43];
        tmp_dict_value_1 = mod_consts[44];
        tmp_kw_call_value_0_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_subscript_value_1 = mod_consts[10];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_subscript_value_2 = mod_consts[12];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[45];
            tmp_dict_value_1 = mod_consts[25];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = mod_consts[25];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_4f0a7f99ed7cdaba4c3630fe8174e555->m_frame.f_lineno = 197;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_3 = mod_consts[10];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[69]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_4 = mod_consts[10];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[79]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[101];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_subscript_value_5 = mod_consts[12];
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[79]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[106];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_subscript_value_6 = mod_consts[12];
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[91]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f0a7f99ed7cdaba4c3630fe8174e555, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f0a7f99ed7cdaba4c3630fe8174e555->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f0a7f99ed7cdaba4c3630fe8174e555, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f0a7f99ed7cdaba4c3630fe8174e555,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4f0a7f99ed7cdaba4c3630fe8174e555 == cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555);
        cache_frame_4f0a7f99ed7cdaba4c3630fe8174e555 = NULL;
    }

    assertFrameObject(frame_4f0a7f99ed7cdaba4c3630fe8174e555);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__14__scaleCommand(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_strVal = python_pars[1];
    struct Nuitka_FrameObject *frame_0bf52388b29b48f52dec7dae44fcb089;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0bf52388b29b48f52dec7dae44fcb089 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bf52388b29b48f52dec7dae44fcb089)) {
        Py_XDECREF(cache_frame_0bf52388b29b48f52dec7dae44fcb089);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bf52388b29b48f52dec7dae44fcb089 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bf52388b29b48f52dec7dae44fcb089 = MAKE_FUNCTION_FRAME(tstate, codeobj_0bf52388b29b48f52dec7dae44fcb089, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bf52388b29b48f52dec7dae44fcb089->m_type_description == NULL);
    frame_0bf52388b29b48f52dec7dae44fcb089 = cache_frame_0bf52388b29b48f52dec7dae44fcb089;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0bf52388b29b48f52dec7dae44fcb089);
    assert(Py_REFCNT(frame_0bf52388b29b48f52dec7dae44fcb089) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_strVal);
        tmp_args_element_value_2 = par_strVal;
        frame_0bf52388b29b48f52dec7dae44fcb089->m_frame.f_lineno = 212;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0bf52388b29b48f52dec7dae44fcb089->m_frame.f_lineno = 212;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0bf52388b29b48f52dec7dae44fcb089, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bf52388b29b48f52dec7dae44fcb089->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bf52388b29b48f52dec7dae44fcb089, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bf52388b29b48f52dec7dae44fcb089,
        type_description_1,
        par_self,
        par_strVal
    );


    // Release cached frame if used for exception.
    if (frame_0bf52388b29b48f52dec7dae44fcb089 == cache_frame_0bf52388b29b48f52dec7dae44fcb089) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bf52388b29b48f52dec7dae44fcb089);
        cache_frame_0bf52388b29b48f52dec7dae44fcb089 = NULL;
    }

    assertFrameObject(frame_0bf52388b29b48f52dec7dae44fcb089);

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
    CHECK_OBJECT(par_strVal);
    Py_DECREF(par_strVal);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_strVal);
    Py_DECREF(par_strVal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__15__entryCommand(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_767c234af673c63d32d4e3b729a006d2;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_767c234af673c63d32d4e3b729a006d2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_767c234af673c63d32d4e3b729a006d2)) {
        Py_XDECREF(cache_frame_767c234af673c63d32d4e3b729a006d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_767c234af673c63d32d4e3b729a006d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_767c234af673c63d32d4e3b729a006d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_767c234af673c63d32d4e3b729a006d2, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_767c234af673c63d32d4e3b729a006d2->m_type_description == NULL);
    frame_767c234af673c63d32d4e3b729a006d2 = cache_frame_767c234af673c63d32d4e3b729a006d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_767c234af673c63d32d4e3b729a006d2);
    assert(Py_REFCNT(frame_767c234af673c63d32d4e3b729a006d2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[37]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[111]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_767c234af673c63d32d4e3b729a006d2->m_frame.f_lineno = 223;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_767c234af673c63d32d4e3b729a006d2->m_frame.f_lineno = 223;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[112]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_1 = mod_consts[113];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 224;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_val);
        tmp_args_element_value_2 = var_val;
        frame_767c234af673c63d32d4e3b729a006d2->m_frame.f_lineno = 225;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[114]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_2 = mod_consts[113];
        tmp_dircall_arg2_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_call_result_3 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_767c234af673c63d32d4e3b729a006d2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_767c234af673c63d32d4e3b729a006d2, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 222;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_767c234af673c63d32d4e3b729a006d2->m_frame) frame_767c234af673c63d32d4e3b729a006d2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_no_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_767c234af673c63d32d4e3b729a006d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_767c234af673c63d32d4e3b729a006d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_767c234af673c63d32d4e3b729a006d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_767c234af673c63d32d4e3b729a006d2,
        type_description_1,
        par_self,
        par_event,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_767c234af673c63d32d4e3b729a006d2 == cache_frame_767c234af673c63d32d4e3b729a006d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_767c234af673c63d32d4e3b729a006d2);
        cache_frame_767c234af673c63d32d4e3b729a006d2 = NULL;
    }

    assertFrameObject(frame_767c234af673c63d32d4e3b729a006d2);

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
    Py_XDECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__16__setSigDigits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_sd = NULL;
    struct Nuitka_FrameObject *frame_568f0216b854da17dd146d4f173013c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_568f0216b854da17dd146d4f173013c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_568f0216b854da17dd146d4f173013c5)) {
        Py_XDECREF(cache_frame_568f0216b854da17dd146d4f173013c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_568f0216b854da17dd146d4f173013c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_568f0216b854da17dd146d4f173013c5 = MAKE_FUNCTION_FRAME(tstate, codeobj_568f0216b854da17dd146d4f173013c5, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_568f0216b854da17dd146d4f173013c5->m_type_description == NULL);
    frame_568f0216b854da17dd146d4f173013c5 = cache_frame_568f0216b854da17dd146d4f173013c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_568f0216b854da17dd146d4f173013c5);
    assert(Py_REFCNT(frame_568f0216b854da17dd146d4f173013c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[17];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_sd == NULL);
        var_sd = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_assattr_target_1;
        tmp_add_expr_left_2 = mod_consts[116];
        tmp_mod_expr_left_1 = mod_consts[117];
        CHECK_OBJECT(var_sd);
        tmp_mod_expr_right_1 = var_sd;
        tmp_add_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[118];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mod_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[24]);
        if (tmp_mod_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mod_expr_left_2);

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_left_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_568f0216b854da17dd146d4f173013c5->m_frame.f_lineno = 234;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_568f0216b854da17dd146d4f173013c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_568f0216b854da17dd146d4f173013c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_568f0216b854da17dd146d4f173013c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_568f0216b854da17dd146d4f173013c5,
        type_description_1,
        par_self,
        var_sd
    );


    // Release cached frame if used for exception.
    if (frame_568f0216b854da17dd146d4f173013c5 == cache_frame_568f0216b854da17dd146d4f173013c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_568f0216b854da17dd146d4f173013c5);
        cache_frame_568f0216b854da17dd146d4f173013c5 = NULL;
    }

    assertFrameObject(frame_568f0216b854da17dd146d4f173013c5);

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
    CHECK_OBJECT(var_sd);
    Py_DECREF(var_sd);
    var_sd = NULL;
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

    Py_XDECREF(var_sd);
    var_sd = NULL;
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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__17_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5843b379db40564d7355af51b561640a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5843b379db40564d7355af51b561640a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5843b379db40564d7355af51b561640a)) {
        Py_XDECREF(cache_frame_5843b379db40564d7355af51b561640a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5843b379db40564d7355af51b561640a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5843b379db40564d7355af51b561640a = MAKE_FUNCTION_FRAME(tstate, codeobj_5843b379db40564d7355af51b561640a, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5843b379db40564d7355af51b561640a->m_type_description == NULL);
    frame_5843b379db40564d7355af51b561640a = cache_frame_5843b379db40564d7355af51b561640a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5843b379db40564d7355af51b561640a);
    assert(Py_REFCNT(frame_5843b379db40564d7355af51b561640a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
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
        exception_tb = MAKE_TRACEBACK(frame_5843b379db40564d7355af51b561640a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5843b379db40564d7355af51b561640a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5843b379db40564d7355af51b561640a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5843b379db40564d7355af51b561640a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5843b379db40564d7355af51b561640a == cache_frame_5843b379db40564d7355af51b561640a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5843b379db40564d7355af51b561640a);
        cache_frame_5843b379db40564d7355af51b561640a = NULL;
    }

    assertFrameObject(frame_5843b379db40564d7355af51b561640a);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__18_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newVal = python_pars[1];
    PyObject *par_fCommand = python_pars[2];
    struct Nuitka_FrameObject *frame_f06294e9b10be349725ed55e39b0397d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f06294e9b10be349725ed55e39b0397d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f06294e9b10be349725ed55e39b0397d)) {
        Py_XDECREF(cache_frame_f06294e9b10be349725ed55e39b0397d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f06294e9b10be349725ed55e39b0397d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f06294e9b10be349725ed55e39b0397d = MAKE_FUNCTION_FRAME(tstate, codeobj_f06294e9b10be349725ed55e39b0397d, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f06294e9b10be349725ed55e39b0397d->m_type_description == NULL);
    frame_f06294e9b10be349725ed55e39b0397d = cache_frame_f06294e9b10be349725ed55e39b0397d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f06294e9b10be349725ed55e39b0397d);
    assert(Py_REFCNT(frame_f06294e9b10be349725ed55e39b0397d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_newVal);
        tmp_cmp_expr_left_2 = par_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_3 = mod_consts[10];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_newVal;
            assert(old != NULL);
            par_newVal = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_4 = mod_consts[12];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_newVal);
        tmp_cmp_expr_left_4 = par_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_5 = mod_consts[12];
        tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_6 = mod_consts[12];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_newVal;
            assert(old != NULL);
            par_newVal = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_subscript_value_7 = mod_consts[84];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newVal);
        tmp_truediv_expr_left_1 = par_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_subscript_value_8 = mod_consts[84];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f06294e9b10be349725ed55e39b0397d->m_frame.f_lineno = 249;
        tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_subscript_value_9 = mod_consts[84];
        tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_newVal;
            assert(old != NULL);
            par_newVal = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_newVal);
        tmp_assattr_value_1 = par_newVal;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[79]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newVal);
        tmp_args_element_value_2 = par_newVal;
        frame_f06294e9b10be349725ed55e39b0397d->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[37]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[38]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[24]);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[1]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f06294e9b10be349725ed55e39b0397d->m_frame.f_lineno = 256;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[50]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f06294e9b10be349725ed55e39b0397d->m_frame.f_lineno = 257;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[102]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_fCommand);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_fCommand);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_subscript_value_10 = mod_consts[120];
        tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_10);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_6);
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_subscript_value_11 = mod_consts[120];
        tmp_called_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_11);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newVal);
        tmp_args_element_value_4 = par_newVal;
        frame_f06294e9b10be349725ed55e39b0397d->m_frame.f_lineno = 261;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f06294e9b10be349725ed55e39b0397d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f06294e9b10be349725ed55e39b0397d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f06294e9b10be349725ed55e39b0397d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f06294e9b10be349725ed55e39b0397d,
        type_description_1,
        par_self,
        par_newVal,
        par_fCommand
    );


    // Release cached frame if used for exception.
    if (frame_f06294e9b10be349725ed55e39b0397d == cache_frame_f06294e9b10be349725ed55e39b0397d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f06294e9b10be349725ed55e39b0397d);
        cache_frame_f06294e9b10be349725ed55e39b0397d = NULL;
    }

    assertFrameObject(frame_f06294e9b10be349725ed55e39b0397d);

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
    CHECK_OBJECT(par_newVal);
    Py_DECREF(par_newVal);
    par_newVal = NULL;
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

    Py_XDECREF(par_newVal);
    par_newVal = NULL;
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
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__21___onPress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_62c9e96f3c4ef9f9ca4ea0205cc58b69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69)) {
        Py_XDECREF(cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 = MAKE_FUNCTION_FRAME(tstate, codeobj_62c9e96f3c4ef9f9ca4ea0205cc58b69, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69->m_type_description == NULL);
    frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 = cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_62c9e96f3c4ef9f9ca4ea0205cc58b69);
    assert(Py_REFCNT(frame_62c9e96f3c4ef9f9ca4ea0205cc58b69) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[121];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 273;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[121];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_3 = mod_consts[113];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[122];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62c9e96f3c4ef9f9ca4ea0205cc58b69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62c9e96f3c4ef9f9ca4ea0205cc58b69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62c9e96f3c4ef9f9ca4ea0205cc58b69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62c9e96f3c4ef9f9ca4ea0205cc58b69,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 == cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69);
        cache_frame_62c9e96f3c4ef9f9ca4ea0205cc58b69 = NULL;
    }

    assertFrameObject(frame_62c9e96f3c4ef9f9ca4ea0205cc58b69);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__23___onRelease(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_6e8e8cd82ce5733fcb88af7d7326057f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6e8e8cd82ce5733fcb88af7d7326057f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e8e8cd82ce5733fcb88af7d7326057f)) {
        Py_XDECREF(cache_frame_6e8e8cd82ce5733fcb88af7d7326057f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e8e8cd82ce5733fcb88af7d7326057f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e8e8cd82ce5733fcb88af7d7326057f = MAKE_FUNCTION_FRAME(tstate, codeobj_6e8e8cd82ce5733fcb88af7d7326057f, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e8e8cd82ce5733fcb88af7d7326057f->m_type_description == NULL);
    frame_6e8e8cd82ce5733fcb88af7d7326057f = cache_frame_6e8e8cd82ce5733fcb88af7d7326057f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e8e8cd82ce5733fcb88af7d7326057f);
    assert(Py_REFCNT(frame_6e8e8cd82ce5733fcb88af7d7326057f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[25];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[123];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[123];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_3 = mod_consts[113];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_6e8e8cd82ce5733fcb88af7d7326057f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e8e8cd82ce5733fcb88af7d7326057f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e8e8cd82ce5733fcb88af7d7326057f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e8e8cd82ce5733fcb88af7d7326057f,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_6e8e8cd82ce5733fcb88af7d7326057f == cache_frame_6e8e8cd82ce5733fcb88af7d7326057f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e8e8cd82ce5733fcb88af7d7326057f);
        cache_frame_6e8e8cd82ce5733fcb88af7d7326057f = NULL;
    }

    assertFrameObject(frame_6e8e8cd82ce5733fcb88af7d7326057f);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__25___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_DEFAULT_VALUE = NULL;
    PyObject *var_DEFAULT_LABELS = NULL;
    PyObject *var_INITOPT = NULL;
    PyObject *var_optiondefs = NULL;
    PyObject *var_interior = NULL;
    PyObject *var_menubar = NULL;
    PyObject *var_dismissCommand = NULL;
    PyObject *var_index = NULL;
    PyObject *var_f = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5b39f2b2a00fb02c981c0f65bc134b7d;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d)) {
        Py_XDECREF(cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d = MAKE_FUNCTION_FRAME(tstate, codeobj_5b39f2b2a00fb02c981c0f65bc134b7d, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_type_description == NULL);
    frame_5b39f2b2a00fb02c981c0f65bc134b7d = cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b39f2b2a00fb02c981c0f65bc134b7d);
    assert(Py_REFCNT(frame_5b39f2b2a00fb02c981c0f65bc134b7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[2]);
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_key_value_1 = mod_consts[124];
        tmp_default_value_1 = mod_consts[122];
        tmp_mult_expr_right_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            tmp_mult_expr_right_1 = tmp_default_value_1;
            Py_INCREF(tmp_mult_expr_right_1);
        }
        assert(!(tmp_mult_expr_right_1 == NULL));
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_DEFAULT_VALUE == NULL);
        var_DEFAULT_VALUE = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_dict_arg_value_2;
            PyObject *tmp_key_value_2;
            PyObject *tmp_default_value_2;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooNooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_kw);
            tmp_dict_arg_value_2 = par_kw;
            tmp_key_value_2 = mod_consts[124];
            tmp_default_value_2 = mod_consts[122];
            tmp_args_element_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
            if (tmp_args_element_value_1 == NULL) {
                tmp_args_element_value_1 = tmp_default_value_2;
                Py_INCREF(tmp_args_element_value_1);
            }
            assert(!(tmp_args_element_value_1 == NULL));
            frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 300;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooNooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooNooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooNooooooooo";
                    exception_lineno = 300;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_6;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mod_expr_left_1 = mod_consts[126];
            CHECK_OBJECT(outline_0_var_x);
            tmp_mod_expr_right_1 = outline_0_var_x;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooNooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooNooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
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

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 300;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_DEFAULT_LABELS == NULL);
        var_DEFAULT_LABELS = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_INITOPT == NULL);
        var_INITOPT = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[124];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[122];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_INITOPT);
        tmp_tuple_element_2 = var_INITOPT;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[127];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooNooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_3 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 2, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[1];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_DEFAULT_VALUE);
            tmp_tuple_element_4 = var_DEFAULT_VALUE;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_4 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_assign_source_8, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 6, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[130];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                CHECK_OBJECT(var_DEFAULT_LABELS);
                tmp_tuple_element_5 = var_DEFAULT_LABELS;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[131]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 315;
                    type_description_1 = "oooNooooooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 7, tmp_tuple_element_1);
            tmp_tuple_element_6 = mod_consts[132];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[25];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_6 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_assign_source_8, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_2 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_3 = var_optiondefs;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[20],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[133]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_5 = par_parent;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[22],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 325;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[27]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interior == NULL);
        var_interior = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 327;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[135], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 330;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[136]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[137], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[138];
        tmp_kw_call_arg_value_1_1 = mod_consts[33];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 332;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[139]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 332;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_tuple_element_7 = var_interior;
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_7);
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[137]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 333;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 331;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[140]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_menubar == NULL);
        var_menubar = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_8 = var_menubar;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[51]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 334;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 334;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_menubar);
        tmp_called_instance_5 = var_menubar;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 337;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_5,
            mod_consts[143],
            &PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_9 = var_menubar;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[145]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[146];
        CHECK_OBJECT(par_self);
        tmp_tuple_element_8 = par_self;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_8);


        tmp_kw_call_value_1_1 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda(tmp_defaults_1);

        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 338;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};
            tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_5, mod_consts[149], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_subscript_value_2 = mod_consts[132];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 342;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[151]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dismissCommand == NULL);
        var_dismissCommand = tmp_assign_source_11;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[152]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dismissCommand == NULL);
        var_dismissCommand = tmp_assign_source_12;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_13 = var_menubar;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[145]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[153];
        CHECK_OBJECT(var_dismissCommand);
        tmp_kw_call_value_1_2 = var_dismissCommand;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};
            tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_6, mod_consts[154], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_menubar);
        tmp_called_instance_6 = var_menubar;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 350;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_6,
            mod_consts[143],
            &PyTuple_GET_ITEM(mod_consts[155], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 351;
        tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[157], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[157]);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 352;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[158], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_15 = var_menubar;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[145]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[159];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[157]);
        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 356;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[160]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_1_3);

            exception_lineno = 357;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 353;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_1};
            tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_8, mod_consts[161], kw_values, mod_consts[162]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_1_3);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[163], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_subscript_value_3 = mod_consts[124];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 360;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNooooooooo";
                exception_lineno = 360;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_15;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 363;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_19 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[31]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_2 = mod_consts[165];
        CHECK_OBJECT(var_index);
        tmp_mod_expr_right_2 = var_index;
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 364;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_1_2 = mod_consts[33];
        tmp_kw_call_arg_value_2_2 = mod_consts[166];
        tmp_kw_call_arg_value_3_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_kw_call_arg_value_3_2 == NULL)) {
            tmp_kw_call_arg_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 364;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        if (var_interior == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 365;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_9 = var_interior;
        tmp_kw_call_arg_value_4_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_2, 0, tmp_tuple_element_9);
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 365;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[135]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 365;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_4 = var_index;
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 365;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_23 = par_self;
        tmp_subscript_value_5 = mod_consts[130];
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_5);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 366;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_6 = var_index;
        tmp_kw_call_dict_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 366;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 363;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[167]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 368;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_tuple_element_10 = par_self;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_10);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_10 = var_index;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_10);


        tmp_ass_subvalue_1 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda(tmp_defaults_2);

        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_1 = var_f;
        tmp_ass_subscript_1 = mod_consts[120];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 369;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_list_element_1 = par_self;
        tmp_ass_subvalue_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_list_element_1);
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_2 = var_f;
        tmp_ass_subscript_2 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_assattr_target_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 371;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_24 = par_self;
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[168]);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_assattr_target_5 = var_f;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[112], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_assattr_target_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 372;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_25 = par_self;
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[169]);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_assattr_target_6 = var_f;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[114], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 373;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_26 = par_self;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[170]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_3 = var_f;
        tmp_ass_subscript_3 = mod_consts[121];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 374;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_27 = par_self;
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[171]);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_4 = var_f;
        tmp_ass_subscript_4 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(var_f);
        tmp_expression_value_28 = var_f;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[51]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_29 = par_self;
        tmp_subscript_value_7 = mod_consts[127];
        tmp_kw_call_value_0_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_7);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 375;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_1_4 = mod_consts[122];
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 375;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 375;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4, tmp_kw_call_value_2_2};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 376;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[163]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[172]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_8 = var_f;
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 376;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooNooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_11);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 360;
        type_description_1 = "oooNooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 379;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = par_self;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[38]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 379;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = par_self;
        tmp_subscript_value_8 = mod_consts[1];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_8);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 379;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 379;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 382;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_self;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[94]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 382;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame.f_lineno = 382;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooNooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b39f2b2a00fb02c981c0f65bc134b7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b39f2b2a00fb02c981c0f65bc134b7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b39f2b2a00fb02c981c0f65bc134b7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b39f2b2a00fb02c981c0f65bc134b7d,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        NULL,
        var_DEFAULT_VALUE,
        var_DEFAULT_LABELS,
        var_INITOPT,
        var_optiondefs,
        var_interior,
        var_menubar,
        var_dismissCommand,
        var_index,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_5b39f2b2a00fb02c981c0f65bc134b7d == cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d);
        cache_frame_5b39f2b2a00fb02c981c0f65bc134b7d = NULL;
    }

    assertFrameObject(frame_5b39f2b2a00fb02c981c0f65bc134b7d);

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
    CHECK_OBJECT(var_DEFAULT_VALUE);
    Py_DECREF(var_DEFAULT_VALUE);
    var_DEFAULT_VALUE = NULL;
    CHECK_OBJECT(var_DEFAULT_LABELS);
    Py_DECREF(var_DEFAULT_LABELS);
    var_DEFAULT_LABELS = NULL;
    CHECK_OBJECT(var_INITOPT);
    Py_DECREF(var_INITOPT);
    var_INITOPT = NULL;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
    CHECK_OBJECT(var_menubar);
    Py_DECREF(var_menubar);
    var_menubar = NULL;
    CHECK_OBJECT(var_dismissCommand);
    Py_DECREF(var_dismissCommand);
    var_dismissCommand = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_DEFAULT_VALUE);
    var_DEFAULT_VALUE = NULL;
    Py_XDECREF(var_DEFAULT_LABELS);
    var_DEFAULT_LABELS = NULL;
    Py_XDECREF(var_INITOPT);
    var_INITOPT = NULL;
    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
    Py_XDECREF(var_menubar);
    var_menubar = NULL;
    Py_XDECREF(var_dismissCommand);
    var_dismissCommand = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_c1cace694b813f157df205b38275c656;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1cace694b813f157df205b38275c656 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1cace694b813f157df205b38275c656)) {
        Py_XDECREF(cache_frame_c1cace694b813f157df205b38275c656);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1cace694b813f157df205b38275c656 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1cace694b813f157df205b38275c656 = MAKE_FUNCTION_FRAME(tstate, codeobj_c1cace694b813f157df205b38275c656, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1cace694b813f157df205b38275c656->m_type_description == NULL);
    frame_c1cace694b813f157df205b38275c656 = cache_frame_c1cace694b813f157df205b38275c656;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c1cace694b813f157df205b38275c656);
    assert(Py_REFCNT(frame_c1cace694b813f157df205b38275c656) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_c1cace694b813f157df205b38275c656->m_frame.f_lineno = 341;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[174]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_c1cace694b813f157df205b38275c656, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1cace694b813f157df205b38275c656->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1cace694b813f157df205b38275c656, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1cace694b813f157df205b38275c656,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_c1cace694b813f157df205b38275c656 == cache_frame_c1cace694b813f157df205b38275c656) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1cace694b813f157df205b38275c656);
        cache_frame_c1cace694b813f157df205b38275c656 = NULL;
    }

    assertFrameObject(frame_c1cace694b813f157df205b38275c656);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_i = python_pars[2];
    struct Nuitka_FrameObject *frame_54758c3bd3a4bf0271771c145da8ae7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54758c3bd3a4bf0271771c145da8ae7b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54758c3bd3a4bf0271771c145da8ae7b)) {
        Py_XDECREF(cache_frame_54758c3bd3a4bf0271771c145da8ae7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54758c3bd3a4bf0271771c145da8ae7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54758c3bd3a4bf0271771c145da8ae7b = MAKE_FUNCTION_FRAME(tstate, codeobj_54758c3bd3a4bf0271771c145da8ae7b, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54758c3bd3a4bf0271771c145da8ae7b->m_type_description == NULL);
    frame_54758c3bd3a4bf0271771c145da8ae7b = cache_frame_54758c3bd3a4bf0271771c145da8ae7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_54758c3bd3a4bf0271771c145da8ae7b);
    assert(Py_REFCNT(frame_54758c3bd3a4bf0271771c145da8ae7b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_i);
        tmp_args_element_value_1 = par_i;
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        frame_54758c3bd3a4bf0271771c145da8ae7b->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[175],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54758c3bd3a4bf0271771c145da8ae7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54758c3bd3a4bf0271771c145da8ae7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54758c3bd3a4bf0271771c145da8ae7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54758c3bd3a4bf0271771c145da8ae7b,
        type_description_1,
        par_val,
        par_s,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_54758c3bd3a4bf0271771c145da8ae7b == cache_frame_54758c3bd3a4bf0271771c145da8ae7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54758c3bd3a4bf0271771c145da8ae7b);
        cache_frame_54758c3bd3a4bf0271771c145da8ae7b = NULL;
    }

    assertFrameObject(frame_54758c3bd3a4bf0271771c145da8ae7b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__26__updateLabels(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f54ebcee105adf28921b4abfac485b66;
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
    static struct Nuitka_FrameObject *cache_frame_f54ebcee105adf28921b4abfac485b66 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f54ebcee105adf28921b4abfac485b66)) {
        Py_XDECREF(cache_frame_f54ebcee105adf28921b4abfac485b66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f54ebcee105adf28921b4abfac485b66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f54ebcee105adf28921b4abfac485b66 = MAKE_FUNCTION_FRAME(tstate, codeobj_f54ebcee105adf28921b4abfac485b66, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f54ebcee105adf28921b4abfac485b66->m_type_description == NULL);
    frame_f54ebcee105adf28921b4abfac485b66 = cache_frame_f54ebcee105adf28921b4abfac485b66;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f54ebcee105adf28921b4abfac485b66);
    assert(Py_REFCNT(frame_f54ebcee105adf28921b4abfac485b66) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[130];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[124];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f54ebcee105adf28921b4abfac485b66->m_frame.f_lineno = 386;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
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
                exception_lineno = 386;
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
            PyObject *old = var_index;
            var_index = tmp_assign_source_3;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_subscript_value_3 = mod_consts[130];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_4 = var_index;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[163]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_5 = var_index;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 386;
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f54ebcee105adf28921b4abfac485b66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f54ebcee105adf28921b4abfac485b66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f54ebcee105adf28921b4abfac485b66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f54ebcee105adf28921b4abfac485b66,
        type_description_1,
        par_self,
        var_index
    );


    // Release cached frame if used for exception.
    if (frame_f54ebcee105adf28921b4abfac485b66 == cache_frame_f54ebcee105adf28921b4abfac485b66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f54ebcee105adf28921b4abfac485b66);
        cache_frame_f54ebcee105adf28921b4abfac485b66 = NULL;
    }

    assertFrameObject(frame_f54ebcee105adf28921b4abfac485b66);

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
    Py_XDECREF(var_index);
    var_index = NULL;
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

    Py_XDECREF(var_index);
    var_index = NULL;
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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d48f385d74b22ea00a85640f51697835;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d48f385d74b22ea00a85640f51697835 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d48f385d74b22ea00a85640f51697835)) {
        Py_XDECREF(cache_frame_d48f385d74b22ea00a85640f51697835);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d48f385d74b22ea00a85640f51697835 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d48f385d74b22ea00a85640f51697835 = MAKE_FUNCTION_FRAME(tstate, codeobj_d48f385d74b22ea00a85640f51697835, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d48f385d74b22ea00a85640f51697835->m_type_description == NULL);
    frame_d48f385d74b22ea00a85640f51697835 = cache_frame_d48f385d74b22ea00a85640f51697835;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d48f385d74b22ea00a85640f51697835);
    assert(Py_REFCNT(frame_d48f385d74b22ea00a85640f51697835) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[157]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[111]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d48f385d74b22ea00a85640f51697835->m_frame.f_lineno = 390;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 390;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[137]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[28]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d48f385d74b22ea00a85640f51697835->m_frame.f_lineno = 391;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[176]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[137]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[28]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d48f385d74b22ea00a85640f51697835->m_frame.f_lineno = 393;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[176]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_d48f385d74b22ea00a85640f51697835, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d48f385d74b22ea00a85640f51697835->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d48f385d74b22ea00a85640f51697835, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d48f385d74b22ea00a85640f51697835,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d48f385d74b22ea00a85640f51697835 == cache_frame_d48f385d74b22ea00a85640f51697835) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d48f385d74b22ea00a85640f51697835);
        cache_frame_d48f385d74b22ea00a85640f51697835 = NULL;
    }

    assertFrameObject(frame_d48f385d74b22ea00a85640f51697835);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__28_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f79c4c13b305e6c1e1616f5bc0b39e10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10)) {
        Py_XDECREF(cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10 = MAKE_FUNCTION_FRAME(tstate, codeobj_f79c4c13b305e6c1e1616f5bc0b39e10, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10->m_type_description == NULL);
    frame_f79c4c13b305e6c1e1616f5bc0b39e10 = cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f79c4c13b305e6c1e1616f5bc0b39e10);
    assert(Py_REFCNT(frame_f79c4c13b305e6c1e1616f5bc0b39e10) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[135]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
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
        exception_tb = MAKE_TRACEBACK(frame_f79c4c13b305e6c1e1616f5bc0b39e10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f79c4c13b305e6c1e1616f5bc0b39e10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f79c4c13b305e6c1e1616f5bc0b39e10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f79c4c13b305e6c1e1616f5bc0b39e10,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f79c4c13b305e6c1e1616f5bc0b39e10 == cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10);
        cache_frame_f79c4c13b305e6c1e1616f5bc0b39e10 = NULL;
    }

    assertFrameObject(frame_f79c4c13b305e6c1e1616f5bc0b39e10);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__29_getAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_4fde92ab7bbfedfc656eff0c460e9307;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4fde92ab7bbfedfc656eff0c460e9307 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4fde92ab7bbfedfc656eff0c460e9307)) {
        Py_XDECREF(cache_frame_4fde92ab7bbfedfc656eff0c460e9307);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fde92ab7bbfedfc656eff0c460e9307 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fde92ab7bbfedfc656eff0c460e9307 = MAKE_FUNCTION_FRAME(tstate, codeobj_4fde92ab7bbfedfc656eff0c460e9307, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fde92ab7bbfedfc656eff0c460e9307->m_type_description == NULL);
    frame_4fde92ab7bbfedfc656eff0c460e9307 = cache_frame_4fde92ab7bbfedfc656eff0c460e9307;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4fde92ab7bbfedfc656eff0c460e9307);
    assert(Py_REFCNT(frame_4fde92ab7bbfedfc656eff0c460e9307) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[135]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_4fde92ab7bbfedfc656eff0c460e9307, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fde92ab7bbfedfc656eff0c460e9307->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fde92ab7bbfedfc656eff0c460e9307, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fde92ab7bbfedfc656eff0c460e9307,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_4fde92ab7bbfedfc656eff0c460e9307 == cache_frame_4fde92ab7bbfedfc656eff0c460e9307) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fde92ab7bbfedfc656eff0c460e9307);
        cache_frame_4fde92ab7bbfedfc656eff0c460e9307 = NULL;
    }

    assertFrameObject(frame_4fde92ab7bbfedfc656eff0c460e9307);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__30_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_fCommand = python_pars[2];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8f256d6798573a40059610e5da6b04dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8f256d6798573a40059610e5da6b04dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f256d6798573a40059610e5da6b04dd)) {
        Py_XDECREF(cache_frame_8f256d6798573a40059610e5da6b04dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f256d6798573a40059610e5da6b04dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f256d6798573a40059610e5da6b04dd = MAKE_FUNCTION_FRAME(tstate, codeobj_8f256d6798573a40059610e5da6b04dd, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f256d6798573a40059610e5da6b04dd->m_type_description == NULL);
    frame_8f256d6798573a40059610e5da6b04dd = cache_frame_8f256d6798573a40059610e5da6b04dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8f256d6798573a40059610e5da6b04dd);
    assert(Py_REFCNT(frame_8f256d6798573a40059610e5da6b04dd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[124];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8f256d6798573a40059610e5da6b04dd->m_frame.f_lineno = 403;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 403;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[135]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[163]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_7 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = mod_consts[25];
        frame_8f256d6798573a40059610e5da6b04dd->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 403;
        type_description_1 = "oooo";
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
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_fCommand);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_fCommand);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_subscript_value_5 = mod_consts[120];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_subscript_value_6 = mod_consts[120];
        tmp_called_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[135]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8f256d6798573a40059610e5da6b04dd->m_frame.f_lineno = 408;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_8f256d6798573a40059610e5da6b04dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f256d6798573a40059610e5da6b04dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f256d6798573a40059610e5da6b04dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f256d6798573a40059610e5da6b04dd,
        type_description_1,
        par_self,
        par_value,
        par_fCommand,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_8f256d6798573a40059610e5da6b04dd == cache_frame_8f256d6798573a40059610e5da6b04dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f256d6798573a40059610e5da6b04dd);
        cache_frame_8f256d6798573a40059610e5da6b04dd = NULL;
    }

    assertFrameObject(frame_8f256d6798573a40059610e5da6b04dd);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__31_setAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_137363f6030d0bee8ade673007437c7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_137363f6030d0bee8ade673007437c7c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_137363f6030d0bee8ade673007437c7c)) {
        Py_XDECREF(cache_frame_137363f6030d0bee8ade673007437c7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_137363f6030d0bee8ade673007437c7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_137363f6030d0bee8ade673007437c7c = MAKE_FUNCTION_FRAME(tstate, codeobj_137363f6030d0bee8ade673007437c7c, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_137363f6030d0bee8ade673007437c7c->m_type_description == NULL);
    frame_137363f6030d0bee8ade673007437c7c = cache_frame_137363f6030d0bee8ade673007437c7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_137363f6030d0bee8ade673007437c7c);
    assert(Py_REFCNT(frame_137363f6030d0bee8ade673007437c7c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[163]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_137363f6030d0bee8ade673007437c7c->m_frame.f_lineno = 412;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
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
        exception_tb = MAKE_TRACEBACK(frame_137363f6030d0bee8ade673007437c7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_137363f6030d0bee8ade673007437c7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_137363f6030d0bee8ade673007437c7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_137363f6030d0bee8ade673007437c7c,
        type_description_1,
        par_self,
        par_index,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_137363f6030d0bee8ade673007437c7c == cache_frame_137363f6030d0bee8ade673007437c7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_137363f6030d0bee8ade673007437c7c);
        cache_frame_137363f6030d0bee8ade673007437c7c = NULL;
    }

    assertFrameObject(frame_137363f6030d0bee8ade673007437c7c);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_6e5bd1c18b0d8b1d76bfe030eeb2a381;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381)) {
        Py_XDECREF(cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e5bd1c18b0d8b1d76bfe030eeb2a381, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381->m_type_description == NULL);
    frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 = cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e5bd1c18b0d8b1d76bfe030eeb2a381);
    assert(Py_REFCNT(frame_6e5bd1c18b0d8b1d76bfe030eeb2a381) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[135]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_ass_subscript_1 = par_index;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[120];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_2 = mod_consts[120];
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[135]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6e5bd1c18b0d8b1d76bfe030eeb2a381->m_frame.f_lineno = 418;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_6e5bd1c18b0d8b1d76bfe030eeb2a381, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e5bd1c18b0d8b1d76bfe030eeb2a381->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e5bd1c18b0d8b1d76bfe030eeb2a381, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e5bd1c18b0d8b1d76bfe030eeb2a381,
        type_description_1,
        par_self,
        par_index,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 == cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381);
        cache_frame_6e5bd1c18b0d8b1d76bfe030eeb2a381 = NULL;
    }

    assertFrameObject(frame_6e5bd1c18b0d8b1d76bfe030eeb2a381);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__33_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e977c6003eea6b41fa875c5b8e336ca9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e977c6003eea6b41fa875c5b8e336ca9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e977c6003eea6b41fa875c5b8e336ca9)) {
        Py_XDECREF(cache_frame_e977c6003eea6b41fa875c5b8e336ca9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e977c6003eea6b41fa875c5b8e336ca9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e977c6003eea6b41fa875c5b8e336ca9 = MAKE_FUNCTION_FRAME(tstate, codeobj_e977c6003eea6b41fa875c5b8e336ca9, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e977c6003eea6b41fa875c5b8e336ca9->m_type_description == NULL);
    frame_e977c6003eea6b41fa875c5b8e336ca9 = cache_frame_e977c6003eea6b41fa875c5b8e336ca9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e977c6003eea6b41fa875c5b8e336ca9);
    assert(Py_REFCNT(frame_e977c6003eea6b41fa875c5b8e336ca9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e977c6003eea6b41fa875c5b8e336ca9->m_frame.f_lineno = 421;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
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
        exception_tb = MAKE_TRACEBACK(frame_e977c6003eea6b41fa875c5b8e336ca9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e977c6003eea6b41fa875c5b8e336ca9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e977c6003eea6b41fa875c5b8e336ca9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e977c6003eea6b41fa875c5b8e336ca9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e977c6003eea6b41fa875c5b8e336ca9 == cache_frame_e977c6003eea6b41fa875c5b8e336ca9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e977c6003eea6b41fa875c5b8e336ca9);
        cache_frame_e977c6003eea6b41fa875c5b8e336ca9 = NULL;
    }

    assertFrameObject(frame_e977c6003eea6b41fa875c5b8e336ca9);

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


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__34___onReturn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_esg = python_pars[1];
    struct Nuitka_FrameObject *frame_fcbe5f6854d6c978cfe6ba2713b1fcca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca)) {
        Py_XDECREF(cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca = MAKE_FUNCTION_FRAME(tstate, codeobj_fcbe5f6854d6c978cfe6ba2713b1fcca, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca->m_type_description == NULL);
    frame_fcbe5f6854d6c978cfe6ba2713b1fcca = cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fcbe5f6854d6c978cfe6ba2713b1fcca);
    assert(Py_REFCNT(frame_fcbe5f6854d6c978cfe6ba2713b1fcca) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[112]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_expression_value_2 = par_esg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fcbe5f6854d6c978cfe6ba2713b1fcca->m_frame.f_lineno = 425;
        tmp_dircall_arg2_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
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
        exception_tb = MAKE_TRACEBACK(frame_fcbe5f6854d6c978cfe6ba2713b1fcca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcbe5f6854d6c978cfe6ba2713b1fcca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcbe5f6854d6c978cfe6ba2713b1fcca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcbe5f6854d6c978cfe6ba2713b1fcca,
        type_description_1,
        par_self,
        par_esg
    );


    // Release cached frame if used for exception.
    if (frame_fcbe5f6854d6c978cfe6ba2713b1fcca == cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca);
        cache_frame_fcbe5f6854d6c978cfe6ba2713b1fcca = NULL;
    }

    assertFrameObject(frame_fcbe5f6854d6c978cfe6ba2713b1fcca);

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
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_esg = python_pars[1];
    struct Nuitka_FrameObject *frame_8779c29a046b5d387f3c2dd84ae9c4e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6)) {
        Py_XDECREF(cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_8779c29a046b5d387f3c2dd84ae9c4e6, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6->m_type_description == NULL);
    frame_8779c29a046b5d387f3c2dd84ae9c4e6 = cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8779c29a046b5d387f3c2dd84ae9c4e6);
    assert(Py_REFCNT(frame_8779c29a046b5d387f3c2dd84ae9c4e6) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[114]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_expression_value_2 = par_esg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 433;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8779c29a046b5d387f3c2dd84ae9c4e6->m_frame.f_lineno = 433;
        tmp_dircall_arg2_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 433;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
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
        exception_tb = MAKE_TRACEBACK(frame_8779c29a046b5d387f3c2dd84ae9c4e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8779c29a046b5d387f3c2dd84ae9c4e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8779c29a046b5d387f3c2dd84ae9c4e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8779c29a046b5d387f3c2dd84ae9c4e6,
        type_description_1,
        par_self,
        par_esg
    );


    // Release cached frame if used for exception.
    if (frame_8779c29a046b5d387f3c2dd84ae9c4e6 == cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6);
        cache_frame_8779c29a046b5d387f3c2dd84ae9c4e6 = NULL;
    }

    assertFrameObject(frame_8779c29a046b5d387f3c2dd84ae9c4e6);

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
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__38___onPress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_esg = python_pars[1];
    struct Nuitka_FrameObject *frame_dab5f2932e5931bb832068b65690621f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dab5f2932e5931bb832068b65690621f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dab5f2932e5931bb832068b65690621f)) {
        Py_XDECREF(cache_frame_dab5f2932e5931bb832068b65690621f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dab5f2932e5931bb832068b65690621f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dab5f2932e5931bb832068b65690621f = MAKE_FUNCTION_FRAME(tstate, codeobj_dab5f2932e5931bb832068b65690621f, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dab5f2932e5931bb832068b65690621f->m_type_description == NULL);
    frame_dab5f2932e5931bb832068b65690621f = cache_frame_dab5f2932e5931bb832068b65690621f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dab5f2932e5931bb832068b65690621f);
    assert(Py_REFCNT(frame_dab5f2932e5931bb832068b65690621f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[121];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 441;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[121];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_expression_value_3 = par_esg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 442;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dab5f2932e5931bb832068b65690621f->m_frame.f_lineno = 442;
        tmp_dircall_arg2_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 442;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
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
        exception_tb = MAKE_TRACEBACK(frame_dab5f2932e5931bb832068b65690621f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dab5f2932e5931bb832068b65690621f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dab5f2932e5931bb832068b65690621f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dab5f2932e5931bb832068b65690621f,
        type_description_1,
        par_self,
        par_esg
    );


    // Release cached frame if used for exception.
    if (frame_dab5f2932e5931bb832068b65690621f == cache_frame_dab5f2932e5931bb832068b65690621f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dab5f2932e5931bb832068b65690621f);
        cache_frame_dab5f2932e5931bb832068b65690621f = NULL;
    }

    assertFrameObject(frame_dab5f2932e5931bb832068b65690621f);

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
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__40___onRelease(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_esg = python_pars[1];
    struct Nuitka_FrameObject *frame_32ddeb93dd1aa2c94de43f434a1d6988;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_32ddeb93dd1aa2c94de43f434a1d6988 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32ddeb93dd1aa2c94de43f434a1d6988)) {
        Py_XDECREF(cache_frame_32ddeb93dd1aa2c94de43f434a1d6988);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32ddeb93dd1aa2c94de43f434a1d6988 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32ddeb93dd1aa2c94de43f434a1d6988 = MAKE_FUNCTION_FRAME(tstate, codeobj_32ddeb93dd1aa2c94de43f434a1d6988, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32ddeb93dd1aa2c94de43f434a1d6988->m_type_description == NULL);
    frame_32ddeb93dd1aa2c94de43f434a1d6988 = cache_frame_32ddeb93dd1aa2c94de43f434a1d6988;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_32ddeb93dd1aa2c94de43f434a1d6988);
    assert(Py_REFCNT(frame_32ddeb93dd1aa2c94de43f434a1d6988) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[123];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 450;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[123];
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_expression_value_3 = par_esg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 451;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_32ddeb93dd1aa2c94de43f434a1d6988->m_frame.f_lineno = 451;
        tmp_dircall_arg2_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 451;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
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
        exception_tb = MAKE_TRACEBACK(frame_32ddeb93dd1aa2c94de43f434a1d6988, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32ddeb93dd1aa2c94de43f434a1d6988->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32ddeb93dd1aa2c94de43f434a1d6988, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32ddeb93dd1aa2c94de43f434a1d6988,
        type_description_1,
        par_self,
        par_esg
    );


    // Release cached frame if used for exception.
    if (frame_32ddeb93dd1aa2c94de43f434a1d6988 == cache_frame_32ddeb93dd1aa2c94de43f434a1d6988) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32ddeb93dd1aa2c94de43f434a1d6988);
        cache_frame_32ddeb93dd1aa2c94de43f434a1d6988 = NULL;
    }

    assertFrameObject(frame_32ddeb93dd1aa2c94de43f434a1d6988);

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
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_nodePath = python_pars[0];
    PyObject *par_callback = python_pars[1];
    PyObject *var_setNodePathColor = NULL;
    PyObject *var_initColor = NULL;
    PyObject *var_esg = NULL;
    PyObject *var_menubar = NULL;
    PyObject *var_popupColorPicker = NULL;
    PyObject *var_printToLog = NULL;
    PyObject *var_dismissCommand = NULL;
    PyObject *var_onRelease = NULL;
    struct Nuitka_FrameObject *frame_73942832d560b955abd45ca14381bcbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_73942832d560b955abd45ca14381bcbc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_1 = par_nodePath;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_callback);
        tmp_tuple_element_1 = par_callback;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);


        tmp_assign_source_1 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor(tmp_defaults_1);

        assert(var_setNodePathColor == NULL);
        var_setNodePathColor = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_73942832d560b955abd45ca14381bcbc)) {
        Py_XDECREF(cache_frame_73942832d560b955abd45ca14381bcbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73942832d560b955abd45ca14381bcbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73942832d560b955abd45ca14381bcbc = MAKE_FUNCTION_FRAME(tstate, codeobj_73942832d560b955abd45ca14381bcbc, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_73942832d560b955abd45ca14381bcbc->m_type_description == NULL);
    frame_73942832d560b955abd45ca14381bcbc = cache_frame_73942832d560b955abd45ca14381bcbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_73942832d560b955abd45ca14381bcbc);
    assert(Py_REFCNT(frame_73942832d560b955abd45ca14381bcbc) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_1 = par_nodePath;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 465;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[180]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 465;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_2 = par_nodePath;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 466;
        tmp_mult_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[181]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[182];
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initColor == NULL);
        var_initColor = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 468;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[184]);

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initColor == NULL);
        var_initColor = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[185];
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_3 = par_nodePath;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 470;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[186]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[187];
        tmp_kw_call_value_2_1 = MAKE_LIST4(mod_consts[188]);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 473;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_initColor);
        tmp_expression_value_1 = var_initColor;
        tmp_subscript_value_1 = mod_consts[25];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 473;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 473;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 473;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 0, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[189]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_initColor);
            tmp_expression_value_2 = var_initColor;
            tmp_subscript_value_2 = mod_consts[122];
            tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 474;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 1, tmp_list_element_1);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[189]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_initColor);
            tmp_expression_value_3 = var_initColor;
            tmp_subscript_value_3 = mod_consts[18];
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 2);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 475;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 2, tmp_list_element_1);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[189]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_initColor);
            tmp_expression_value_4 = var_initColor;
            tmp_subscript_value_4 = mod_consts[190];
            tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 3);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 476;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_4_1 = mod_consts[191];
        tmp_kw_call_value_5_1 = mod_consts[122];
        tmp_kw_call_value_6_1 = mod_consts[122];
        CHECK_OBJECT(var_setNodePathColor);
        tmp_kw_call_value_7_1 = var_setNodePathColor;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 470;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[192]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_esg == NULL);
        var_esg = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[193];
        CHECK_OBJECT(var_esg);
        tmp_called_instance_5 = var_esg;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 483;
        tmp_called_instance_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[194],
            PyTuple_GET_ITEM(mod_consts[195], 0)
        );

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 483;
        tmp_ass_subscribed_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[194],
            PyTuple_GET_ITEM(mod_consts[196], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_esg);
        tmp_called_instance_6 = var_esg;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 486;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[194],
            PyTuple_GET_ITEM(mod_consts[195], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_menubar == NULL);
        var_menubar = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_menubar);
        tmp_called_instance_7 = var_menubar;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 487;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
            tstate,
            tmp_called_instance_7,
            mod_consts[197],
            &PyTuple_GET_ITEM(mod_consts[198], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_5 = var_menubar;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[145]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[199];
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_2 = par_nodePath;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);


        tmp_kw_call_value_1_2 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda(tmp_defaults_2);

        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 491;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_7, mod_consts[201], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_6 = var_menubar;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[145]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[202];
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_3 = par_nodePath;
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_3);


        tmp_kw_call_value_1_3 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda(tmp_defaults_3);

        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 496;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};
            tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_8, mod_consts[201], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_1_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_7 = var_menubar;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[145]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[203];
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_4 = par_nodePath;
        tmp_defaults_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_4);


        tmp_kw_call_value_1_4 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda(tmp_defaults_4);

        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 499;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};
            tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_9, mod_consts[201], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_value_1_4);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(var_esg);
        tmp_tuple_element_5 = var_esg;
        tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_5);


        tmp_assign_source_6 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker(tmp_defaults_5);

        assert(var_popupColorPicker == NULL);
        var_popupColorPicker = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_8 = var_menubar;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[145]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[206];
        CHECK_OBJECT(var_popupColorPicker);
        tmp_kw_call_value_1_5 = var_popupColorPicker;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 514;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};
            tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_10, mod_consts[201], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_6;
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_6 = par_nodePath;
        tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_6);


        tmp_assign_source_7 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog(tmp_defaults_6);

        assert(var_printToLog == NULL);
        var_printToLog = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_9 = var_menubar;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[145]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[209];
        CHECK_OBJECT(var_printToLog);
        tmp_kw_call_value_1_6 = var_printToLog;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 522;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};
            tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_11, mod_consts[201], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_esg);
        tmp_expression_value_10 = var_esg;
        tmp_subscript_value_5 = mod_consts[132];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_esg);
        tmp_expression_value_11 = var_esg;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[151]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dismissCommand == NULL);
        var_dismissCommand = tmp_assign_source_8;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_esg);
        tmp_expression_value_12 = var_esg;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[152]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dismissCommand == NULL);
        var_dismissCommand = tmp_assign_source_9;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        CHECK_OBJECT(var_menubar);
        tmp_expression_value_13 = var_menubar;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[145]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[153];
        CHECK_OBJECT(var_dismissCommand);
        tmp_kw_call_value_1_7 = var_dismissCommand;
        frame_73942832d560b955abd45ca14381bcbc->m_frame.f_lineno = 531;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};
            tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_12, mod_consts[154], kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_7;
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT(par_nodePath);
        tmp_tuple_element_7 = par_nodePath;
        tmp_defaults_7 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_7);


        tmp_assign_source_10 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease(tmp_defaults_7);

        assert(var_onRelease == NULL);
        var_onRelease = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_onRelease);
        tmp_ass_subvalue_2 = var_onRelease;
        CHECK_OBJECT(var_esg);
        tmp_ass_subscribed_2 = var_esg;
        tmp_ass_subscript_2 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73942832d560b955abd45ca14381bcbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73942832d560b955abd45ca14381bcbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73942832d560b955abd45ca14381bcbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73942832d560b955abd45ca14381bcbc,
        type_description_1,
        par_nodePath,
        par_callback,
        var_setNodePathColor,
        var_initColor,
        var_esg,
        var_menubar,
        var_popupColorPicker,
        var_printToLog,
        var_dismissCommand,
        var_onRelease
    );


    // Release cached frame if used for exception.
    if (frame_73942832d560b955abd45ca14381bcbc == cache_frame_73942832d560b955abd45ca14381bcbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_73942832d560b955abd45ca14381bcbc);
        cache_frame_73942832d560b955abd45ca14381bcbc = NULL;
    }

    assertFrameObject(frame_73942832d560b955abd45ca14381bcbc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_esg);
    tmp_return_value = var_esg;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_setNodePathColor);
    Py_DECREF(var_setNodePathColor);
    var_setNodePathColor = NULL;
    CHECK_OBJECT(var_initColor);
    Py_DECREF(var_initColor);
    var_initColor = NULL;
    CHECK_OBJECT(var_esg);
    Py_DECREF(var_esg);
    var_esg = NULL;
    CHECK_OBJECT(var_menubar);
    Py_DECREF(var_menubar);
    var_menubar = NULL;
    CHECK_OBJECT(var_popupColorPicker);
    Py_DECREF(var_popupColorPicker);
    var_popupColorPicker = NULL;
    CHECK_OBJECT(var_printToLog);
    Py_DECREF(var_printToLog);
    var_printToLog = NULL;
    CHECK_OBJECT(var_dismissCommand);
    Py_DECREF(var_dismissCommand);
    var_dismissCommand = NULL;
    CHECK_OBJECT(var_onRelease);
    Py_DECREF(var_onRelease);
    var_onRelease = NULL;
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

    CHECK_OBJECT(var_setNodePathColor);
    Py_DECREF(var_setNodePathColor);
    var_setNodePathColor = NULL;
    Py_XDECREF(var_initColor);
    var_initColor = NULL;
    Py_XDECREF(var_esg);
    var_esg = NULL;
    Py_XDECREF(var_menubar);
    var_menubar = NULL;
    Py_XDECREF(var_popupColorPicker);
    var_popupColorPicker = NULL;
    Py_XDECREF(var_printToLog);
    var_printToLog = NULL;
    Py_XDECREF(var_dismissCommand);
    var_dismissCommand = NULL;
    Py_XDECREF(var_onRelease);
    var_onRelease = NULL;
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
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_color = python_pars[0];
    PyObject *par_np = python_pars[1];
    PyObject *par_cb = python_pars[2];
    struct Nuitka_FrameObject *frame_067a1e5c39d8b038183496aa309f121f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_067a1e5c39d8b038183496aa309f121f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_067a1e5c39d8b038183496aa309f121f)) {
        Py_XDECREF(cache_frame_067a1e5c39d8b038183496aa309f121f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_067a1e5c39d8b038183496aa309f121f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_067a1e5c39d8b038183496aa309f121f = MAKE_FUNCTION_FRAME(tstate, codeobj_067a1e5c39d8b038183496aa309f121f, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_067a1e5c39d8b038183496aa309f121f->m_type_description == NULL);
    frame_067a1e5c39d8b038183496aa309f121f = cache_frame_067a1e5c39d8b038183496aa309f121f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_067a1e5c39d8b038183496aa309f121f);
    assert(Py_REFCNT(frame_067a1e5c39d8b038183496aa309f121f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_np);
        tmp_expression_value_1 = par_np;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[212]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_2 = par_color;
        tmp_subscript_value_1 = mod_consts[25];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[182];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_3 = par_color;
        tmp_subscript_value_2 = mod_consts[122];
        tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[182];
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_4 = par_color;
        tmp_subscript_value_3 = mod_consts[18];
        tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 2);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[182];
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_expression_value_5 = par_color;
        tmp_subscript_value_4 = mod_consts[190];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 3);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[182];
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 460;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_067a1e5c39d8b038183496aa309f121f->m_frame.f_lineno = 459;
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


            exception_lineno = 459;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cb);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cb);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_cb);
        tmp_called_value_2 = par_cb;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        frame_067a1e5c39d8b038183496aa309f121f->m_frame.f_lineno = 463;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_067a1e5c39d8b038183496aa309f121f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_067a1e5c39d8b038183496aa309f121f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_067a1e5c39d8b038183496aa309f121f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_067a1e5c39d8b038183496aa309f121f,
        type_description_1,
        par_color,
        par_np,
        par_cb
    );


    // Release cached frame if used for exception.
    if (frame_067a1e5c39d8b038183496aa309f121f == cache_frame_067a1e5c39d8b038183496aa309f121f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_067a1e5c39d8b038183496aa309f121f);
        cache_frame_067a1e5c39d8b038183496aa309f121f = NULL;
    }

    assertFrameObject(frame_067a1e5c39d8b038183496aa309f121f);

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
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);
    CHECK_OBJECT(par_cb);
    Py_DECREF(par_cb);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);
    CHECK_OBJECT(par_cb);
    Py_DECREF(par_cb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_np = python_pars[0];
    struct Nuitka_FrameObject *frame_1a6f18ad688d4b3bde37e97cc38a2dae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae)) {
        Py_XDECREF(cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae = MAKE_FUNCTION_FRAME(tstate, codeobj_1a6f18ad688d4b3bde37e97cc38a2dae, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae->m_type_description == NULL);
    frame_1a6f18ad688d4b3bde37e97cc38a2dae = cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a6f18ad688d4b3bde37e97cc38a2dae);
    assert(Py_REFCNT(frame_1a6f18ad688d4b3bde37e97cc38a2dae) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_np);
        tmp_called_instance_1 = par_np;
        frame_1a6f18ad688d4b3bde37e97cc38a2dae->m_frame.f_lineno = 493;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[213]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
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
        exception_tb = MAKE_TRACEBACK(frame_1a6f18ad688d4b3bde37e97cc38a2dae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a6f18ad688d4b3bde37e97cc38a2dae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a6f18ad688d4b3bde37e97cc38a2dae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a6f18ad688d4b3bde37e97cc38a2dae,
        type_description_1,
        par_np
    );


    // Release cached frame if used for exception.
    if (frame_1a6f18ad688d4b3bde37e97cc38a2dae == cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae);
        cache_frame_1a6f18ad688d4b3bde37e97cc38a2dae = NULL;
    }

    assertFrameObject(frame_1a6f18ad688d4b3bde37e97cc38a2dae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_np = python_pars[0];
    struct Nuitka_FrameObject *frame_a7bc82c37dbe3c6430350aae21bbc10c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7bc82c37dbe3c6430350aae21bbc10c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7bc82c37dbe3c6430350aae21bbc10c)) {
        Py_XDECREF(cache_frame_a7bc82c37dbe3c6430350aae21bbc10c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7bc82c37dbe3c6430350aae21bbc10c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7bc82c37dbe3c6430350aae21bbc10c = MAKE_FUNCTION_FRAME(tstate, codeobj_a7bc82c37dbe3c6430350aae21bbc10c, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7bc82c37dbe3c6430350aae21bbc10c->m_type_description == NULL);
    frame_a7bc82c37dbe3c6430350aae21bbc10c = cache_frame_a7bc82c37dbe3c6430350aae21bbc10c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a7bc82c37dbe3c6430350aae21bbc10c);
    assert(Py_REFCNT(frame_a7bc82c37dbe3c6430350aae21bbc10c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_np);
        tmp_called_instance_1 = par_np;
        frame_a7bc82c37dbe3c6430350aae21bbc10c->m_frame.f_lineno = 498;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[214],
            PyTuple_GET_ITEM(mod_consts[215], 0)
        );

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
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
        exception_tb = MAKE_TRACEBACK(frame_a7bc82c37dbe3c6430350aae21bbc10c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7bc82c37dbe3c6430350aae21bbc10c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7bc82c37dbe3c6430350aae21bbc10c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7bc82c37dbe3c6430350aae21bbc10c,
        type_description_1,
        par_np
    );


    // Release cached frame if used for exception.
    if (frame_a7bc82c37dbe3c6430350aae21bbc10c == cache_frame_a7bc82c37dbe3c6430350aae21bbc10c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7bc82c37dbe3c6430350aae21bbc10c);
        cache_frame_a7bc82c37dbe3c6430350aae21bbc10c = NULL;
    }

    assertFrameObject(frame_a7bc82c37dbe3c6430350aae21bbc10c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_np = python_pars[0];
    struct Nuitka_FrameObject *frame_cbfa4e4e0193f7770124736b7db75504;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cbfa4e4e0193f7770124736b7db75504 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cbfa4e4e0193f7770124736b7db75504)) {
        Py_XDECREF(cache_frame_cbfa4e4e0193f7770124736b7db75504);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbfa4e4e0193f7770124736b7db75504 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbfa4e4e0193f7770124736b7db75504 = MAKE_FUNCTION_FRAME(tstate, codeobj_cbfa4e4e0193f7770124736b7db75504, module_direct$tkwidgets$EntryScale, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbfa4e4e0193f7770124736b7db75504->m_type_description == NULL);
    frame_cbfa4e4e0193f7770124736b7db75504 = cache_frame_cbfa4e4e0193f7770124736b7db75504;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cbfa4e4e0193f7770124736b7db75504);
    assert(Py_REFCNT(frame_cbfa4e4e0193f7770124736b7db75504) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_np);
        tmp_called_instance_1 = par_np;
        frame_cbfa4e4e0193f7770124736b7db75504->m_frame.f_lineno = 502;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[216]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
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
        exception_tb = MAKE_TRACEBACK(frame_cbfa4e4e0193f7770124736b7db75504, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbfa4e4e0193f7770124736b7db75504->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbfa4e4e0193f7770124736b7db75504, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbfa4e4e0193f7770124736b7db75504,
        type_description_1,
        par_np
    );


    // Release cached frame if used for exception.
    if (frame_cbfa4e4e0193f7770124736b7db75504 == cache_frame_cbfa4e4e0193f7770124736b7db75504) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbfa4e4e0193f7770124736b7db75504);
        cache_frame_cbfa4e4e0193f7770124736b7db75504 = NULL;
    }

    assertFrameObject(frame_cbfa4e4e0193f7770124736b7db75504);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_np);
    Py_DECREF(par_np);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_esg = python_pars[0];
    PyObject *var_color = NULL;
    struct Nuitka_FrameObject *frame_ede9dcddb569bf65a13f10f2446c12b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ede9dcddb569bf65a13f10f2446c12b2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ede9dcddb569bf65a13f10f2446c12b2)) {
        Py_XDECREF(cache_frame_ede9dcddb569bf65a13f10f2446c12b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ede9dcddb569bf65a13f10f2446c12b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ede9dcddb569bf65a13f10f2446c12b2 = MAKE_FUNCTION_FRAME(tstate, codeobj_ede9dcddb569bf65a13f10f2446c12b2, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ede9dcddb569bf65a13f10f2446c12b2->m_type_description == NULL);
    frame_ede9dcddb569bf65a13f10f2446c12b2 = cache_frame_ede9dcddb569bf65a13f10f2446c12b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ede9dcddb569bf65a13f10f2446c12b2);
    assert(Py_REFCNT(frame_ede9dcddb569bf65a13f10f2446c12b2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_called_instance_1 = par_esg;
        frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 508;
        tmp_kw_call_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_esg);
        tmp_expression_value_3 = par_esg;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 510;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[219];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 510;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 507;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[220]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[25];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_color == NULL);
        var_color = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_color);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_color);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_esg);
        tmp_expression_value_4 = par_esg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_color);
        tmp_expression_value_5 = var_color;
        tmp_subscript_value_3 = mod_consts[25];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 512;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_color);
            tmp_expression_value_6 = var_color;
            tmp_subscript_value_4 = mod_consts[122];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_color);
            tmp_expression_value_7 = var_color;
            tmp_subscript_value_5 = mod_consts[18];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_esg);
            tmp_called_instance_2 = par_esg;
            frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 512;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_2,
                mod_consts[221],
                PyTuple_GET_ITEM(mod_consts[222], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame.f_lineno = 512;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
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
        exception_tb = MAKE_TRACEBACK(frame_ede9dcddb569bf65a13f10f2446c12b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ede9dcddb569bf65a13f10f2446c12b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ede9dcddb569bf65a13f10f2446c12b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ede9dcddb569bf65a13f10f2446c12b2,
        type_description_1,
        par_esg,
        var_color
    );


    // Release cached frame if used for exception.
    if (frame_ede9dcddb569bf65a13f10f2446c12b2 == cache_frame_ede9dcddb569bf65a13f10f2446c12b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ede9dcddb569bf65a13f10f2446c12b2);
        cache_frame_ede9dcddb569bf65a13f10f2446c12b2 = NULL;
    }

    assertFrameObject(frame_ede9dcddb569bf65a13f10f2446c12b2);

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
    CHECK_OBJECT(var_color);
    Py_DECREF(var_color);
    var_color = NULL;
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

    Py_XDECREF(var_color);
    var_color = NULL;
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
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_esg);
    Py_DECREF(par_esg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_nodePath = python_pars[0];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_79d4b4d718a5a435cb3971bd31a84abb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_79d4b4d718a5a435cb3971bd31a84abb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_79d4b4d718a5a435cb3971bd31a84abb)) {
        Py_XDECREF(cache_frame_79d4b4d718a5a435cb3971bd31a84abb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79d4b4d718a5a435cb3971bd31a84abb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79d4b4d718a5a435cb3971bd31a84abb = MAKE_FUNCTION_FRAME(tstate, codeobj_79d4b4d718a5a435cb3971bd31a84abb, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79d4b4d718a5a435cb3971bd31a84abb->m_type_description == NULL);
    frame_79d4b4d718a5a435cb3971bd31a84abb = cache_frame_79d4b4d718a5a435cb3971bd31a84abb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_79d4b4d718a5a435cb3971bd31a84abb);
    assert(Py_REFCNT(frame_79d4b4d718a5a435cb3971bd31a84abb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_nodePath);
        tmp_called_instance_1 = par_nodePath;
        frame_79d4b4d718a5a435cb3971bd31a84abb->m_frame.f_lineno = 519;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[181]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[224];
        CHECK_OBJECT(var_c);
        tmp_expression_value_1 = var_c;
        tmp_subscript_value_1 = mod_consts[25];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_c);
            tmp_expression_value_2 = var_c;
            tmp_subscript_value_2 = mod_consts[122];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_c);
            tmp_expression_value_3 = var_c;
            tmp_subscript_value_3 = mod_consts[18];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_c);
            tmp_expression_value_4 = var_c;
            tmp_subscript_value_4 = mod_consts[190];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_1 = "oo";
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
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_79d4b4d718a5a435cb3971bd31a84abb->m_frame.f_lineno = 520;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
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
        exception_tb = MAKE_TRACEBACK(frame_79d4b4d718a5a435cb3971bd31a84abb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79d4b4d718a5a435cb3971bd31a84abb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79d4b4d718a5a435cb3971bd31a84abb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79d4b4d718a5a435cb3971bd31a84abb,
        type_description_1,
        par_nodePath,
        var_c
    );


    // Release cached frame if used for exception.
    if (frame_79d4b4d718a5a435cb3971bd31a84abb == cache_frame_79d4b4d718a5a435cb3971bd31a84abb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79d4b4d718a5a435cb3971bd31a84abb);
        cache_frame_79d4b4d718a5a435cb3971bd31a84abb = NULL;
    }

    assertFrameObject(frame_79d4b4d718a5a435cb3971bd31a84abb);

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
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_c);
    var_c = NULL;
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
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    PyObject *par_g = python_pars[1];
    PyObject *par_b = python_pars[2];
    PyObject *par_a = python_pars[3];
    PyObject *par_nodePath = python_pars[4];
    struct Nuitka_FrameObject *frame_330219f496854d009ca3b60043b10a65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_330219f496854d009ca3b60043b10a65 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_330219f496854d009ca3b60043b10a65)) {
        Py_XDECREF(cache_frame_330219f496854d009ca3b60043b10a65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_330219f496854d009ca3b60043b10a65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_330219f496854d009ca3b60043b10a65 = MAKE_FUNCTION_FRAME(tstate, codeobj_330219f496854d009ca3b60043b10a65, module_direct$tkwidgets$EntryScale, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_330219f496854d009ca3b60043b10a65->m_type_description == NULL);
    frame_330219f496854d009ca3b60043b10a65 = cache_frame_330219f496854d009ca3b60043b10a65;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_330219f496854d009ca3b60043b10a65);
    assert(Py_REFCNT(frame_330219f496854d009ca3b60043b10a65) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[227];
        CHECK_OBJECT(par_nodePath);
        tmp_list_element_1 = par_nodePath;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
        CHECK_OBJECT(par_r);
        tmp_list_element_1 = par_r;
        PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
        CHECK_OBJECT(par_g);
        tmp_list_element_1 = par_g;
        PyList_SET_ITEM0(tmp_args_element_value_2, 2, tmp_list_element_1);
        CHECK_OBJECT(par_b);
        tmp_list_element_1 = par_b;
        PyList_SET_ITEM0(tmp_args_element_value_2, 3, tmp_list_element_1);
        CHECK_OBJECT(par_a);
        tmp_list_element_1 = par_a;
        PyList_SET_ITEM0(tmp_args_element_value_2, 4, tmp_list_element_1);
        frame_330219f496854d009ca3b60043b10a65->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[226],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
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
        exception_tb = MAKE_TRACEBACK(frame_330219f496854d009ca3b60043b10a65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_330219f496854d009ca3b60043b10a65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_330219f496854d009ca3b60043b10a65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_330219f496854d009ca3b60043b10a65,
        type_description_1,
        par_r,
        par_g,
        par_b,
        par_a,
        par_nodePath
    );


    // Release cached frame if used for exception.
    if (frame_330219f496854d009ca3b60043b10a65 == cache_frame_330219f496854d009ca3b60043b10a65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_330219f496854d009ca3b60043b10a65);
        cache_frame_330219f496854d009ca3b60043b10a65 = NULL;
    }

    assertFrameObject(frame_330219f496854d009ca3b60043b10a65);

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
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_nodePath);
    Py_DECREF(par_nodePath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__10_askForResolution(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__10_askForResolution,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_0064a8d74efc5848804f213ffc26f590,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__11_setResolution() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__11_setResolution,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_488429163d79c1979dcb432299039d62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__12__updateLabelText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__12__updateLabelText,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_2f103d468132ee803a804c10a4e5e5ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__13__updateValidate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__13__updateValidate,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_4f0a7f99ed7cdaba4c3630fe8174e555,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__14__scaleCommand() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__14__scaleCommand,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_0bf52388b29b48f52dec7dae44fcb089,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__15__entryCommand(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__15__entryCommand,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        codeobj_767c234af673c63d32d4e3b729a006d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__16__setSigDigits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__16__setSigDigits,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[269],
#endif
        codeobj_568f0216b854da17dd146d4f173013c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__17_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__17_get,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_5843b379db40564d7355af51b561640a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__18_set(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__18_set,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_f06294e9b10be349725ed55e39b0397d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__19_onReturn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_ba43a28c8c35aeb21af60973ed5ba43b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[272],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__1___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_a75b1494e651aa8b79a769546b56ffb8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__20_onReturnRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[275],
#endif
        codeobj_699aa5f15da956fc4990a3b788283369,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[274],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__21___onPress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__21___onPress,
        mod_consts[276],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        codeobj_62c9e96f3c4ef9f9ca4ea0205cc58b69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__22_onPress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        mod_consts[280],
#endif
        codeobj_37e185413b20c26d2f9f014a81d145a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[278],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__23___onRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__23___onRelease,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        mod_consts[282],
#endif
        codeobj_6e8e8cd82ce5733fcb88af7d7326057f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__24_onRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[284],
#endif
        codeobj_d11cda5bef6772c5c0ceb51e45e82cac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[283],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__25___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[286],
#endif
        codeobj_5b39f2b2a00fb02c981c0f65bc134b7d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_c1cace694b813f157df205b38275c656,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_54758c3bd3a4bf0271771c145da8ae7b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__26__updateLabels() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__26__updateLabels,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[287],
#endif
        codeobj_f54ebcee105adf28921b4abfac485b66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_d48f385d74b22ea00a85640f51697835,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__28_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__28_get,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[289],
#endif
        codeobj_f79c4c13b305e6c1e1616f5bc0b39e10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__29_getAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__29_getAt,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        codeobj_4fde92ab7bbfedfc656eff0c460e9307,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__2_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__2_label,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_038033f5e3b8170dd6e97862e787e7a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__30_set(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__30_set,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[291],
#endif
        codeobj_8f256d6798573a40059610e5da6b04dd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__31_setAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__31_setAt,
        mod_consts[292],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_137363f6030d0bee8ade673007437c7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[294],
#endif
        codeobj_6e5bd1c18b0d8b1d76bfe030eeb2a381,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__33_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__33_reset,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[295],
#endif
        codeobj_e977c6003eea6b41fa875c5b8e336ca9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__34___onReturn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__34___onReturn,
        mod_consts[296],
#if PYTHON_VERSION >= 0x300
        mod_consts[297],
#endif
        codeobj_fcbe5f6854d6c978cfe6ba2713b1fcca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__35_onReturn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[298],
#endif
        codeobj_449e3f611889a41f72de9cfe182ec8b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[278],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease,
        mod_consts[299],
#if PYTHON_VERSION >= 0x300
        mod_consts[300],
#endif
        codeobj_8779c29a046b5d387f3c2dd84ae9c4e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__37_onReturnRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[301],
#endif
        codeobj_abc8469ce86983005cba50256354345a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[278],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__38___onPress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__38___onPress,
        mod_consts[276],
#if PYTHON_VERSION >= 0x300
        mod_consts[302],
#endif
        codeobj_dab5f2932e5931bb832068b65690621f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__39_onPress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        mod_consts[303],
#endif
        codeobj_cf5ecc30cdda4403f1e272e88039f735,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[278],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__3_scale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__3_scale,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_d2b5a06bc7b39c0c4b33a63b37c7ac20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__40___onRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__40___onRelease,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        mod_consts[304],
#endif
        codeobj_32ddeb93dd1aa2c94de43f434a1d6988,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__41_onRelease() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[305],
#endif
        codeobj_bc00af167795b6bccffc4dbaf591ba70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        mod_consts[283],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel,
        mod_consts[306],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73942832d560b955abd45ca14381bcbc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_067a1e5c39d8b038183496aa309f121f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_1a6f18ad688d4b3bde37e97cc38a2dae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_a7bc82c37dbe3c6430350aae21bbc10c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_cbfa4e4e0193f7770124736b7db75504,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_ede9dcddb569bf65a13f10f2446c12b2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_79d4b4d718a5a435cb3971bd31a84abb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_330219f496854d009ca3b60043b10a65,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__4_entry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__4_entry,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_4cd54239fe529d5818c337407f2e4778,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__5_askForLabel(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__5_askForLabel,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_4a7a2df26c591b1d5d618fc3a78e3b05,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__6_askForMin(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__6_askForMin,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_fcf9e15e9a803fa4e4ca0db8a10a052b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__7_setMin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__7_setMin,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_a4346ba55a3e6aecbead2acb716150fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__8_askForMax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__8_askForMax,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_2ca3d654ab722c5fe13ea93b10ed51b5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__9_setMax() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$EntryScale$$$function__9_setMax,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_8fd0cce23a4f5c29efe9de43e595f330,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$EntryScale,
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

function_impl_code functable_direct$tkwidgets$EntryScale[] = {
    impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__1_lambda,
    impl_direct$tkwidgets$EntryScale$$$function__25___init__$$$function__2_lambda,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__1_setNodePathColor,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__2_lambda,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__3_lambda,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__4_lambda,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__5_popupColorPicker,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__6_printToLog,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel$$$function__7_onRelease,
    impl_direct$tkwidgets$EntryScale$$$function__1___init__,
    impl_direct$tkwidgets$EntryScale$$$function__2_label,
    impl_direct$tkwidgets$EntryScale$$$function__3_scale,
    impl_direct$tkwidgets$EntryScale$$$function__4_entry,
    impl_direct$tkwidgets$EntryScale$$$function__5_askForLabel,
    impl_direct$tkwidgets$EntryScale$$$function__6_askForMin,
    impl_direct$tkwidgets$EntryScale$$$function__7_setMin,
    impl_direct$tkwidgets$EntryScale$$$function__8_askForMax,
    impl_direct$tkwidgets$EntryScale$$$function__9_setMax,
    impl_direct$tkwidgets$EntryScale$$$function__10_askForResolution,
    impl_direct$tkwidgets$EntryScale$$$function__11_setResolution,
    impl_direct$tkwidgets$EntryScale$$$function__12__updateLabelText,
    impl_direct$tkwidgets$EntryScale$$$function__13__updateValidate,
    impl_direct$tkwidgets$EntryScale$$$function__14__scaleCommand,
    impl_direct$tkwidgets$EntryScale$$$function__15__entryCommand,
    impl_direct$tkwidgets$EntryScale$$$function__16__setSigDigits,
    impl_direct$tkwidgets$EntryScale$$$function__17_get,
    impl_direct$tkwidgets$EntryScale$$$function__18_set,
    NULL,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__21___onPress,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__23___onRelease,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__25___init__,
    impl_direct$tkwidgets$EntryScale$$$function__26__updateLabels,
    impl_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon,
    impl_direct$tkwidgets$EntryScale$$$function__28_get,
    impl_direct$tkwidgets$EntryScale$$$function__29_getAt,
    impl_direct$tkwidgets$EntryScale$$$function__30_set,
    impl_direct$tkwidgets$EntryScale$$$function__31_setAt,
    impl_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt,
    impl_direct$tkwidgets$EntryScale$$$function__33_reset,
    impl_direct$tkwidgets$EntryScale$$$function__34___onReturn,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__38___onPress,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__40___onRelease,
    NULL,
    impl_direct$tkwidgets$EntryScale$$$function__42_rgbPanel,
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

    function_impl_code *current = functable_direct$tkwidgets$EntryScale;
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

    if (offset > sizeof(functable_direct$tkwidgets$EntryScale) || offset < 0) {
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
        functable_direct$tkwidgets$EntryScale[offset],
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
        module_direct$tkwidgets$EntryScale,
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
PyObject *modulecode_direct$tkwidgets$EntryScale(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.tkwidgets.EntryScale");

    // Store the module for future use.
    module_direct$tkwidgets$EntryScale = module;

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
        PRINT_STRING("direct.tkwidgets.EntryScale: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.tkwidgets.EntryScale: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$tkwidgets$EntryScale\n");

    moduledict_direct$tkwidgets$EntryScale = MODULE_DICT(module_direct$tkwidgets$EntryScale);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$tkwidgets$EntryScale,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$EntryScale,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[338]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$EntryScale,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$EntryScale,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$EntryScale,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$tkwidgets$EntryScale);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$tkwidgets$EntryScale);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_923676bbb3e7ea417b1c9bb351d3aa39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f55a45006be38bb282e6dabb1baa802f_2;
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
    PyObject *locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293 = NULL;
    struct Nuitka_FrameObject *frame_f46e9575e72ef06d13c9a1e4555b7da0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_2);
    }
    frame_923676bbb3e7ea417b1c9bb351d3aa39 = MAKE_MODULE_FRAME(codeobj_923676bbb3e7ea417b1c9bb351d3aa39, module_direct$tkwidgets$EntryScale);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_923676bbb3e7ea417b1c9bb351d3aa39);
    assert(Py_REFCNT(frame_923676bbb3e7ea417b1c9bb351d3aa39) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[232], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[233], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST2(mod_consts[15],mod_consts[173]);
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[236];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_fromlist_value_1 = mod_consts[237];
        tmp_level_value_1 = mod_consts[25];
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 7;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$EntryScale, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

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
        tmp_name_value_2 = mod_consts[238];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[239];
        tmp_level_value_2 = mod_consts[25];
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$tkwidgets$EntryScale,
                mod_consts[183],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[183]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[3];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[25];
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 9;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[241];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_fromlist_value_4 = mod_consts[237];
        tmp_level_value_4 = mod_consts[25];
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 12;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$EntryScale, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[242];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_direct$tkwidgets$EntryScale;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[243];
        tmp_level_value_5 = mod_consts[25];
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$tkwidgets$EntryScale,
                mod_consts[217],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 22;

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
        tmp_subscript_value_1 = mod_consts[25];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
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


            exception_lineno = 22;

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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[244]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[15];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 22;
        tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[245]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[246];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_6 = mod_consts[247];
        tmp_default_value_1 = mod_consts[248];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[247]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

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


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[250], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[251];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[229], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[252], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        frame_f55a45006be38bb282e6dabb1baa802f_2 = MAKE_CLASS_FRAME(tstate, codeobj_f55a45006be38bb282e6dabb1baa802f, module_direct$tkwidgets$EntryScale, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f55a45006be38bb282e6dabb1baa802f_2);
        assert(Py_REFCNT(frame_f55a45006be38bb282e6dabb1baa802f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[253];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__2_label();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__3_scale();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__4_entry();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[253];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__5_askForLabel(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[253];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__6_askForMin(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__7_setMin();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[253];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__8_askForMax(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__9_setMax();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[105], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[253];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__10_askForResolution(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__11_setResolution();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__12__updateLabelText();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__13__updateValidate();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__14__scaleCommand();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[253];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__15__entryCommand(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__16__setSigDigits();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__17_get();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[215];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__18_set(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__19_onReturn();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__20_onReturnRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__21___onPress();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__22_onPress();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[279], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__23___onRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__24_onRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[210], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f55a45006be38bb282e6dabb1baa802f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f55a45006be38bb282e6dabb1baa802f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f55a45006be38bb282e6dabb1baa802f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f55a45006be38bb282e6dabb1baa802f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f55a45006be38bb282e6dabb1baa802f_2);

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


                exception_lineno = 22;

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
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22, mod_consts[285], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[15];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 22;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22);
        locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22 = NULL;
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

        Py_DECREF(locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22);
        locals_direct$tkwidgets$EntryScale$$$class__1_EntryScale_22 = NULL;
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
        exception_lineno = 22;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_15);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[133]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_17, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_9 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[25];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[244]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[244]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[173];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 293;
        tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_12 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[245]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[246];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_name_value_7 = mod_consts[247];
        tmp_default_value_2 = mod_consts[248];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_7, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[247]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 293;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[250], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[252], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_6;
        }
        frame_f46e9575e72ef06d13c9a1e4555b7da0_3 = MAKE_CLASS_FRAME(tstate, codeobj_f46e9575e72ef06d13c9a1e4555b7da0, module_direct$tkwidgets$EntryScale, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f46e9575e72ef06d13c9a1e4555b7da0_3);
        assert(Py_REFCNT(frame_f46e9575e72ef06d13c9a1e4555b7da0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[253];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__25___init__(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__26__updateLabels();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__27_toggleBalloon();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__28_get();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__29_getAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[215];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__30_set(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__31_setAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[292], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__32__entryScaleSetAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__33_reset();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__34___onReturn();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__35_onReturn();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__36___onReturnRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__37_onReturnRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__38___onPress();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__39_onPress();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[279], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__40___onRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[171], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__41_onRelease();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[210], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f46e9575e72ef06d13c9a1e4555b7da0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f46e9575e72ef06d13c9a1e4555b7da0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f46e9575e72ef06d13c9a1e4555b7da0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f46e9575e72ef06d13c9a1e4555b7da0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_f46e9575e72ef06d13c9a1e4555b7da0_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293, mod_consts[285], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[173];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame.f_lineno = 293;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293);
        locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293 = NULL;
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

        Py_DECREF(locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293);
        locals_direct$tkwidgets$EntryScale$$$class__2_EntryScaleGroup_293 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
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
        exception_lineno = 293;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_23);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_923676bbb3e7ea417b1c9bb351d3aa39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_923676bbb3e7ea417b1c9bb351d3aa39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_923676bbb3e7ea417b1c9bb351d3aa39, exception_lineno);
    }



    assertFrameObject(frame_923676bbb3e7ea417b1c9bb351d3aa39);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = mod_consts[253];
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_25 = MAKE_FUNCTION_direct$tkwidgets$EntryScale$$$function__42_rgbPanel(tmp_defaults_10);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_25);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.tkwidgets.EntryScale", false);

    Py_INCREF(module_direct$tkwidgets$EntryScale);
    return module_direct$tkwidgets$EntryScale;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$EntryScale, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$tkwidgets$EntryScale", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
