/* Generated code for Python module 'direct.tkwidgets.AppShell'
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

/* The "module_direct$tkwidgets$AppShell" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$tkwidgets$AppShell;
PyDictObject *moduledict_direct$tkwidgets$AppShell;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[359];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[359];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.tkwidgets.AppShell"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 359; i++) {
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
void checkModuleConstants_direct$tkwidgets$AppShell(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 359; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cf443efc12ac6352de6be85d53b85e06;
static PyCodeObject *codeobj_68348a6b279d3c7b162683f08709c163;
static PyCodeObject *codeobj_e16f57fbd3469cd7afe8db0cc5e950bd;
static PyCodeObject *codeobj_c221df33a9502568e5c9db225c2626a4;
static PyCodeObject *codeobj_7d05e2014461bc7c764733317b383896;
static PyCodeObject *codeobj_e9f396eabbbeb316ff7a7b5d04ad0571;
static PyCodeObject *codeobj_383c8dee09ca863eeb79b3b5e35e74ce;
static PyCodeObject *codeobj_5b9776879ca591454fdca112acef24ed;
static PyCodeObject *codeobj_5adec66cf4b6d94e0f565620f544f1e2;
static PyCodeObject *codeobj_639c42d0a086b4b09eb712ec214922a3;
static PyCodeObject *codeobj_226c08e1b9b7f61db4010e6d4d2580cf;
static PyCodeObject *codeobj_1480370a05d8331e821338d267ef0171;
static PyCodeObject *codeobj_da01dab285ead5feeb14f7cc1c5649d8;
static PyCodeObject *codeobj_b0d790e036960789f6b6498ad5ade74a;
static PyCodeObject *codeobj_611da5c828aaad1fa364104199bc71cf;
static PyCodeObject *codeobj_4adaebea728190a11565dda1fcb9a17b;
static PyCodeObject *codeobj_c5f58bfbcafd0e8eab9cce8d66834f92;
static PyCodeObject *codeobj_b494f2cab71bd0a08c25801406988c13;
static PyCodeObject *codeobj_7abb47a9a256518f51adb7089638d5cb;
static PyCodeObject *codeobj_e70299c3b969d7a48fe6b76f78786901;
static PyCodeObject *codeobj_295fd9ee7f22535530f5ce70a44b756d;
static PyCodeObject *codeobj_72bf7a3203b5f04912e066d864695b62;
static PyCodeObject *codeobj_390e73da8206fba7d84b18f2630dbc08;
static PyCodeObject *codeobj_d634d9be428bd9938a8909de7c8774ee;
static PyCodeObject *codeobj_e48b38605167642d9dc456c0e39a9912;
static PyCodeObject *codeobj_d10ab9e229cb040087b3a378cdb39dd5;
static PyCodeObject *codeobj_395d9c67404687250ccdddabf614bee3;
static PyCodeObject *codeobj_bcacd4bb2fa53a80933948a73d7342b5;
static PyCodeObject *codeobj_456acf10b5c9195412dd509be4eed06d;
static PyCodeObject *codeobj_da6085de2e0715fd48e37f1a041b6e04;
static PyCodeObject *codeobj_30af6d93f5f6217a334e896384d69663;
static PyCodeObject *codeobj_44eb1e4289a76a73d4550a6a088088d4;
static PyCodeObject *codeobj_56a4a5ee6403c54c24cb2320ef5390a1;
static PyCodeObject *codeobj_89eab973f61a1da23879afcd373e6097;
static PyCodeObject *codeobj_d1caf4ba1580429e8f48c400eef128d1;
static PyCodeObject *codeobj_d99dfca3f66adcb92f2a21270f2161b6;
static PyCodeObject *codeobj_e16e94699bcf06be71b48f3367819afe;
static PyCodeObject *codeobj_bb70d19facae466a750e1e5dcbc50a8a;
static PyCodeObject *codeobj_2f940e23b21f913652b1b3803eabea61;
static PyCodeObject *codeobj_e7704f1024aa958f5ff866744fa39c1e;
static PyCodeObject *codeobj_418cfb786ae6af24a1f1e0081b1cb1e3;
static PyCodeObject *codeobj_08a84b5b15fbe1abaca91e4356e7c5a3;
static PyCodeObject *codeobj_05fc3925d7a48cc46e6fcdc3dfa3df3c;
static PyCodeObject *codeobj_3ce910c9223cd4cbfecbbfaae6705eb5;
static PyCodeObject *codeobj_5998e36b2662c4bea2a93bdc8a184eff;
static PyCodeObject *codeobj_7f43ca045d6286e3fc882cb81e840d3f;
static PyCodeObject *codeobj_91c1a031a50154809e2e9ffeae7722d5;
static PyCodeObject *codeobj_a27451c9c621d2fcd11c3fc15cbe1e85;
static PyCodeObject *codeobj_2c6136b1c6164b3ae2909ffa44688d97;
static PyCodeObject *codeobj_38eeac297388a32c4d650942458ad67b;
static PyCodeObject *codeobj_5395d44808d9c9c360b8187daccf689a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[336]); CHECK_OBJECT(module_filename_obj);
    codeobj_cf443efc12ac6352de6be85d53b85e06 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[337], mod_consts[337], NULL, NULL, 0, 0, 0);
    codeobj_68348a6b279d3c7b162683f08709c163 = MAKE_CODE_OBJECT(module_filename_obj, 49, 0, mod_consts[23], mod_consts[23], mod_consts[338], NULL, 0, 0, 0);
    codeobj_e16f57fbd3469cd7afe8db0cc5e950bd = MAKE_CODE_OBJECT(module_filename_obj, 533, 0, mod_consts[203], mod_consts[203], mod_consts[338], NULL, 0, 0, 0);
    codeobj_c221df33a9502568e5c9db225c2626a4 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[269], mod_consts[269], mod_consts[339], NULL, 1, 0, 0);
    codeobj_7d05e2014461bc7c764733317b383896 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[259], mod_consts[259], mod_consts[339], NULL, 1, 0, 0);
    codeobj_e9f396eabbbeb316ff7a7b5d04ad0571 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[265], mod_consts[265], mod_consts[339], NULL, 1, 0, 0);
    codeobj_383c8dee09ca863eeb79b3b5e35e74ce = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[263], mod_consts[263], mod_consts[339], NULL, 1, 0, 0);
    codeobj_5b9776879ca591454fdca112acef24ed = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[257], mod_consts[257], mod_consts[339], NULL, 1, 0, 0);
    codeobj_5adec66cf4b6d94e0f565620f544f1e2 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[261], mod_consts[261], mod_consts[340], NULL, 1, 0, 0);
    codeobj_639c42d0a086b4b09eb712ec214922a3 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[267], mod_consts[267], mod_consts[341], NULL, 1, 0, 0);
    codeobj_226c08e1b9b7f61db4010e6d4d2580cf = MAKE_CODE_OBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[20], mod_consts[20], mod_consts[342], NULL, 2, 0, 0);
    codeobj_1480370a05d8331e821338d267ef0171 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[20], mod_consts[20], mod_consts[343], NULL, 2, 0, 0);
    codeobj_da01dab285ead5feeb14f7cc1c5649d8 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[159], mod_consts[159], mod_consts[344], NULL, 4, 0, 0);
    codeobj_b0d790e036960789f6b6498ad5ade74a = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], mod_consts[345], NULL, 4, 0, 0);
    codeobj_611da5c828aaad1fa364104199bc71cf = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[339], NULL, 1, 0, 0);
    codeobj_4adaebea728190a11565dda1fcb9a17b = MAKE_CODE_OBJECT(module_filename_obj, 235, 0, mod_consts[31], mod_consts[31], mod_consts[339], NULL, 1, 0, 0);
    codeobj_c5f58bfbcafd0e8eab9cce8d66834f92 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], mod_consts[339], NULL, 1, 0, 0);
    codeobj_b494f2cab71bd0a08c25801406988c13 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[346], NULL, 4, 0, 0);
    codeobj_7abb47a9a256518f51adb7089638d5cb = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[204], mod_consts[204], mod_consts[347], NULL, 4, 0, 0);
    codeobj_e70299c3b969d7a48fe6b76f78786901 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[280], mod_consts[280], mod_consts[339], NULL, 1, 0, 0);
    codeobj_295fd9ee7f22535530f5ce70a44b756d = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[211], mod_consts[211], mod_consts[339], NULL, 1, 0, 0);
    codeobj_72bf7a3203b5f04912e066d864695b62 = MAKE_CODE_OBJECT(module_filename_obj, 239, 0, mod_consts[49], mod_consts[49], mod_consts[339], NULL, 1, 0, 0);
    codeobj_390e73da8206fba7d84b18f2630dbc08 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[339], NULL, 1, 0, 0);
    codeobj_d634d9be428bd9938a8909de7c8774ee = MAKE_CODE_OBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[212], mod_consts[212], mod_consts[339], NULL, 1, 0, 0);
    codeobj_e48b38605167642d9dc456c0e39a9912 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[339], NULL, 1, 0, 0);
    codeobj_d10ab9e229cb040087b3a378cdb39dd5 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[161], mod_consts[161], mod_consts[348], NULL, 11, 0, 0);
    codeobj_395d9c67404687250ccdddabf614bee3 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[294], mod_consts[294], mod_consts[349], NULL, 3, 0, 0);
    codeobj_bcacd4bb2fa53a80933948a73d7342b5 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[291], mod_consts[291], mod_consts[349], NULL, 3, 0, 0);
    codeobj_456acf10b5c9195412dd509be4eed06d = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[339], NULL, 1, 0, 0);
    codeobj_da6085de2e0715fd48e37f1a041b6e04 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[282], mod_consts[282], mod_consts[339], NULL, 1, 0, 0);
    codeobj_30af6d93f5f6217a334e896384d69663 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[300], mod_consts[300], mod_consts[350], NULL, 9, 0, 0);
    codeobj_44eb1e4289a76a73d4550a6a088088d4 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[303], mod_consts[303], mod_consts[351], NULL, 11, 0, 0);
    codeobj_56a4a5ee6403c54c24cb2320ef5390a1 = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[319], mod_consts[319], mod_consts[350], NULL, 9, 0, 0);
    codeobj_89eab973f61a1da23879afcd373e6097 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[325], mod_consts[325], mod_consts[352], NULL, 16, 0, 0);
    codeobj_d1caf4ba1580429e8f48c400eef128d1 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[309], mod_consts[309], mod_consts[350], NULL, 9, 0, 0);
    codeobj_d99dfca3f66adcb92f2a21270f2161b6 = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[313], mod_consts[313], mod_consts[350], NULL, 9, 0, 0);
    codeobj_e16e94699bcf06be71b48f3367819afe = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[307], mod_consts[307], mod_consts[350], NULL, 9, 0, 0);
    codeobj_bb70d19facae466a750e1e5dcbc50a8a = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[298], mod_consts[298], mod_consts[353], NULL, 12, 0, 0);
    codeobj_2f940e23b21f913652b1b3803eabea61 = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[322], mod_consts[322], mod_consts[354], NULL, 14, 0, 0);
    codeobj_e7704f1024aa958f5ff866744fa39c1e = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[305], mod_consts[305], mod_consts[355], NULL, 12, 0, 0);
    codeobj_418cfb786ae6af24a1f1e0081b1cb1e3 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[311], mod_consts[311], mod_consts[350], NULL, 9, 0, 0);
    codeobj_08a84b5b15fbe1abaca91e4356e7c5a3 = MAKE_CODE_OBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[315], mod_consts[315], mod_consts[350], NULL, 9, 0, 0);
    codeobj_05fc3925d7a48cc46e6fcdc3dfa3df3c = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[317], mod_consts[317], mod_consts[350], NULL, 9, 0, 0);
    codeobj_3ce910c9223cd4cbfecbbfaae6705eb5 = MAKE_CODE_OBJECT(module_filename_obj, 243, 0, mod_consts[47], mod_consts[47], mod_consts[356], NULL, 2, 0, 0);
    codeobj_5998e36b2662c4bea2a93bdc8a184eff = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], mod_consts[339], NULL, 1, 0, 0);
    codeobj_7f43ca045d6286e3fc882cb81e840d3f = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[237], mod_consts[237], NULL, NULL, 0, 0, 0);
    codeobj_91c1a031a50154809e2e9ffeae7722d5 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[236], mod_consts[236], NULL, NULL, 0, 0, 0);
    codeobj_a27451c9c621d2fcd11c3fc15cbe1e85 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[132], mod_consts[132], mod_consts[339], NULL, 1, 0, 0);
    codeobj_2c6136b1c6164b3ae2909ffa44688d97 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], mod_consts[339], NULL, 1, 0, 0);
    codeobj_38eeac297388a32c4d650942458ad67b = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[328], mod_consts[328], mod_consts[357], NULL, 3, 0, 0);
    codeobj_5395d44808d9c9c360b8187daccf689a = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], mod_consts[358], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__10___createAboutBox();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__11_toggleBalloon();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__12_showAbout();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__13_quit();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__14_appInit();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__15_createInterface();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__16_onDestroy();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__17_createMenuBar();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__18_interior();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__19_balloon();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__20_buttonBox();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__21_messageBar();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__22_buttonAdd(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__23_alignbuttons();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__24_bind(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__25_updateProgress(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__26_addWidget();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__27_getWidget();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__28_addVariable();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__29_getVariable();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__2_resetVariableDict();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__30_createWidget();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__32_newCreateButton(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__35_newCreateFloater(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__36_newCreateDial(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__37_newCreateSider(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__3___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__44_transformRGB(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__45___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__46_createButtons();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__47_createMain();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__48_createInterface();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__4___createInterface();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__5___createBalloon();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__6___createMenuBar();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__7___createDataArea();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__8___createCommandArea();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__9___createMessageBar();


// The module function definitions.
static PyObject *impl_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_91c1a031a50154809e2e9ffeae7722d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_91c1a031a50154809e2e9ffeae7722d5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91c1a031a50154809e2e9ffeae7722d5)) {
        Py_XDECREF(cache_frame_91c1a031a50154809e2e9ffeae7722d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91c1a031a50154809e2e9ffeae7722d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91c1a031a50154809e2e9ffeae7722d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_91c1a031a50154809e2e9ffeae7722d5, module_direct$tkwidgets$AppShell, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91c1a031a50154809e2e9ffeae7722d5->m_type_description == NULL);
    frame_91c1a031a50154809e2e9ffeae7722d5 = cache_frame_91c1a031a50154809e2e9ffeae7722d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_91c1a031a50154809e2e9ffeae7722d5);
    assert(Py_REFCNT(frame_91c1a031a50154809e2e9ffeae7722d5) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = MAKE_DICT_EMPTY();
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91c1a031a50154809e2e9ffeae7722d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91c1a031a50154809e2e9ffeae7722d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91c1a031a50154809e2e9ffeae7722d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91c1a031a50154809e2e9ffeae7722d5,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_91c1a031a50154809e2e9ffeae7722d5 == cache_frame_91c1a031a50154809e2e9ffeae7722d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91c1a031a50154809e2e9ffeae7722d5);
        cache_frame_91c1a031a50154809e2e9ffeae7722d5 = NULL;
    }

    assertFrameObject(frame_91c1a031a50154809e2e9ffeae7722d5);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__2_resetVariableDict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7f43ca045d6286e3fc882cb81e840d3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7f43ca045d6286e3fc882cb81e840d3f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f43ca045d6286e3fc882cb81e840d3f)) {
        Py_XDECREF(cache_frame_7f43ca045d6286e3fc882cb81e840d3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f43ca045d6286e3fc882cb81e840d3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f43ca045d6286e3fc882cb81e840d3f = MAKE_FUNCTION_FRAME(tstate, codeobj_7f43ca045d6286e3fc882cb81e840d3f, module_direct$tkwidgets$AppShell, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f43ca045d6286e3fc882cb81e840d3f->m_type_description == NULL);
    frame_7f43ca045d6286e3fc882cb81e840d3f = cache_frame_7f43ca045d6286e3fc882cb81e840d3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7f43ca045d6286e3fc882cb81e840d3f);
    assert(Py_REFCNT(frame_7f43ca045d6286e3fc882cb81e840d3f) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = MAKE_DICT_EMPTY();
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f43ca045d6286e3fc882cb81e840d3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f43ca045d6286e3fc882cb81e840d3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f43ca045d6286e3fc882cb81e840d3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f43ca045d6286e3fc882cb81e840d3f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7f43ca045d6286e3fc882cb81e840d3f == cache_frame_7f43ca045d6286e3fc882cb81e840d3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f43ca045d6286e3fc882cb81e840d3f);
        cache_frame_7f43ca045d6286e3fc882cb81e840d3f = NULL;
    }

    assertFrameObject(frame_7f43ca045d6286e3fc882cb81e840d3f);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_1480370a05d8331e821338d267ef0171;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_1480370a05d8331e821338d267ef0171 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1480370a05d8331e821338d267ef0171)) {
        Py_XDECREF(cache_frame_1480370a05d8331e821338d267ef0171);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1480370a05d8331e821338d267ef0171 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1480370a05d8331e821338d267ef0171 = MAKE_FUNCTION_FRAME(tstate, codeobj_1480370a05d8331e821338d267ef0171, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1480370a05d8331e821338d267ef0171->m_type_description == NULL);
    frame_1480370a05d8331e821338d267ef0171 = cache_frame_1480370a05d8331e821338d267ef0171;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1480370a05d8331e821338d267ef0171);
    assert(Py_REFCNT(frame_1480370a05d8331e821338d267ef0171) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[3];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[5];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[6];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[9];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_3;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[6];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[10];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_4;
                PyObject *tmp_expression_value_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_4 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_6 = mod_consts[12];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_expression_value_7;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
                CHECK_OBJECT(par_self);
                tmp_expression_value_6 = par_self;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[13]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_6);
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_7 = mod_consts[14];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_8;
                PyObject *tmp_expression_value_9;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_7);
                CHECK_OBJECT(par_self);
                tmp_expression_value_8 = par_self;
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[14]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_7);
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_8 = mod_consts[15];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_expression_value_11;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_8);
                CHECK_OBJECT(par_self);
                tmp_expression_value_10 = par_self;
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[15]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_8);
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[8]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
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
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_parent);
        tmp_cmp_expr_left_1 = par_parent;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 80;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_parent);
        tmp_assattr_value_2 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[19]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[20]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[18]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[18]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[21]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[22];
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[11]);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
            CHECK_OBJECT(par_self);
            tmp_expression_value_18 = par_self;
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 86;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[18]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[3]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 87;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[24]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[6];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_3 = tmp_inplace_assign_1__value;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[24], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[4]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[24]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 90;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[27], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_5 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[1], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[27]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assattr_value_6 = tmp_assign_unpack_2__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[2], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_2__assign_source;
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[27]);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 96;
        tmp_assattr_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[30], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 98;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[31]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 100;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[32]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 102;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[33]);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[34]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 104;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[35]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[6];
        frame_1480370a05d8331e821338d267ef0171->m_frame.f_lineno = 106;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1480370a05d8331e821338d267ef0171, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1480370a05d8331e821338d267ef0171->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1480370a05d8331e821338d267ef0171, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1480370a05d8331e821338d267ef0171,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_1480370a05d8331e821338d267ef0171 == cache_frame_1480370a05d8331e821338d267ef0171) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1480370a05d8331e821338d267ef0171);
        cache_frame_1480370a05d8331e821338d267ef0171 = NULL;
    }

    assertFrameObject(frame_1480370a05d8331e821338d267ef0171);

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

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__4___createInterface(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5b9776879ca591454fdca112acef24ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b9776879ca591454fdca112acef24ed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b9776879ca591454fdca112acef24ed)) {
        Py_XDECREF(cache_frame_5b9776879ca591454fdca112acef24ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b9776879ca591454fdca112acef24ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b9776879ca591454fdca112acef24ed = MAKE_FUNCTION_FRAME(tstate, codeobj_5b9776879ca591454fdca112acef24ed, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b9776879ca591454fdca112acef24ed->m_type_description == NULL);
    frame_5b9776879ca591454fdca112acef24ed = cache_frame_5b9776879ca591454fdca112acef24ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b9776879ca591454fdca112acef24ed);
    assert(Py_REFCNT(frame_5b9776879ca591454fdca112acef24ed) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[38]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 110;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[39]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 111;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[40]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 112;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[41]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 113;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[42]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 114;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[43]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 116;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[44]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[46];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[47]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 121;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[48]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        frame_5b9776879ca591454fdca112acef24ed->m_frame.f_lineno = 122;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[49]);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b9776879ca591454fdca112acef24ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b9776879ca591454fdca112acef24ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b9776879ca591454fdca112acef24ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b9776879ca591454fdca112acef24ed,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5b9776879ca591454fdca112acef24ed == cache_frame_5b9776879ca591454fdca112acef24ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b9776879ca591454fdca112acef24ed);
        cache_frame_5b9776879ca591454fdca112acef24ed = NULL;
    }

    assertFrameObject(frame_5b9776879ca591454fdca112acef24ed);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__5___createBalloon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7d05e2014461bc7c764733317b383896;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7d05e2014461bc7c764733317b383896 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d05e2014461bc7c764733317b383896)) {
        Py_XDECREF(cache_frame_7d05e2014461bc7c764733317b383896);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d05e2014461bc7c764733317b383896 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d05e2014461bc7c764733317b383896 = MAKE_FUNCTION_FRAME(tstate, codeobj_7d05e2014461bc7c764733317b383896, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d05e2014461bc7c764733317b383896->m_type_description == NULL);
    frame_7d05e2014461bc7c764733317b383896 = cache_frame_7d05e2014461bc7c764733317b383896;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d05e2014461bc7c764733317b383896);
    assert(Py_REFCNT(frame_7d05e2014461bc7c764733317b383896) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[51];
        tmp_args_element_value_2 = mod_consts[52];
        tmp_args_element_value_3 = Py_None;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[53]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
        frame_7d05e2014461bc7c764733317b383896->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[54]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[55]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[56]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d05e2014461bc7c764733317b383896->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_7d05e2014461bc7c764733317b383896, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d05e2014461bc7c764733317b383896->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d05e2014461bc7c764733317b383896, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d05e2014461bc7c764733317b383896,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7d05e2014461bc7c764733317b383896 == cache_frame_7d05e2014461bc7c764733317b383896) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d05e2014461bc7c764733317b383896);
        cache_frame_7d05e2014461bc7c764733317b383896 = NULL;
    }

    assertFrameObject(frame_7d05e2014461bc7c764733317b383896);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__6___createMenuBar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_spacer = NULL;
    struct Nuitka_FrameObject *frame_5adec66cf4b6d94e0f565620f544f1e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5adec66cf4b6d94e0f565620f544f1e2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5adec66cf4b6d94e0f565620f544f1e2)) {
        Py_XDECREF(cache_frame_5adec66cf4b6d94e0f565620f544f1e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5adec66cf4b6d94e0f565620f544f1e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5adec66cf4b6d94e0f565620f544f1e2 = MAKE_FUNCTION_FRAME(tstate, codeobj_5adec66cf4b6d94e0f565620f544f1e2, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5adec66cf4b6d94e0f565620f544f1e2->m_type_description == NULL);
    frame_5adec66cf4b6d94e0f565620f544f1e2 = cache_frame_5adec66cf4b6d94e0f565620f544f1e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5adec66cf4b6d94e0f565620f544f1e2);
    assert(Py_REFCNT(frame_5adec66cf4b6d94e0f565620f544f1e2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 132;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[50]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[60];
        tmp_kw_call_arg_value_1_1 = mod_consts[52];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[61]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[59]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_1);
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 138;
        tmp_kw_call_dict_value_2_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[51]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 133;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[64]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[65]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[66]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[67];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_mod_expr_left_1 = mod_consts[68];
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[4]);
            if (tmp_mod_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_right_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[69]);
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 140;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[65]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 141;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[66],
            &PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[65]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 142;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[73]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[59]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[75]);
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 145;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_spacer == NULL);
        var_spacer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        CHECK_OBJECT(var_spacer);
        tmp_expression_value_12 = var_spacer;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[63];
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 146;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[76]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[59]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[35]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame.f_lineno = 148;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5adec66cf4b6d94e0f565620f544f1e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5adec66cf4b6d94e0f565620f544f1e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5adec66cf4b6d94e0f565620f544f1e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5adec66cf4b6d94e0f565620f544f1e2,
        type_description_1,
        par_self,
        var_spacer
    );


    // Release cached frame if used for exception.
    if (frame_5adec66cf4b6d94e0f565620f544f1e2 == cache_frame_5adec66cf4b6d94e0f565620f544f1e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5adec66cf4b6d94e0f565620f544f1e2);
        cache_frame_5adec66cf4b6d94e0f565620f544f1e2 = NULL;
    }

    assertFrameObject(frame_5adec66cf4b6d94e0f565620f544f1e2);

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
    CHECK_OBJECT(var_spacer);
    Py_DECREF(var_spacer);
    var_spacer = NULL;
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

    Py_XDECREF(var_spacer);
    var_spacer = NULL;
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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__7___createDataArea(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_383c8dee09ca863eeb79b3b5e35e74ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_383c8dee09ca863eeb79b3b5e35e74ce = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_383c8dee09ca863eeb79b3b5e35e74ce)) {
        Py_XDECREF(cache_frame_383c8dee09ca863eeb79b3b5e35e74ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_383c8dee09ca863eeb79b3b5e35e74ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_383c8dee09ca863eeb79b3b5e35e74ce = MAKE_FUNCTION_FRAME(tstate, codeobj_383c8dee09ca863eeb79b3b5e35e74ce, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_383c8dee09ca863eeb79b3b5e35e74ce->m_type_description == NULL);
    frame_383c8dee09ca863eeb79b3b5e35e74ce = cache_frame_383c8dee09ca863eeb79b3b5e35e74ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_383c8dee09ca863eeb79b3b5e35e74ce);
    assert(Py_REFCNT(frame_383c8dee09ca863eeb79b3b5e35e74ce) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[78];
        tmp_kw_call_arg_value_1_1 = mod_consts[52];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_1);
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[6];
        frame_383c8dee09ca863eeb79b3b5e35e74ce->m_frame.f_lineno = 152;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[80]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[81], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[81]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_383c8dee09ca863eeb79b3b5e35e74ce->m_frame.f_lineno = 157;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_383c8dee09ca863eeb79b3b5e35e74ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_383c8dee09ca863eeb79b3b5e35e74ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_383c8dee09ca863eeb79b3b5e35e74ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_383c8dee09ca863eeb79b3b5e35e74ce,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_383c8dee09ca863eeb79b3b5e35e74ce == cache_frame_383c8dee09ca863eeb79b3b5e35e74ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_383c8dee09ca863eeb79b3b5e35e74ce);
        cache_frame_383c8dee09ca863eeb79b3b5e35e74ce = NULL;
    }

    assertFrameObject(frame_383c8dee09ca863eeb79b3b5e35e74ce);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__8___createCommandArea(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e9f396eabbbeb316ff7a7b5d04ad0571;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571)) {
        Py_XDECREF(cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571 = MAKE_FUNCTION_FRAME(tstate, codeobj_e9f396eabbbeb316ff7a7b5d04ad0571, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_type_description == NULL);
    frame_e9f396eabbbeb316ff7a7b5d04ad0571 = cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e9f396eabbbeb316ff7a7b5d04ad0571);
    assert(Py_REFCNT(frame_e9f396eabbbeb316ff7a7b5d04ad0571) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[85];
        tmp_kw_call_arg_value_1_1 = mod_consts[52];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_1);
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[6];
        frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_frame.f_lineno = 162;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[80]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[88];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[89]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 3, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[87]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_2, 0, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_value_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[90]);
        frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_frame.f_lineno = 167;
        tmp_assattr_value_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[91], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[91]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[35]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_frame.f_lineno = 171;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 172;
            type_description_1 = "o";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[87]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 174;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_frame.f_lineno = 173;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[94]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_e9f396eabbbeb316ff7a7b5d04ad0571, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9f396eabbbeb316ff7a7b5d04ad0571->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9f396eabbbeb316ff7a7b5d04ad0571, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9f396eabbbeb316ff7a7b5d04ad0571,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e9f396eabbbeb316ff7a7b5d04ad0571 == cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571);
        cache_frame_e9f396eabbbeb316ff7a7b5d04ad0571 = NULL;
    }

    assertFrameObject(frame_e9f396eabbbeb316ff7a7b5d04ad0571);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__9___createMessageBar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_frame = NULL;
    struct Nuitka_FrameObject *frame_639c42d0a086b4b09eb712ec214922a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_639c42d0a086b4b09eb712ec214922a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_639c42d0a086b4b09eb712ec214922a3)) {
        Py_XDECREF(cache_frame_639c42d0a086b4b09eb712ec214922a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_639c42d0a086b4b09eb712ec214922a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_639c42d0a086b4b09eb712ec214922a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_639c42d0a086b4b09eb712ec214922a3, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_639c42d0a086b4b09eb712ec214922a3->m_type_description == NULL);
    frame_639c42d0a086b4b09eb712ec214922a3 = cache_frame_639c42d0a086b4b09eb712ec214922a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_639c42d0a086b4b09eb712ec214922a3);
    assert(Py_REFCNT(frame_639c42d0a086b4b09eb712ec214922a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[95];
        tmp_kw_call_arg_value_1_1 = mod_consts[52];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[30]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_1);
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 182;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[96]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[97];
        tmp_kw_call_arg_value_1_2 = mod_consts[52];
        tmp_kw_call_arg_value_2_2 = Py_None;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[98]);
        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_tuple_element_2 = var_frame;
        tmp_kw_call_arg_value_4_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_2, 0, tmp_tuple_element_2);
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[6];
        tmp_kw_call_dict_value_2_1 = Py_None;
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 184;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[99]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_3_2);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[100], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[100]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[35]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 192;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[101]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_tuple_element_3 = var_frame;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[102]);
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 194;
        tmp_assattr_value_2 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[103], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[103]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[104]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[35]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 201;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[106],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 202;
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_12 = var_frame;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_2_3 == NULL)) {
            tmp_kw_call_value_2_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 203;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[54]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[55]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[100]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[109]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_639c42d0a086b4b09eb712ec214922a3->m_frame.f_lineno = 205;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_639c42d0a086b4b09eb712ec214922a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_639c42d0a086b4b09eb712ec214922a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_639c42d0a086b4b09eb712ec214922a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_639c42d0a086b4b09eb712ec214922a3,
        type_description_1,
        par_self,
        var_frame
    );


    // Release cached frame if used for exception.
    if (frame_639c42d0a086b4b09eb712ec214922a3 == cache_frame_639c42d0a086b4b09eb712ec214922a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_639c42d0a086b4b09eb712ec214922a3);
        cache_frame_639c42d0a086b4b09eb712ec214922a3 = NULL;
    }

    assertFrameObject(frame_639c42d0a086b4b09eb712ec214922a3);

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
    CHECK_OBJECT(var_frame);
    Py_DECREF(var_frame);
    var_frame = NULL;
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

    Py_XDECREF(var_frame);
    var_frame = NULL;
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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__10___createAboutBox(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c221df33a9502568e5c9db225c2626a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c221df33a9502568e5c9db225c2626a4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c221df33a9502568e5c9db225c2626a4)) {
        Py_XDECREF(cache_frame_c221df33a9502568e5c9db225c2626a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c221df33a9502568e5c9db225c2626a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c221df33a9502568e5c9db225c2626a4 = MAKE_FUNCTION_FRAME(tstate, codeobj_c221df33a9502568e5c9db225c2626a4, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c221df33a9502568e5c9db225c2626a4->m_type_description == NULL);
    frame_c221df33a9502568e5c9db225c2626a4 = cache_frame_c221df33a9502568e5c9db225c2626a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c221df33a9502568e5c9db225c2626a4);
    assert(Py_REFCNT(frame_c221df33a9502568e5c9db225c2626a4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[112]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c221df33a9502568e5c9db225c2626a4->m_frame.f_lineno = 209;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[113]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[114]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c221df33a9502568e5c9db225c2626a4->m_frame.f_lineno = 210;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[115]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[116];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[117]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[118]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[119]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 213;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c221df33a9502568e5c9db225c2626a4->m_frame.f_lineno = 211;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[120]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[30]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[4]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 216;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c221df33a9502568e5c9db225c2626a4->m_frame.f_lineno = 215;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[121]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[122], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[122]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c221df33a9502568e5c9db225c2626a4->m_frame.f_lineno = 217;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[123]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c221df33a9502568e5c9db225c2626a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c221df33a9502568e5c9db225c2626a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c221df33a9502568e5c9db225c2626a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c221df33a9502568e5c9db225c2626a4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c221df33a9502568e5c9db225c2626a4 == cache_frame_c221df33a9502568e5c9db225c2626a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c221df33a9502568e5c9db225c2626a4);
        cache_frame_c221df33a9502568e5c9db225c2626a4 = NULL;
    }

    assertFrameObject(frame_c221df33a9502568e5c9db225c2626a4);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__11_toggleBalloon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2c6136b1c6164b3ae2909ffa44688d97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2c6136b1c6164b3ae2909ffa44688d97 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c6136b1c6164b3ae2909ffa44688d97)) {
        Py_XDECREF(cache_frame_2c6136b1c6164b3ae2909ffa44688d97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c6136b1c6164b3ae2909ffa44688d97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c6136b1c6164b3ae2909ffa44688d97 = MAKE_FUNCTION_FRAME(tstate, codeobj_2c6136b1c6164b3ae2909ffa44688d97, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c6136b1c6164b3ae2909ffa44688d97->m_type_description == NULL);
    frame_2c6136b1c6164b3ae2909ffa44688d97 = cache_frame_2c6136b1c6164b3ae2909ffa44688d97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c6136b1c6164b3ae2909ffa44688d97);
    assert(Py_REFCNT(frame_2c6136b1c6164b3ae2909ffa44688d97) == 2);

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
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[124]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2c6136b1c6164b3ae2909ffa44688d97->m_frame.f_lineno = 220;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 220;
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
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[54]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[55]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2c6136b1c6164b3ae2909ffa44688d97->m_frame.f_lineno = 221;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[57]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
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
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[54]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[55]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2c6136b1c6164b3ae2909ffa44688d97->m_frame.f_lineno = 223;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[127], 0), mod_consts[57]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_2c6136b1c6164b3ae2909ffa44688d97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c6136b1c6164b3ae2909ffa44688d97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c6136b1c6164b3ae2909ffa44688d97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c6136b1c6164b3ae2909ffa44688d97,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2c6136b1c6164b3ae2909ffa44688d97 == cache_frame_2c6136b1c6164b3ae2909ffa44688d97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c6136b1c6164b3ae2909ffa44688d97);
        cache_frame_2c6136b1c6164b3ae2909ffa44688d97 = NULL;
    }

    assertFrameObject(frame_2c6136b1c6164b3ae2909ffa44688d97);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__12_showAbout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a27451c9c621d2fcd11c3fc15cbe1e85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85)) {
        Py_XDECREF(cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85 = MAKE_FUNCTION_FRAME(tstate, codeobj_a27451c9c621d2fcd11c3fc15cbe1e85, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85->m_type_description == NULL);
    frame_a27451c9c621d2fcd11c3fc15cbe1e85 = cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a27451c9c621d2fcd11c3fc15cbe1e85);
    assert(Py_REFCNT(frame_a27451c9c621d2fcd11c3fc15cbe1e85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[122]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a27451c9c621d2fcd11c3fc15cbe1e85->m_frame.f_lineno = 227;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[122]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a27451c9c621d2fcd11c3fc15cbe1e85->m_frame.f_lineno = 228;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[33]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a27451c9c621d2fcd11c3fc15cbe1e85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a27451c9c621d2fcd11c3fc15cbe1e85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a27451c9c621d2fcd11c3fc15cbe1e85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a27451c9c621d2fcd11c3fc15cbe1e85,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a27451c9c621d2fcd11c3fc15cbe1e85 == cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85);
        cache_frame_a27451c9c621d2fcd11c3fc15cbe1e85 = NULL;
    }

    assertFrameObject(frame_a27451c9c621d2fcd11c3fc15cbe1e85);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__13_quit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5998e36b2662c4bea2a93bdc8a184eff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5998e36b2662c4bea2a93bdc8a184eff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5998e36b2662c4bea2a93bdc8a184eff)) {
        Py_XDECREF(cache_frame_5998e36b2662c4bea2a93bdc8a184eff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5998e36b2662c4bea2a93bdc8a184eff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5998e36b2662c4bea2a93bdc8a184eff = MAKE_FUNCTION_FRAME(tstate, codeobj_5998e36b2662c4bea2a93bdc8a184eff, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5998e36b2662c4bea2a93bdc8a184eff->m_type_description == NULL);
    frame_5998e36b2662c4bea2a93bdc8a184eff = cache_frame_5998e36b2662c4bea2a93bdc8a184eff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5998e36b2662c4bea2a93bdc8a184eff);
    assert(Py_REFCNT(frame_5998e36b2662c4bea2a93bdc8a184eff) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5998e36b2662c4bea2a93bdc8a184eff->m_frame.f_lineno = 231;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[129]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
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
        exception_tb = MAKE_TRACEBACK(frame_5998e36b2662c4bea2a93bdc8a184eff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5998e36b2662c4bea2a93bdc8a184eff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5998e36b2662c4bea2a93bdc8a184eff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5998e36b2662c4bea2a93bdc8a184eff,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5998e36b2662c4bea2a93bdc8a184eff == cache_frame_5998e36b2662c4bea2a93bdc8a184eff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5998e36b2662c4bea2a93bdc8a184eff);
        cache_frame_5998e36b2662c4bea2a93bdc8a184eff = NULL;
    }

    assertFrameObject(frame_5998e36b2662c4bea2a93bdc8a184eff);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__17_createMenuBar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e48b38605167642d9dc456c0e39a9912;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e48b38605167642d9dc456c0e39a9912 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e48b38605167642d9dc456c0e39a9912)) {
        Py_XDECREF(cache_frame_e48b38605167642d9dc456c0e39a9912);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e48b38605167642d9dc456c0e39a9912 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e48b38605167642d9dc456c0e39a9912 = MAKE_FUNCTION_FRAME(tstate, codeobj_e48b38605167642d9dc456c0e39a9912, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e48b38605167642d9dc456c0e39a9912->m_type_description == NULL);
    frame_e48b38605167642d9dc456c0e39a9912 = cache_frame_e48b38605167642d9dc456c0e39a9912;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e48b38605167642d9dc456c0e39a9912);
    assert(Py_REFCNT(frame_e48b38605167642d9dc456c0e39a9912) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[65]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[130]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[131];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[132]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 250;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_1, mod_consts[133], kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 253;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[124], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[56]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[136];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[124]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[137],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[124]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 257;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[137],
            PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[65]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[130]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[139];
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[124]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[140]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 258;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};
            tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_3, mod_consts[141], kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[65]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[130]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[143];
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[144]);
        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e48b38605167642d9dc456c0e39a9912->m_frame.f_lineno = 264;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};
            tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_4, mod_consts[145], kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_1_3);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e48b38605167642d9dc456c0e39a9912, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e48b38605167642d9dc456c0e39a9912->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e48b38605167642d9dc456c0e39a9912, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e48b38605167642d9dc456c0e39a9912,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e48b38605167642d9dc456c0e39a9912 == cache_frame_e48b38605167642d9dc456c0e39a9912) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e48b38605167642d9dc456c0e39a9912);
        cache_frame_e48b38605167642d9dc456c0e39a9912 = NULL;
    }

    assertFrameObject(frame_e48b38605167642d9dc456c0e39a9912);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__18_interior(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_456acf10b5c9195412dd509be4eed06d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_456acf10b5c9195412dd509be4eed06d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_456acf10b5c9195412dd509be4eed06d)) {
        Py_XDECREF(cache_frame_456acf10b5c9195412dd509be4eed06d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_456acf10b5c9195412dd509be4eed06d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_456acf10b5c9195412dd509be4eed06d = MAKE_FUNCTION_FRAME(tstate, codeobj_456acf10b5c9195412dd509be4eed06d, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_456acf10b5c9195412dd509be4eed06d->m_type_description == NULL);
    frame_456acf10b5c9195412dd509be4eed06d = cache_frame_456acf10b5c9195412dd509be4eed06d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_456acf10b5c9195412dd509be4eed06d);
    assert(Py_REFCNT(frame_456acf10b5c9195412dd509be4eed06d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[81]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_456acf10b5c9195412dd509be4eed06d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_456acf10b5c9195412dd509be4eed06d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_456acf10b5c9195412dd509be4eed06d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_456acf10b5c9195412dd509be4eed06d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_456acf10b5c9195412dd509be4eed06d == cache_frame_456acf10b5c9195412dd509be4eed06d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_456acf10b5c9195412dd509be4eed06d);
        cache_frame_456acf10b5c9195412dd509be4eed06d = NULL;
    }

    assertFrameObject(frame_456acf10b5c9195412dd509be4eed06d);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__19_balloon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c5f58bfbcafd0e8eab9cce8d66834f92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92)) {
        Py_XDECREF(cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92 = MAKE_FUNCTION_FRAME(tstate, codeobj_c5f58bfbcafd0e8eab9cce8d66834f92, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92->m_type_description == NULL);
    frame_c5f58bfbcafd0e8eab9cce8d66834f92 = cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c5f58bfbcafd0e8eab9cce8d66834f92);
    assert(Py_REFCNT(frame_c5f58bfbcafd0e8eab9cce8d66834f92) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_c5f58bfbcafd0e8eab9cce8d66834f92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5f58bfbcafd0e8eab9cce8d66834f92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5f58bfbcafd0e8eab9cce8d66834f92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5f58bfbcafd0e8eab9cce8d66834f92,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c5f58bfbcafd0e8eab9cce8d66834f92 == cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92);
        cache_frame_c5f58bfbcafd0e8eab9cce8d66834f92 = NULL;
    }

    assertFrameObject(frame_c5f58bfbcafd0e8eab9cce8d66834f92);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__20_buttonBox(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e70299c3b969d7a48fe6b76f78786901;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e70299c3b969d7a48fe6b76f78786901 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e70299c3b969d7a48fe6b76f78786901)) {
        Py_XDECREF(cache_frame_e70299c3b969d7a48fe6b76f78786901);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e70299c3b969d7a48fe6b76f78786901 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e70299c3b969d7a48fe6b76f78786901 = MAKE_FUNCTION_FRAME(tstate, codeobj_e70299c3b969d7a48fe6b76f78786901, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e70299c3b969d7a48fe6b76f78786901->m_type_description == NULL);
    frame_e70299c3b969d7a48fe6b76f78786901 = cache_frame_e70299c3b969d7a48fe6b76f78786901;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e70299c3b969d7a48fe6b76f78786901);
    assert(Py_REFCNT(frame_e70299c3b969d7a48fe6b76f78786901) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[91]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        exception_tb = MAKE_TRACEBACK(frame_e70299c3b969d7a48fe6b76f78786901, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e70299c3b969d7a48fe6b76f78786901->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e70299c3b969d7a48fe6b76f78786901, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e70299c3b969d7a48fe6b76f78786901,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e70299c3b969d7a48fe6b76f78786901 == cache_frame_e70299c3b969d7a48fe6b76f78786901) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e70299c3b969d7a48fe6b76f78786901);
        cache_frame_e70299c3b969d7a48fe6b76f78786901 = NULL;
    }

    assertFrameObject(frame_e70299c3b969d7a48fe6b76f78786901);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__21_messageBar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_da6085de2e0715fd48e37f1a041b6e04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da6085de2e0715fd48e37f1a041b6e04 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da6085de2e0715fd48e37f1a041b6e04)) {
        Py_XDECREF(cache_frame_da6085de2e0715fd48e37f1a041b6e04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da6085de2e0715fd48e37f1a041b6e04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da6085de2e0715fd48e37f1a041b6e04 = MAKE_FUNCTION_FRAME(tstate, codeobj_da6085de2e0715fd48e37f1a041b6e04, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da6085de2e0715fd48e37f1a041b6e04->m_type_description == NULL);
    frame_da6085de2e0715fd48e37f1a041b6e04 = cache_frame_da6085de2e0715fd48e37f1a041b6e04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da6085de2e0715fd48e37f1a041b6e04);
    assert(Py_REFCNT(frame_da6085de2e0715fd48e37f1a041b6e04) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[100]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_da6085de2e0715fd48e37f1a041b6e04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da6085de2e0715fd48e37f1a041b6e04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da6085de2e0715fd48e37f1a041b6e04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da6085de2e0715fd48e37f1a041b6e04,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_da6085de2e0715fd48e37f1a041b6e04 == cache_frame_da6085de2e0715fd48e37f1a041b6e04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da6085de2e0715fd48e37f1a041b6e04);
        cache_frame_da6085de2e0715fd48e37f1a041b6e04 = NULL;
    }

    assertFrameObject(frame_da6085de2e0715fd48e37f1a041b6e04);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__22_buttonAdd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buttonName = python_pars[1];
    PyObject *par_helpMessage = python_pars[2];
    PyObject *par_statusMessage = python_pars[3];
    PyObject *par_kw = python_pars[4];
    PyObject *var_newBtn = NULL;
    struct Nuitka_FrameObject *frame_7abb47a9a256518f51adb7089638d5cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7abb47a9a256518f51adb7089638d5cb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7abb47a9a256518f51adb7089638d5cb)) {
        Py_XDECREF(cache_frame_7abb47a9a256518f51adb7089638d5cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7abb47a9a256518f51adb7089638d5cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7abb47a9a256518f51adb7089638d5cb = MAKE_FUNCTION_FRAME(tstate, codeobj_7abb47a9a256518f51adb7089638d5cb, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7abb47a9a256518f51adb7089638d5cb->m_type_description == NULL);
    frame_7abb47a9a256518f51adb7089638d5cb = cache_frame_7abb47a9a256518f51adb7089638d5cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7abb47a9a256518f51adb7089638d5cb);
    assert(Py_REFCNT(frame_7abb47a9a256518f51adb7089638d5cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[91]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buttonName);
        tmp_args_element_value_1 = par_buttonName;
        frame_7abb47a9a256518f51adb7089638d5cb->m_frame.f_lineno = 289;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[146], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newBtn == NULL);
        var_newBtn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_newBtn);
        tmp_called_instance_2 = var_newBtn;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_2 = par_kw;
        frame_7abb47a9a256518f51adb7089638d5cb->m_frame.f_lineno = 290;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[55], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_helpMessage);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_helpMessage);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_newBtn);
        tmp_args_element_value_3 = var_newBtn;
        CHECK_OBJECT(par_helpMessage);
        tmp_args_element_value_4 = par_helpMessage;
        CHECK_OBJECT(par_statusMessage);
        tmp_args_element_value_5 = par_statusMessage;
        frame_7abb47a9a256518f51adb7089638d5cb->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_3,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_7abb47a9a256518f51adb7089638d5cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7abb47a9a256518f51adb7089638d5cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7abb47a9a256518f51adb7089638d5cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7abb47a9a256518f51adb7089638d5cb,
        type_description_1,
        par_self,
        par_buttonName,
        par_helpMessage,
        par_statusMessage,
        par_kw,
        var_newBtn
    );


    // Release cached frame if used for exception.
    if (frame_7abb47a9a256518f51adb7089638d5cb == cache_frame_7abb47a9a256518f51adb7089638d5cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7abb47a9a256518f51adb7089638d5cb);
        cache_frame_7abb47a9a256518f51adb7089638d5cb = NULL;
    }

    assertFrameObject(frame_7abb47a9a256518f51adb7089638d5cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_newBtn);
    tmp_return_value = var_newBtn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_newBtn);
    Py_DECREF(var_newBtn);
    var_newBtn = NULL;
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

    Py_XDECREF(var_newBtn);
    var_newBtn = NULL;
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
    CHECK_OBJECT(par_buttonName);
    Py_DECREF(par_buttonName);
    CHECK_OBJECT(par_helpMessage);
    Py_DECREF(par_helpMessage);
    CHECK_OBJECT(par_statusMessage);
    Py_DECREF(par_statusMessage);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buttonName);
    Py_DECREF(par_buttonName);
    CHECK_OBJECT(par_helpMessage);
    Py_DECREF(par_helpMessage);
    CHECK_OBJECT(par_statusMessage);
    Py_DECREF(par_statusMessage);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__23_alignbuttons(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_611da5c828aaad1fa364104199bc71cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_611da5c828aaad1fa364104199bc71cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_611da5c828aaad1fa364104199bc71cf)) {
        Py_XDECREF(cache_frame_611da5c828aaad1fa364104199bc71cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_611da5c828aaad1fa364104199bc71cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_611da5c828aaad1fa364104199bc71cf = MAKE_FUNCTION_FRAME(tstate, codeobj_611da5c828aaad1fa364104199bc71cf, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_611da5c828aaad1fa364104199bc71cf->m_type_description == NULL);
    frame_611da5c828aaad1fa364104199bc71cf = cache_frame_611da5c828aaad1fa364104199bc71cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_611da5c828aaad1fa364104199bc71cf);
    assert(Py_REFCNT(frame_611da5c828aaad1fa364104199bc71cf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[91]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_611da5c828aaad1fa364104199bc71cf->m_frame.f_lineno = 297;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[147]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_611da5c828aaad1fa364104199bc71cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_611da5c828aaad1fa364104199bc71cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_611da5c828aaad1fa364104199bc71cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_611da5c828aaad1fa364104199bc71cf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_611da5c828aaad1fa364104199bc71cf == cache_frame_611da5c828aaad1fa364104199bc71cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_611da5c828aaad1fa364104199bc71cf);
        cache_frame_611da5c828aaad1fa364104199bc71cf = NULL;
    }

    assertFrameObject(frame_611da5c828aaad1fa364104199bc71cf);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__24_bind(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_child = python_pars[1];
    PyObject *par_balloonHelpMsg = python_pars[2];
    PyObject *par_statusHelpMsg = python_pars[3];
    struct Nuitka_FrameObject *frame_b494f2cab71bd0a08c25801406988c13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b494f2cab71bd0a08c25801406988c13 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b494f2cab71bd0a08c25801406988c13)) {
        Py_XDECREF(cache_frame_b494f2cab71bd0a08c25801406988c13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b494f2cab71bd0a08c25801406988c13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b494f2cab71bd0a08c25801406988c13 = MAKE_FUNCTION_FRAME(tstate, codeobj_b494f2cab71bd0a08c25801406988c13, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b494f2cab71bd0a08c25801406988c13->m_type_description == NULL);
    frame_b494f2cab71bd0a08c25801406988c13 = cache_frame_b494f2cab71bd0a08c25801406988c13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b494f2cab71bd0a08c25801406988c13);
    assert(Py_REFCNT(frame_b494f2cab71bd0a08c25801406988c13) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_child);
        tmp_args_element_value_1 = par_child;
        CHECK_OBJECT(par_balloonHelpMsg);
        tmp_args_element_value_2 = par_balloonHelpMsg;
        CHECK_OBJECT(par_statusHelpMsg);
        tmp_args_element_value_3 = par_statusHelpMsg;
        frame_b494f2cab71bd0a08c25801406988c13->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b494f2cab71bd0a08c25801406988c13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b494f2cab71bd0a08c25801406988c13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b494f2cab71bd0a08c25801406988c13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b494f2cab71bd0a08c25801406988c13,
        type_description_1,
        par_self,
        par_child,
        par_balloonHelpMsg,
        par_statusHelpMsg
    );


    // Release cached frame if used for exception.
    if (frame_b494f2cab71bd0a08c25801406988c13 == cache_frame_b494f2cab71bd0a08c25801406988c13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b494f2cab71bd0a08c25801406988c13);
        cache_frame_b494f2cab71bd0a08c25801406988c13 = NULL;
    }

    assertFrameObject(frame_b494f2cab71bd0a08c25801406988c13);

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
    CHECK_OBJECT(par_child);
    Py_DECREF(par_child);
    CHECK_OBJECT(par_balloonHelpMsg);
    Py_DECREF(par_balloonHelpMsg);
    CHECK_OBJECT(par_statusHelpMsg);
    Py_DECREF(par_statusHelpMsg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_child);
    Py_DECREF(par_child);
    CHECK_OBJECT(par_balloonHelpMsg);
    Py_DECREF(par_balloonHelpMsg);
    CHECK_OBJECT(par_statusHelpMsg);
    Py_DECREF(par_statusHelpMsg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__25_updateProgress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newValue = python_pars[1];
    PyObject *par_newMax = python_pars[2];
    struct Nuitka_FrameObject *frame_5395d44808d9c9c360b8187daccf689a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5395d44808d9c9c360b8187daccf689a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5395d44808d9c9c360b8187daccf689a)) {
        Py_XDECREF(cache_frame_5395d44808d9c9c360b8187daccf689a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5395d44808d9c9c360b8187daccf689a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5395d44808d9c9c360b8187daccf689a = MAKE_FUNCTION_FRAME(tstate, codeobj_5395d44808d9c9c360b8187daccf689a, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5395d44808d9c9c360b8187daccf689a->m_type_description == NULL);
    frame_5395d44808d9c9c360b8187daccf689a = cache_frame_5395d44808d9c9c360b8187daccf689a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5395d44808d9c9c360b8187daccf689a);
    assert(Py_REFCNT(frame_5395d44808d9c9c360b8187daccf689a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newValue);
        tmp_args_element_value_1 = par_newValue;
        CHECK_OBJECT(par_newMax);
        tmp_args_element_value_2 = par_newMax;
        frame_5395d44808d9c9c360b8187daccf689a->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[106],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
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
        exception_tb = MAKE_TRACEBACK(frame_5395d44808d9c9c360b8187daccf689a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5395d44808d9c9c360b8187daccf689a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5395d44808d9c9c360b8187daccf689a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5395d44808d9c9c360b8187daccf689a,
        type_description_1,
        par_self,
        par_newValue,
        par_newMax
    );


    // Release cached frame if used for exception.
    if (frame_5395d44808d9c9c360b8187daccf689a == cache_frame_5395d44808d9c9c360b8187daccf689a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5395d44808d9c9c360b8187daccf689a);
        cache_frame_5395d44808d9c9c360b8187daccf689a = NULL;
    }

    assertFrameObject(frame_5395d44808d9c9c360b8187daccf689a);

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
    CHECK_OBJECT(par_newValue);
    Py_DECREF(par_newValue);
    CHECK_OBJECT(par_newMax);
    Py_DECREF(par_newMax);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newValue);
    Py_DECREF(par_newValue);
    CHECK_OBJECT(par_newMax);
    Py_DECREF(par_newMax);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__26_addWidget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_category = python_pars[1];
    PyObject *par_text = python_pars[2];
    PyObject *par_widget = python_pars[3];
    struct Nuitka_FrameObject *frame_b0d790e036960789f6b6498ad5ade74a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b0d790e036960789f6b6498ad5ade74a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0d790e036960789f6b6498ad5ade74a)) {
        Py_XDECREF(cache_frame_b0d790e036960789f6b6498ad5ade74a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0d790e036960789f6b6498ad5ade74a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0d790e036960789f6b6498ad5ade74a = MAKE_FUNCTION_FRAME(tstate, codeobj_b0d790e036960789f6b6498ad5ade74a, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0d790e036960789f6b6498ad5ade74a->m_type_description == NULL);
    frame_b0d790e036960789f6b6498ad5ade74a = cache_frame_b0d790e036960789f6b6498ad5ade74a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b0d790e036960789f6b6498ad5ade74a);
    assert(Py_REFCNT(frame_b0d790e036960789f6b6498ad5ade74a) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_widget);
        tmp_ass_subvalue_1 = par_widget;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_add_expr_left_2 = par_category;
        tmp_add_expr_right_2 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_add_expr_right_1 = par_text;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0d790e036960789f6b6498ad5ade74a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0d790e036960789f6b6498ad5ade74a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0d790e036960789f6b6498ad5ade74a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0d790e036960789f6b6498ad5ade74a,
        type_description_1,
        par_self,
        par_category,
        par_text,
        par_widget
    );


    // Release cached frame if used for exception.
    if (frame_b0d790e036960789f6b6498ad5ade74a == cache_frame_b0d790e036960789f6b6498ad5ade74a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0d790e036960789f6b6498ad5ade74a);
        cache_frame_b0d790e036960789f6b6498ad5ade74a = NULL;
    }

    assertFrameObject(frame_b0d790e036960789f6b6498ad5ade74a);

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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__27_getWidget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_category = python_pars[1];
    PyObject *par_text = python_pars[2];
    struct Nuitka_FrameObject *frame_bcacd4bb2fa53a80933948a73d7342b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcacd4bb2fa53a80933948a73d7342b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bcacd4bb2fa53a80933948a73d7342b5)) {
        Py_XDECREF(cache_frame_bcacd4bb2fa53a80933948a73d7342b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcacd4bb2fa53a80933948a73d7342b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcacd4bb2fa53a80933948a73d7342b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_bcacd4bb2fa53a80933948a73d7342b5, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcacd4bb2fa53a80933948a73d7342b5->m_type_description == NULL);
    frame_bcacd4bb2fa53a80933948a73d7342b5 = cache_frame_bcacd4bb2fa53a80933948a73d7342b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bcacd4bb2fa53a80933948a73d7342b5);
    assert(Py_REFCNT(frame_bcacd4bb2fa53a80933948a73d7342b5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_add_expr_left_2 = par_category;
        tmp_add_expr_right_2 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_add_expr_right_1 = par_text;
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        frame_bcacd4bb2fa53a80933948a73d7342b5->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_bcacd4bb2fa53a80933948a73d7342b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcacd4bb2fa53a80933948a73d7342b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcacd4bb2fa53a80933948a73d7342b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcacd4bb2fa53a80933948a73d7342b5,
        type_description_1,
        par_self,
        par_category,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bcacd4bb2fa53a80933948a73d7342b5 == cache_frame_bcacd4bb2fa53a80933948a73d7342b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcacd4bb2fa53a80933948a73d7342b5);
        cache_frame_bcacd4bb2fa53a80933948a73d7342b5 = NULL;
    }

    assertFrameObject(frame_bcacd4bb2fa53a80933948a73d7342b5);

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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__28_addVariable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_category = python_pars[1];
    PyObject *par_text = python_pars[2];
    PyObject *par_variable = python_pars[3];
    struct Nuitka_FrameObject *frame_da01dab285ead5feeb14f7cc1c5649d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_da01dab285ead5feeb14f7cc1c5649d8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da01dab285ead5feeb14f7cc1c5649d8)) {
        Py_XDECREF(cache_frame_da01dab285ead5feeb14f7cc1c5649d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da01dab285ead5feeb14f7cc1c5649d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da01dab285ead5feeb14f7cc1c5649d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_da01dab285ead5feeb14f7cc1c5649d8, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da01dab285ead5feeb14f7cc1c5649d8->m_type_description == NULL);
    frame_da01dab285ead5feeb14f7cc1c5649d8 = cache_frame_da01dab285ead5feeb14f7cc1c5649d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da01dab285ead5feeb14f7cc1c5649d8);
    assert(Py_REFCNT(frame_da01dab285ead5feeb14f7cc1c5649d8) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_variable);
        tmp_ass_subvalue_1 = par_variable;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_add_expr_left_2 = par_category;
        tmp_add_expr_right_2 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_add_expr_right_1 = par_text;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da01dab285ead5feeb14f7cc1c5649d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da01dab285ead5feeb14f7cc1c5649d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da01dab285ead5feeb14f7cc1c5649d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da01dab285ead5feeb14f7cc1c5649d8,
        type_description_1,
        par_self,
        par_category,
        par_text,
        par_variable
    );


    // Release cached frame if used for exception.
    if (frame_da01dab285ead5feeb14f7cc1c5649d8 == cache_frame_da01dab285ead5feeb14f7cc1c5649d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da01dab285ead5feeb14f7cc1c5649d8);
        cache_frame_da01dab285ead5feeb14f7cc1c5649d8 = NULL;
    }

    assertFrameObject(frame_da01dab285ead5feeb14f7cc1c5649d8);

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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_variable);
    Py_DECREF(par_variable);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_variable);
    Py_DECREF(par_variable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__29_getVariable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_category = python_pars[1];
    PyObject *par_text = python_pars[2];
    struct Nuitka_FrameObject *frame_395d9c67404687250ccdddabf614bee3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_395d9c67404687250ccdddabf614bee3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_395d9c67404687250ccdddabf614bee3)) {
        Py_XDECREF(cache_frame_395d9c67404687250ccdddabf614bee3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_395d9c67404687250ccdddabf614bee3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_395d9c67404687250ccdddabf614bee3 = MAKE_FUNCTION_FRAME(tstate, codeobj_395d9c67404687250ccdddabf614bee3, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_395d9c67404687250ccdddabf614bee3->m_type_description == NULL);
    frame_395d9c67404687250ccdddabf614bee3 = cache_frame_395d9c67404687250ccdddabf614bee3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_395d9c67404687250ccdddabf614bee3);
    assert(Py_REFCNT(frame_395d9c67404687250ccdddabf614bee3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_add_expr_left_2 = par_category;
        tmp_add_expr_right_2 = mod_consts[25];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_add_expr_right_1 = par_text;
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        frame_395d9c67404687250ccdddabf614bee3->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_395d9c67404687250ccdddabf614bee3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_395d9c67404687250ccdddabf614bee3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_395d9c67404687250ccdddabf614bee3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_395d9c67404687250ccdddabf614bee3,
        type_description_1,
        par_self,
        par_category,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_395d9c67404687250ccdddabf614bee3 == cache_frame_395d9c67404687250ccdddabf614bee3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_395d9c67404687250ccdddabf614bee3);
        cache_frame_395d9c67404687250ccdddabf614bee3 = NULL;
    }

    assertFrameObject(frame_395d9c67404687250ccdddabf614bee3);

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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__30_createWidget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_widgetClass = python_pars[4];
    PyObject *par_help = python_pars[5];
    PyObject *par_command = python_pars[6];
    PyObject *par_side = python_pars[7];
    PyObject *par_fill = python_pars[8];
    PyObject *par_expand = python_pars[9];
    PyObject *par_kw = python_pars[10];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_d10ab9e229cb040087b3a378cdb39dd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d10ab9e229cb040087b3a378cdb39dd5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d10ab9e229cb040087b3a378cdb39dd5)) {
        Py_XDECREF(cache_frame_d10ab9e229cb040087b3a378cdb39dd5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d10ab9e229cb040087b3a378cdb39dd5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d10ab9e229cb040087b3a378cdb39dd5 = MAKE_FUNCTION_FRAME(tstate, codeobj_d10ab9e229cb040087b3a378cdb39dd5, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d10ab9e229cb040087b3a378cdb39dd5->m_type_description == NULL);
    frame_d10ab9e229cb040087b3a378cdb39dd5 = cache_frame_d10ab9e229cb040087b3a378cdb39dd5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d10ab9e229cb040087b3a378cdb39dd5);
    assert(Py_REFCNT(frame_d10ab9e229cb040087b3a378cdb39dd5) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_text);
        tmp_ass_subvalue_1 = par_text;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_1 = par_kw;
        tmp_ass_subscript_1 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_widgetClass);
        tmp_dircall_arg1_1 = par_widgetClass;
        CHECK_OBJECT(par_parent);
        tmp_tuple_element_1 = par_parent;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_command);
        tmp_ass_subvalue_2 = par_command;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_2 = var_widget;
        tmp_ass_subscript_2 = mod_consts[150];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_widget);
        tmp_expression_value_1 = var_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_side);
        tmp_kw_call_value_0_1 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_value_1_1 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_value_2_1 = par_expand;
        frame_d10ab9e229cb040087b3a378cdb39dd5->m_frame.f_lineno = 329;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_widget);
        tmp_args_element_value_1 = var_widget;
        CHECK_OBJECT(par_help);
        tmp_args_element_value_2 = par_help;
        frame_d10ab9e229cb040087b3a378cdb39dd5->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_3 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_4 = par_text;
        CHECK_OBJECT(var_widget);
        tmp_args_element_value_5 = var_widget;
        frame_d10ab9e229cb040087b3a378cdb39dd5->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[152],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d10ab9e229cb040087b3a378cdb39dd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d10ab9e229cb040087b3a378cdb39dd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d10ab9e229cb040087b3a378cdb39dd5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d10ab9e229cb040087b3a378cdb39dd5,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_widgetClass,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_d10ab9e229cb040087b3a378cdb39dd5 == cache_frame_d10ab9e229cb040087b3a378cdb39dd5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d10ab9e229cb040087b3a378cdb39dd5);
        cache_frame_d10ab9e229cb040087b3a378cdb39dd5 = NULL;
    }

    assertFrameObject(frame_d10ab9e229cb040087b3a378cdb39dd5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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

    Py_XDECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_widgetClass);
    Py_DECREF(par_widgetClass);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_widgetClass);
    Py_DECREF(par_widgetClass);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_value = python_pars[6];
    PyObject *par_width = python_pars[7];
    PyObject *par_relief = python_pars[8];
    PyObject *par_side = python_pars[9];
    PyObject *par_fill = python_pars[10];
    PyObject *par_expand = python_pars[11];
    PyObject *var_frame = NULL;
    PyObject *var_variable = NULL;
    PyObject *var_label = NULL;
    PyObject *var_entry = NULL;
    struct Nuitka_FrameObject *frame_bb70d19facae466a750e1e5dcbc50a8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bb70d19facae466a750e1e5dcbc50a8a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb70d19facae466a750e1e5dcbc50a8a)) {
        Py_XDECREF(cache_frame_bb70d19facae466a750e1e5dcbc50a8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb70d19facae466a750e1e5dcbc50a8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb70d19facae466a750e1e5dcbc50a8a = MAKE_FUNCTION_FRAME(tstate, codeobj_bb70d19facae466a750e1e5dcbc50a8a, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb70d19facae466a750e1e5dcbc50a8a->m_type_description == NULL);
    frame_bb70d19facae466a750e1e5dcbc50a8a = cache_frame_bb70d19facae466a750e1e5dcbc50a8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb70d19facae466a750e1e5dcbc50a8a);
    assert(Py_REFCNT(frame_bb70d19facae466a750e1e5dcbc50a8a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 342;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 343;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_variable == NULL);
        var_variable = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_variable);
        tmp_called_instance_1 = var_variable;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[137], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_kw_call_arg_value_0_1 = var_frame;
        CHECK_OBJECT(par_text);
        tmp_kw_call_dict_value_0_1 = par_text;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 345;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[154]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_label == NULL);
        var_label = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_label);
        tmp_expression_value_1 = var_label;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[63];
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_kw_call_arg_value_0_2 = var_frame;
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_0_2 = par_width;
        CHECK_OBJECT(par_relief);
        tmp_kw_call_dict_value_1_1 = par_relief;
        CHECK_OBJECT(var_variable);
        tmp_kw_call_dict_value_2_1 = var_variable;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 347;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[156]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_entry == NULL);
        var_entry = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(var_entry);
        tmp_expression_value_2 = var_entry;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_2 = mod_consts[6];
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 349;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_3 = var_frame;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_side);
        tmp_kw_call_value_0_3 = par_side;
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expand);
        tmp_kw_call_value_2_3 = par_expand;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 350;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_command);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_command);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_entry);
        tmp_called_instance_2 = var_entry;
        tmp_args_element_value_3 = mod_consts[157];
        CHECK_OBJECT(par_command);
        tmp_args_element_value_4 = par_command;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_label);
        tmp_args_element_value_5 = var_label;
        CHECK_OBJECT(par_help);
        tmp_args_element_value_6 = par_help;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_entry);
        tmp_args_element_value_7 = var_entry;
        CHECK_OBJECT(par_help);
        tmp_args_element_value_8 = par_help;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_9 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_10 = par_text;
        CHECK_OBJECT(var_entry);
        tmp_args_element_value_11 = var_entry;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_5,
                mod_consts[152],
                call_args
            );
        }

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[152]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_args_element_value_12 = par_category;
        CHECK_OBJECT(par_text);
        tmp_add_expr_left_1 = par_text;
        tmp_add_expr_right_1 = mod_consts[158];
        tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 358;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_label);
        tmp_args_element_value_14 = var_label;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_15 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_16 = par_text;
        CHECK_OBJECT(var_variable);
        tmp_args_element_value_17 = var_variable;
        frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_6,
                mod_consts[159],
                call_args
            );
        }

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb70d19facae466a750e1e5dcbc50a8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb70d19facae466a750e1e5dcbc50a8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb70d19facae466a750e1e5dcbc50a8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb70d19facae466a750e1e5dcbc50a8a,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_value,
        par_width,
        par_relief,
        par_side,
        par_fill,
        par_expand,
        var_frame,
        var_variable,
        var_label,
        var_entry
    );


    // Release cached frame if used for exception.
    if (frame_bb70d19facae466a750e1e5dcbc50a8a == cache_frame_bb70d19facae466a750e1e5dcbc50a8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb70d19facae466a750e1e5dcbc50a8a);
        cache_frame_bb70d19facae466a750e1e5dcbc50a8a = NULL;
    }

    assertFrameObject(frame_bb70d19facae466a750e1e5dcbc50a8a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_entry);
    tmp_return_value = var_entry;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_frame);
    Py_DECREF(var_frame);
    var_frame = NULL;
    CHECK_OBJECT(var_variable);
    Py_DECREF(var_variable);
    var_variable = NULL;
    CHECK_OBJECT(var_label);
    Py_DECREF(var_label);
    var_label = NULL;
    CHECK_OBJECT(var_entry);
    Py_DECREF(var_entry);
    var_entry = NULL;
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

    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_variable);
    var_variable = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_relief);
    Py_DECREF(par_relief);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_relief);
    Py_DECREF(par_relief);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__32_newCreateButton(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_30af6d93f5f6217a334e896384d69663;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30af6d93f5f6217a334e896384d69663 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_30af6d93f5f6217a334e896384d69663)) {
        Py_XDECREF(cache_frame_30af6d93f5f6217a334e896384d69663);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30af6d93f5f6217a334e896384d69663 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30af6d93f5f6217a334e896384d69663 = MAKE_FUNCTION_FRAME(tstate, codeobj_30af6d93f5f6217a334e896384d69663, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30af6d93f5f6217a334e896384d69663->m_type_description == NULL);
    frame_30af6d93f5f6217a334e896384d69663 = cache_frame_30af6d93f5f6217a334e896384d69663;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30af6d93f5f6217a334e896384d69663);
    assert(Py_REFCNT(frame_30af6d93f5f6217a334e896384d69663) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 367;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_30af6d93f5f6217a334e896384d69663->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30af6d93f5f6217a334e896384d69663, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30af6d93f5f6217a334e896384d69663->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30af6d93f5f6217a334e896384d69663, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30af6d93f5f6217a334e896384d69663,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_30af6d93f5f6217a334e896384d69663 == cache_frame_30af6d93f5f6217a334e896384d69663) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30af6d93f5f6217a334e896384d69663);
        cache_frame_30af6d93f5f6217a334e896384d69663 = NULL;
    }

    assertFrameObject(frame_30af6d93f5f6217a334e896384d69663);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_initialState = python_pars[6];
    PyObject *par_anchor = python_pars[7];
    PyObject *par_side = python_pars[8];
    PyObject *par_fill = python_pars[9];
    PyObject *par_expand = python_pars[10];
    PyObject *par_kw = python_pars[11];
    PyObject *var_widget = NULL;
    PyObject *var_variable = NULL;
    struct Nuitka_FrameObject *frame_44eb1e4289a76a73d4550a6a088088d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_44eb1e4289a76a73d4550a6a088088d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_44eb1e4289a76a73d4550a6a088088d4)) {
        Py_XDECREF(cache_frame_44eb1e4289a76a73d4550a6a088088d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44eb1e4289a76a73d4550a6a088088d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44eb1e4289a76a73d4550a6a088088d4 = MAKE_FUNCTION_FRAME(tstate, codeobj_44eb1e4289a76a73d4550a6a088088d4, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44eb1e4289a76a73d4550a6a088088d4->m_type_description == NULL);
    frame_44eb1e4289a76a73d4550a6a088088d4 = cache_frame_44eb1e4289a76a73d4550a6a088088d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_44eb1e4289a76a73d4550a6a088088d4);
    assert(Py_REFCNT(frame_44eb1e4289a76a73d4550a6a088088d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_44eb1e4289a76a73d4550a6a088088d4->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_anchor);
        tmp_ass_subvalue_1 = par_anchor;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_1 = var_widget;
        tmp_ass_subscript_1 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_44eb1e4289a76a73d4550a6a088088d4->m_frame.f_lineno = 381;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_variable == NULL);
        var_variable = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_variable);
        tmp_called_instance_1 = var_variable;
        CHECK_OBJECT(par_initialState);
        tmp_args_element_value_11 = par_initialState;
        frame_44eb1e4289a76a73d4550a6a088088d4->m_frame.f_lineno = 382;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[137], tmp_args_element_value_11);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_12 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_13 = par_text;
        CHECK_OBJECT(var_variable);
        tmp_args_element_value_14 = var_variable;
        frame_44eb1e4289a76a73d4550a6a088088d4->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[159],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_variable);
        tmp_ass_subvalue_2 = var_variable;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_2 = var_widget;
        tmp_ass_subscript_2 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44eb1e4289a76a73d4550a6a088088d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44eb1e4289a76a73d4550a6a088088d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44eb1e4289a76a73d4550a6a088088d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44eb1e4289a76a73d4550a6a088088d4,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_initialState,
        par_anchor,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget,
        var_variable
    );


    // Release cached frame if used for exception.
    if (frame_44eb1e4289a76a73d4550a6a088088d4 == cache_frame_44eb1e4289a76a73d4550a6a088088d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44eb1e4289a76a73d4550a6a088088d4);
        cache_frame_44eb1e4289a76a73d4550a6a088088d4 = NULL;
    }

    assertFrameObject(frame_44eb1e4289a76a73d4550a6a088088d4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
    CHECK_OBJECT(var_variable);
    Py_DECREF(var_variable);
    var_variable = NULL;
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

    Py_XDECREF(var_widget);
    var_widget = NULL;
    Py_XDECREF(var_variable);
    var_variable = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_initialState);
    Py_DECREF(par_initialState);
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_initialState);
    Py_DECREF(par_initialState);
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_variable = python_pars[4];
    PyObject *par_value = python_pars[5];
    PyObject *par_command = python_pars[6];
    PyObject *par_help = python_pars[7];
    PyObject *par_anchor = python_pars[8];
    PyObject *par_side = python_pars[9];
    PyObject *par_fill = python_pars[10];
    PyObject *par_expand = python_pars[11];
    PyObject *par_kw = python_pars[12];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_e7704f1024aa958f5ff866744fa39c1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e7704f1024aa958f5ff866744fa39c1e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e7704f1024aa958f5ff866744fa39c1e)) {
        Py_XDECREF(cache_frame_e7704f1024aa958f5ff866744fa39c1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7704f1024aa958f5ff866744fa39c1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7704f1024aa958f5ff866744fa39c1e = MAKE_FUNCTION_FRAME(tstate, codeobj_e7704f1024aa958f5ff866744fa39c1e, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7704f1024aa958f5ff866744fa39c1e->m_type_description == NULL);
    frame_e7704f1024aa958f5ff866744fa39c1e = cache_frame_e7704f1024aa958f5ff866744fa39c1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e7704f1024aa958f5ff866744fa39c1e);
    assert(Py_REFCNT(frame_e7704f1024aa958f5ff866744fa39c1e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_e7704f1024aa958f5ff866744fa39c1e->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_anchor);
        tmp_ass_subvalue_1 = par_anchor;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_1 = var_widget;
        tmp_ass_subscript_1 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_2 = par_value;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_2 = var_widget;
        tmp_ass_subscript_2 = mod_consts[170];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_variable);
        tmp_ass_subvalue_3 = par_variable;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_3 = var_widget;
        tmp_ass_subscript_3 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7704f1024aa958f5ff866744fa39c1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7704f1024aa958f5ff866744fa39c1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7704f1024aa958f5ff866744fa39c1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7704f1024aa958f5ff866744fa39c1e,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_variable,
        par_value,
        par_command,
        par_help,
        par_anchor,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_e7704f1024aa958f5ff866744fa39c1e == cache_frame_e7704f1024aa958f5ff866744fa39c1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7704f1024aa958f5ff866744fa39c1e);
        cache_frame_e7704f1024aa958f5ff866744fa39c1e = NULL;
    }

    assertFrameObject(frame_e7704f1024aa958f5ff866744fa39c1e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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

    Py_XDECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_variable);
    Py_DECREF(par_variable);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_variable);
    Py_DECREF(par_variable);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_anchor);
    Py_DECREF(par_anchor);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__35_newCreateFloater(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_e16e94699bcf06be71b48f3367819afe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e16e94699bcf06be71b48f3367819afe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e16e94699bcf06be71b48f3367819afe)) {
        Py_XDECREF(cache_frame_e16e94699bcf06be71b48f3367819afe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e16e94699bcf06be71b48f3367819afe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e16e94699bcf06be71b48f3367819afe = MAKE_FUNCTION_FRAME(tstate, codeobj_e16e94699bcf06be71b48f3367819afe, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e16e94699bcf06be71b48f3367819afe->m_type_description == NULL);
    frame_e16e94699bcf06be71b48f3367819afe = cache_frame_e16e94699bcf06be71b48f3367819afe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e16e94699bcf06be71b48f3367819afe);
    assert(Py_REFCNT(frame_e16e94699bcf06be71b48f3367819afe) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 407;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[172]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 407;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_e16e94699bcf06be71b48f3367819afe->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e16e94699bcf06be71b48f3367819afe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e16e94699bcf06be71b48f3367819afe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e16e94699bcf06be71b48f3367819afe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e16e94699bcf06be71b48f3367819afe,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_e16e94699bcf06be71b48f3367819afe == cache_frame_e16e94699bcf06be71b48f3367819afe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e16e94699bcf06be71b48f3367819afe);
        cache_frame_e16e94699bcf06be71b48f3367819afe = NULL;
    }

    assertFrameObject(frame_e16e94699bcf06be71b48f3367819afe);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__36_newCreateDial(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_d1caf4ba1580429e8f48c400eef128d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1caf4ba1580429e8f48c400eef128d1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d1caf4ba1580429e8f48c400eef128d1)) {
        Py_XDECREF(cache_frame_d1caf4ba1580429e8f48c400eef128d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1caf4ba1580429e8f48c400eef128d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1caf4ba1580429e8f48c400eef128d1 = MAKE_FUNCTION_FRAME(tstate, codeobj_d1caf4ba1580429e8f48c400eef128d1, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1caf4ba1580429e8f48c400eef128d1->m_type_description == NULL);
    frame_d1caf4ba1580429e8f48c400eef128d1 = cache_frame_d1caf4ba1580429e8f48c400eef128d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d1caf4ba1580429e8f48c400eef128d1);
    assert(Py_REFCNT(frame_d1caf4ba1580429e8f48c400eef128d1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 416;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[173]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 416;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_d1caf4ba1580429e8f48c400eef128d1->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1caf4ba1580429e8f48c400eef128d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1caf4ba1580429e8f48c400eef128d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1caf4ba1580429e8f48c400eef128d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1caf4ba1580429e8f48c400eef128d1,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_d1caf4ba1580429e8f48c400eef128d1 == cache_frame_d1caf4ba1580429e8f48c400eef128d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1caf4ba1580429e8f48c400eef128d1);
        cache_frame_d1caf4ba1580429e8f48c400eef128d1 = NULL;
    }

    assertFrameObject(frame_d1caf4ba1580429e8f48c400eef128d1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__37_newCreateSider(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_418cfb786ae6af24a1f1e0081b1cb1e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3)) {
        Py_XDECREF(cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3 = MAKE_FUNCTION_FRAME(tstate, codeobj_418cfb786ae6af24a1f1e0081b1cb1e3, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3->m_type_description == NULL);
    frame_418cfb786ae6af24a1f1e0081b1cb1e3 = cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_418cfb786ae6af24a1f1e0081b1cb1e3);
    assert(Py_REFCNT(frame_418cfb786ae6af24a1f1e0081b1cb1e3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 425;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[174]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 425;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_418cfb786ae6af24a1f1e0081b1cb1e3->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_418cfb786ae6af24a1f1e0081b1cb1e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_418cfb786ae6af24a1f1e0081b1cb1e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_418cfb786ae6af24a1f1e0081b1cb1e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_418cfb786ae6af24a1f1e0081b1cb1e3,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_418cfb786ae6af24a1f1e0081b1cb1e3 == cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3);
        cache_frame_418cfb786ae6af24a1f1e0081b1cb1e3 = NULL;
    }

    assertFrameObject(frame_418cfb786ae6af24a1f1e0081b1cb1e3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_d99dfca3f66adcb92f2a21270f2161b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d99dfca3f66adcb92f2a21270f2161b6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d99dfca3f66adcb92f2a21270f2161b6)) {
        Py_XDECREF(cache_frame_d99dfca3f66adcb92f2a21270f2161b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d99dfca3f66adcb92f2a21270f2161b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d99dfca3f66adcb92f2a21270f2161b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_d99dfca3f66adcb92f2a21270f2161b6, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d99dfca3f66adcb92f2a21270f2161b6->m_type_description == NULL);
    frame_d99dfca3f66adcb92f2a21270f2161b6 = cache_frame_d99dfca3f66adcb92f2a21270f2161b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d99dfca3f66adcb92f2a21270f2161b6);
    assert(Py_REFCNT(frame_d99dfca3f66adcb92f2a21270f2161b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 434;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[175]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 434;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_d99dfca3f66adcb92f2a21270f2161b6->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d99dfca3f66adcb92f2a21270f2161b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d99dfca3f66adcb92f2a21270f2161b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d99dfca3f66adcb92f2a21270f2161b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d99dfca3f66adcb92f2a21270f2161b6,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_d99dfca3f66adcb92f2a21270f2161b6 == cache_frame_d99dfca3f66adcb92f2a21270f2161b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d99dfca3f66adcb92f2a21270f2161b6);
        cache_frame_d99dfca3f66adcb92f2a21270f2161b6 = NULL;
    }

    assertFrameObject(frame_d99dfca3f66adcb92f2a21270f2161b6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_08a84b5b15fbe1abaca91e4356e7c5a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3)) {
        Py_XDECREF(cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_08a84b5b15fbe1abaca91e4356e7c5a3, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3->m_type_description == NULL);
    frame_08a84b5b15fbe1abaca91e4356e7c5a3 = cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_08a84b5b15fbe1abaca91e4356e7c5a3);
    assert(Py_REFCNT(frame_08a84b5b15fbe1abaca91e4356e7c5a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[177]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_08a84b5b15fbe1abaca91e4356e7c5a3->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08a84b5b15fbe1abaca91e4356e7c5a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08a84b5b15fbe1abaca91e4356e7c5a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08a84b5b15fbe1abaca91e4356e7c5a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08a84b5b15fbe1abaca91e4356e7c5a3,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_08a84b5b15fbe1abaca91e4356e7c5a3 == cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3);
        cache_frame_08a84b5b15fbe1abaca91e4356e7c5a3 = NULL;
    }

    assertFrameObject(frame_08a84b5b15fbe1abaca91e4356e7c5a3);

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
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_05fc3925d7a48cc46e6fcdc3dfa3df3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c)) {
        Py_XDECREF(cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c = MAKE_FUNCTION_FRAME(tstate, codeobj_05fc3925d7a48cc46e6fcdc3dfa3df3c, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c->m_type_description == NULL);
    frame_05fc3925d7a48cc46e6fcdc3dfa3df3c = cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05fc3925d7a48cc46e6fcdc3dfa3df3c);
    assert(Py_REFCNT(frame_05fc3925d7a48cc46e6fcdc3dfa3df3c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 451;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[178]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 451;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_05fc3925d7a48cc46e6fcdc3dfa3df3c->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05fc3925d7a48cc46e6fcdc3dfa3df3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05fc3925d7a48cc46e6fcdc3dfa3df3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05fc3925d7a48cc46e6fcdc3dfa3df3c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05fc3925d7a48cc46e6fcdc3dfa3df3c,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_05fc3925d7a48cc46e6fcdc3dfa3df3c == cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c);
        cache_frame_05fc3925d7a48cc46e6fcdc3dfa3df3c = NULL;
    }

    assertFrameObject(frame_05fc3925d7a48cc46e6fcdc3dfa3df3c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_side = python_pars[6];
    PyObject *par_fill = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_kw = python_pars[9];
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_56a4a5ee6403c54c24cb2320ef5390a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56a4a5ee6403c54c24cb2320ef5390a1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_56a4a5ee6403c54c24cb2320ef5390a1)) {
        Py_XDECREF(cache_frame_56a4a5ee6403c54c24cb2320ef5390a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56a4a5ee6403c54c24cb2320ef5390a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56a4a5ee6403c54c24cb2320ef5390a1 = MAKE_FUNCTION_FRAME(tstate, codeobj_56a4a5ee6403c54c24cb2320ef5390a1, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56a4a5ee6403c54c24cb2320ef5390a1->m_type_description == NULL);
    frame_56a4a5ee6403c54c24cb2320ef5390a1 = cache_frame_56a4a5ee6403c54c24cb2320ef5390a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_56a4a5ee6403c54c24cb2320ef5390a1);
    assert(Py_REFCNT(frame_56a4a5ee6403c54c24cb2320ef5390a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_2 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_3 = par_text;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 460;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[179]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 460;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_5 = par_help;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_6 = par_command;
        CHECK_OBJECT(par_side);
        tmp_args_element_value_7 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_args_element_value_8 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_args_element_value_9 = par_expand;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_10 = par_kw;
        frame_56a4a5ee6403c54c24cb2320ef5390a1->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56a4a5ee6403c54c24cb2320ef5390a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56a4a5ee6403c54c24cb2320ef5390a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56a4a5ee6403c54c24cb2320ef5390a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56a4a5ee6403c54c24cb2320ef5390a1,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_56a4a5ee6403c54c24cb2320ef5390a1 == cache_frame_56a4a5ee6403c54c24cb2320ef5390a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56a4a5ee6403c54c24cb2320ef5390a1);
        cache_frame_56a4a5ee6403c54c24cb2320ef5390a1 = NULL;
    }

    assertFrameObject(frame_56a4a5ee6403c54c24cb2320ef5390a1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_items = python_pars[6];
    PyObject *par_labelpos = python_pars[7];
    PyObject *par_label_anchor = python_pars[8];
    PyObject *par_label_width = python_pars[9];
    PyObject *par_menu_tearoff = python_pars[10];
    PyObject *par_side = python_pars[11];
    PyObject *par_fill = python_pars[12];
    PyObject *par_expand = python_pars[13];
    PyObject *par_kw = python_pars[14];
    PyObject *var_variable = NULL;
    PyObject *var_widget = NULL;
    struct Nuitka_FrameObject *frame_2f940e23b21f913652b1b3803eabea61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2f940e23b21f913652b1b3803eabea61 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f940e23b21f913652b1b3803eabea61)) {
        Py_XDECREF(cache_frame_2f940e23b21f913652b1b3803eabea61);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f940e23b21f913652b1b3803eabea61 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f940e23b21f913652b1b3803eabea61 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f940e23b21f913652b1b3803eabea61, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f940e23b21f913652b1b3803eabea61->m_type_description == NULL);
    frame_2f940e23b21f913652b1b3803eabea61 = cache_frame_2f940e23b21f913652b1b3803eabea61;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f940e23b21f913652b1b3803eabea61);
    assert(Py_REFCNT(frame_2f940e23b21f913652b1b3803eabea61) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 470;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_variable == NULL);
        var_variable = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_items);
        tmp_args_element_value_1 = par_items;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 471;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[63];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_variable);
        tmp_expression_value_1 = var_variable;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_items);
        tmp_expression_value_2 = par_items;
        tmp_subscript_value_1 = mod_consts[63];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 472;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    CHECK_OBJECT(par_items);
    tmp_dictset_value = par_items;
    CHECK_OBJECT(par_kw);
    tmp_dictset_dict = par_kw;
    tmp_dictset_key = mod_consts[181];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_text);
        tmp_ass_subvalue_1 = par_text;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_1 = par_kw;
        tmp_ass_subscript_1 = mod_consts[182];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_labelpos);
        tmp_ass_subvalue_2 = par_labelpos;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_2 = par_kw;
        tmp_ass_subscript_2 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_label_anchor);
        tmp_ass_subvalue_3 = par_label_anchor;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_3 = par_kw;
        tmp_ass_subscript_3 = mod_consts[184];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(par_label_width);
        tmp_ass_subvalue_4 = par_label_width;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_4 = par_kw;
        tmp_ass_subscript_4 = mod_consts[185];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(par_menu_tearoff);
        tmp_ass_subvalue_5 = par_menu_tearoff;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_5 = par_kw;
        tmp_ass_subscript_5 = mod_consts[186];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_variable == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[167]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_6 = var_variable;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_6 = par_kw;
        tmp_ass_subscript_6 = mod_consts[187];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[188]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_tuple_element_1 = par_parent;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(par_command);
        tmp_ass_subvalue_7 = par_command;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_7 = var_widget;
        tmp_ass_subscript_7 = mod_consts[150];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_widget);
        tmp_expression_value_4 = var_widget;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_side);
        tmp_kw_call_value_0_1 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_value_1_1 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_value_2_1 = par_expand;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 486;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_widget);
        tmp_called_instance_1 = var_widget;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 488;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[189], 0)
        );

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_help);
        tmp_args_element_value_4 = par_help;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_5 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_6 = par_text;
        CHECK_OBJECT(var_widget);
        tmp_args_element_value_7 = var_widget;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[152],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[159]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_category);
        tmp_args_element_value_8 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_9 = par_text;
        if (var_variable == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[167]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_variable;
        frame_2f940e23b21f913652b1b3803eabea61->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f940e23b21f913652b1b3803eabea61, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f940e23b21f913652b1b3803eabea61->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f940e23b21f913652b1b3803eabea61, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f940e23b21f913652b1b3803eabea61,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_items,
        par_labelpos,
        par_label_anchor,
        par_label_width,
        par_menu_tearoff,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_variable,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_2f940e23b21f913652b1b3803eabea61 == cache_frame_2f940e23b21f913652b1b3803eabea61) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f940e23b21f913652b1b3803eabea61);
        cache_frame_2f940e23b21f913652b1b3803eabea61 = NULL;
    }

    assertFrameObject(frame_2f940e23b21f913652b1b3803eabea61);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_variable);
    var_variable = NULL;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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

    Py_XDECREF(var_variable);
    var_variable = NULL;
    Py_XDECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_labelpos);
    Py_DECREF(par_labelpos);
    CHECK_OBJECT(par_label_anchor);
    Py_DECREF(par_label_anchor);
    CHECK_OBJECT(par_label_width);
    Py_DECREF(par_label_width);
    CHECK_OBJECT(par_menu_tearoff);
    Py_DECREF(par_menu_tearoff);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_labelpos);
    Py_DECREF(par_labelpos);
    CHECK_OBJECT(par_label_anchor);
    Py_DECREF(par_label_anchor);
    CHECK_OBJECT(par_label_width);
    Py_DECREF(par_label_width);
    CHECK_OBJECT(par_menu_tearoff);
    Py_DECREF(par_menu_tearoff);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_category = python_pars[2];
    PyObject *par_text = python_pars[3];
    PyObject *par_help = python_pars[4];
    PyObject *par_command = python_pars[5];
    PyObject *par_items = python_pars[6];
    PyObject *par_state = python_pars[7];
    PyObject *par_history = python_pars[8];
    PyObject *par_labelpos = python_pars[9];
    PyObject *par_label_anchor = python_pars[10];
    PyObject *par_label_width = python_pars[11];
    PyObject *par_entry_width = python_pars[12];
    PyObject *par_side = python_pars[13];
    PyObject *par_fill = python_pars[14];
    PyObject *par_expand = python_pars[15];
    PyObject *par_kw = python_pars[16];
    PyObject *var_widget = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    struct Nuitka_FrameObject *frame_89eab973f61a1da23879afcd373e6097;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_89eab973f61a1da23879afcd373e6097 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT(par_text);
    tmp_dictset_value = par_text;
    CHECK_OBJECT(par_kw);
    tmp_dictset_dict = par_kw;
    tmp_dictset_key = mod_consts[182];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    // Tried code:
    if (isFrameUnusable(cache_frame_89eab973f61a1da23879afcd373e6097)) {
        Py_XDECREF(cache_frame_89eab973f61a1da23879afcd373e6097);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89eab973f61a1da23879afcd373e6097 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89eab973f61a1da23879afcd373e6097 = MAKE_FUNCTION_FRAME(tstate, codeobj_89eab973f61a1da23879afcd373e6097, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89eab973f61a1da23879afcd373e6097->m_type_description == NULL);
    frame_89eab973f61a1da23879afcd373e6097 = cache_frame_89eab973f61a1da23879afcd373e6097;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_89eab973f61a1da23879afcd373e6097);
    assert(Py_REFCNT(frame_89eab973f61a1da23879afcd373e6097) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_labelpos);
        tmp_ass_subvalue_1 = par_labelpos;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_1 = par_kw;
        tmp_ass_subscript_1 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_label_anchor);
        tmp_ass_subvalue_2 = par_label_anchor;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_2 = par_kw;
        tmp_ass_subscript_2 = mod_consts[184];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_label_width);
        tmp_ass_subvalue_3 = par_label_width;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_3 = par_kw;
        tmp_ass_subscript_3 = mod_consts[185];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(par_entry_width);
        tmp_ass_subvalue_4 = par_entry_width;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_4 = par_kw;
        tmp_ass_subscript_4 = mod_consts[190];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(par_items);
        tmp_ass_subvalue_5 = par_items;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_5 = par_kw;
        tmp_ass_subscript_5 = mod_consts[191];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT(par_state);
        tmp_ass_subvalue_6 = par_state;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_6 = par_kw;
        tmp_ass_subscript_6 = mod_consts[192];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[193]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_tuple_element_1 = par_parent;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widget == NULL);
        var_widget = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(par_command);
        tmp_ass_subvalue_7 = par_command;
        CHECK_OBJECT(var_widget);
        tmp_ass_subscribed_7 = var_widget;
        tmp_ass_subscript_7 = mod_consts[194];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_items);
        tmp_args_element_value_1 = par_items;
        frame_89eab973f61a1da23879afcd373e6097->m_frame.f_lineno = 513;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[63];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_widget);
        tmp_expression_value_2 = var_widget;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[195]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_items);
        tmp_expression_value_3 = par_items;
        tmp_subscript_value_1 = mod_consts[63];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_89eab973f61a1da23879afcd373e6097->m_frame.f_lineno = 514;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_widget);
        tmp_expression_value_4 = var_widget;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_side);
        tmp_kw_call_value_0_1 = par_side;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_value_1_1 = par_fill;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_value_2_1 = par_expand;
        frame_89eab973f61a1da23879afcd373e6097->m_frame.f_lineno = 516;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_widget);
        tmp_args_element_value_3 = var_widget;
        CHECK_OBJECT(par_help);
        tmp_args_element_value_4 = par_help;
        frame_89eab973f61a1da23879afcd373e6097->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_category);
        tmp_args_element_value_5 = par_category;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_6 = par_text;
        CHECK_OBJECT(var_widget);
        tmp_args_element_value_7 = var_widget;
        frame_89eab973f61a1da23879afcd373e6097->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[152],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89eab973f61a1da23879afcd373e6097, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89eab973f61a1da23879afcd373e6097->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89eab973f61a1da23879afcd373e6097, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89eab973f61a1da23879afcd373e6097,
        type_description_1,
        par_self,
        par_parent,
        par_category,
        par_text,
        par_help,
        par_command,
        par_items,
        par_state,
        par_history,
        par_labelpos,
        par_label_anchor,
        par_label_width,
        par_entry_width,
        par_side,
        par_fill,
        par_expand,
        par_kw,
        var_widget
    );


    // Release cached frame if used for exception.
    if (frame_89eab973f61a1da23879afcd373e6097 == cache_frame_89eab973f61a1da23879afcd373e6097) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89eab973f61a1da23879afcd373e6097);
        cache_frame_89eab973f61a1da23879afcd373e6097 = NULL;
    }

    assertFrameObject(frame_89eab973f61a1da23879afcd373e6097);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_widget);
    tmp_return_value = var_widget;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widget);
    Py_DECREF(var_widget);
    var_widget = NULL;
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

    Py_XDECREF(var_widget);
    var_widget = NULL;
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_history);
    Py_DECREF(par_history);
    CHECK_OBJECT(par_labelpos);
    Py_DECREF(par_labelpos);
    CHECK_OBJECT(par_label_anchor);
    Py_DECREF(par_label_anchor);
    CHECK_OBJECT(par_label_width);
    Py_DECREF(par_label_width);
    CHECK_OBJECT(par_entry_width);
    Py_DECREF(par_entry_width);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
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
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_history);
    Py_DECREF(par_history);
    CHECK_OBJECT(par_labelpos);
    Py_DECREF(par_labelpos);
    CHECK_OBJECT(par_label_anchor);
    Py_DECREF(par_label_anchor);
    CHECK_OBJECT(par_label_width);
    Py_DECREF(par_label_width);
    CHECK_OBJECT(par_entry_width);
    Py_DECREF(par_entry_width);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__44_transformRGB(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rgb = python_pars[1];
    PyObject *par_max = python_pars[2];
    PyObject *var_retval = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_38eeac297388a32c4d650942458ad67b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_38eeac297388a32c4d650942458ad67b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[196];
        assert(var_retval == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_retval = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_38eeac297388a32c4d650942458ad67b)) {
        Py_XDECREF(cache_frame_38eeac297388a32c4d650942458ad67b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38eeac297388a32c4d650942458ad67b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38eeac297388a32c4d650942458ad67b = MAKE_FUNCTION_FRAME(tstate, codeobj_38eeac297388a32c4d650942458ad67b, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38eeac297388a32c4d650942458ad67b->m_type_description == NULL);
    frame_38eeac297388a32c4d650942458ad67b = cache_frame_38eeac297388a32c4d650942458ad67b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_38eeac297388a32c4d650942458ad67b);
    assert(Py_REFCNT(frame_38eeac297388a32c4d650942458ad67b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_rgb);
        tmp_expression_value_1 = par_rgb;
        tmp_subscript_value_1 = mod_consts[63];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_rgb);
            tmp_expression_value_2 = par_rgb;
            tmp_subscript_value_2 = mod_consts[6];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_rgb);
            tmp_expression_value_3 = par_rgb;
            tmp_subscript_value_3 = mod_consts[197];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
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
                type_description_1 = "ooooo";
                exception_lineno = 524;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_4;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_truediv_expr_left_1 = var_v;
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[198]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 525;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_right_1 = par_max;
        tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = mod_consts[199];
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
        tmp_cmp_expr_right_1 = mod_consts[199];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[199];
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_6;
            Py_INCREF(var_v);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_2 = var_v;
        tmp_cmp_expr_right_2 = mod_consts[63];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[63];
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_7;
            Py_INCREF(var_v);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_1 = mod_consts[200];
        if (var_retval == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[201]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 530;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = var_retval;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_v);
            tmp_args_element_value_1 = var_v;
            frame_38eeac297388a32c4d650942458ad67b->m_frame.f_lineno = 530;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 530;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_retval;
            var_retval = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 524;
        type_description_1 = "ooooo";
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
    if (var_retval == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[201]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 531;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_retval;
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
        exception_tb = MAKE_TRACEBACK(frame_38eeac297388a32c4d650942458ad67b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38eeac297388a32c4d650942458ad67b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38eeac297388a32c4d650942458ad67b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38eeac297388a32c4d650942458ad67b,
        type_description_1,
        par_self,
        par_rgb,
        par_max,
        var_retval,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_38eeac297388a32c4d650942458ad67b == cache_frame_38eeac297388a32c4d650942458ad67b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38eeac297388a32c4d650942458ad67b);
        cache_frame_38eeac297388a32c4d650942458ad67b = NULL;
    }

    assertFrameObject(frame_38eeac297388a32c4d650942458ad67b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_retval);
    var_retval = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_retval);
    var_retval = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_rgb);
    Py_DECREF(par_rgb);
    CHECK_OBJECT(par_max);
    Py_DECREF(par_max);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rgb);
    Py_DECREF(par_rgb);
    CHECK_OBJECT(par_max);
    Py_DECREF(par_max);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$AppShell$$$function__45___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_226c08e1b9b7f61db4010e6d4d2580cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_226c08e1b9b7f61db4010e6d4d2580cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_226c08e1b9b7f61db4010e6d4d2580cf)) {
        Py_XDECREF(cache_frame_226c08e1b9b7f61db4010e6d4d2580cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_226c08e1b9b7f61db4010e6d4d2580cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_226c08e1b9b7f61db4010e6d4d2580cf = MAKE_FUNCTION_FRAME(tstate, codeobj_226c08e1b9b7f61db4010e6d4d2580cf, module_direct$tkwidgets$AppShell, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_226c08e1b9b7f61db4010e6d4d2580cf->m_type_description == NULL);
    frame_226c08e1b9b7f61db4010e6d4d2580cf = cache_frame_226c08e1b9b7f61db4010e6d4d2580cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_226c08e1b9b7f61db4010e6d4d2580cf);
    assert(Py_REFCNT(frame_226c08e1b9b7f61db4010e6d4d2580cf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_226c08e1b9b7f61db4010e6d4d2580cf->m_frame.f_lineno = 541;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 542;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_226c08e1b9b7f61db4010e6d4d2580cf->m_frame.f_lineno = 542;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
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
        exception_tb = MAKE_TRACEBACK(frame_226c08e1b9b7f61db4010e6d4d2580cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_226c08e1b9b7f61db4010e6d4d2580cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_226c08e1b9b7f61db4010e6d4d2580cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_226c08e1b9b7f61db4010e6d4d2580cf,
        type_description_1,
        par_self,
        par_parent,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_226c08e1b9b7f61db4010e6d4d2580cf == cache_frame_226c08e1b9b7f61db4010e6d4d2580cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_226c08e1b9b7f61db4010e6d4d2580cf);
        cache_frame_226c08e1b9b7f61db4010e6d4d2580cf = NULL;
    }

    assertFrameObject(frame_226c08e1b9b7f61db4010e6d4d2580cf);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__46_createButtons(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_295fd9ee7f22535530f5ce70a44b756d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_295fd9ee7f22535530f5ce70a44b756d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_295fd9ee7f22535530f5ce70a44b756d)) {
        Py_XDECREF(cache_frame_295fd9ee7f22535530f5ce70a44b756d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_295fd9ee7f22535530f5ce70a44b756d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_295fd9ee7f22535530f5ce70a44b756d = MAKE_FUNCTION_FRAME(tstate, codeobj_295fd9ee7f22535530f5ce70a44b756d, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_295fd9ee7f22535530f5ce70a44b756d->m_type_description == NULL);
    frame_295fd9ee7f22535530f5ce70a44b756d = cache_frame_295fd9ee7f22535530f5ce70a44b756d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_295fd9ee7f22535530f5ce70a44b756d);
    assert(Py_REFCNT(frame_295fd9ee7f22535530f5ce70a44b756d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[204]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[205];
        tmp_kw_call_value_1_1 = mod_consts[205];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[144]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 548;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_295fd9ee7f22535530f5ce70a44b756d->m_frame.f_lineno = 545;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[206], kw_values, mod_consts[207]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
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
        exception_tb = MAKE_TRACEBACK(frame_295fd9ee7f22535530f5ce70a44b756d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_295fd9ee7f22535530f5ce70a44b756d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_295fd9ee7f22535530f5ce70a44b756d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_295fd9ee7f22535530f5ce70a44b756d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_295fd9ee7f22535530f5ce70a44b756d == cache_frame_295fd9ee7f22535530f5ce70a44b756d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_295fd9ee7f22535530f5ce70a44b756d);
        cache_frame_295fd9ee7f22535530f5ce70a44b756d = NULL;
    }

    assertFrameObject(frame_295fd9ee7f22535530f5ce70a44b756d);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__47_createMain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d634d9be428bd9938a8909de7c8774ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d634d9be428bd9938a8909de7c8774ee = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d634d9be428bd9938a8909de7c8774ee)) {
        Py_XDECREF(cache_frame_d634d9be428bd9938a8909de7c8774ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d634d9be428bd9938a8909de7c8774ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d634d9be428bd9938a8909de7c8774ee = MAKE_FUNCTION_FRAME(tstate, codeobj_d634d9be428bd9938a8909de7c8774ee, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d634d9be428bd9938a8909de7c8774ee->m_type_description == NULL);
    frame_d634d9be428bd9938a8909de7c8774ee = cache_frame_d634d9be428bd9938a8909de7c8774ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d634d9be428bd9938a8909de7c8774ee);
    assert(Py_REFCNT(frame_d634d9be428bd9938a8909de7c8774ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[208];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_1;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_d634d9be428bd9938a8909de7c8774ee->m_frame.f_lineno = 553;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[44]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_value_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[209]);
        frame_d634d9be428bd9938a8909de7c8774ee->m_frame.f_lineno = 551;
        tmp_assattr_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[208], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[208]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d634d9be428bd9938a8909de7c8774ee->m_frame.f_lineno = 555;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[35]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[208]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[210];
        frame_d634d9be428bd9938a8909de7c8774ee->m_frame.f_lineno = 556;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d634d9be428bd9938a8909de7c8774ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d634d9be428bd9938a8909de7c8774ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d634d9be428bd9938a8909de7c8774ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d634d9be428bd9938a8909de7c8774ee,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d634d9be428bd9938a8909de7c8774ee == cache_frame_d634d9be428bd9938a8909de7c8774ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d634d9be428bd9938a8909de7c8774ee);
        cache_frame_d634d9be428bd9938a8909de7c8774ee = NULL;
    }

    assertFrameObject(frame_d634d9be428bd9938a8909de7c8774ee);

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


static PyObject *impl_direct$tkwidgets$AppShell$$$function__48_createInterface(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_390e73da8206fba7d84b18f2630dbc08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_390e73da8206fba7d84b18f2630dbc08 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_390e73da8206fba7d84b18f2630dbc08)) {
        Py_XDECREF(cache_frame_390e73da8206fba7d84b18f2630dbc08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_390e73da8206fba7d84b18f2630dbc08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_390e73da8206fba7d84b18f2630dbc08 = MAKE_FUNCTION_FRAME(tstate, codeobj_390e73da8206fba7d84b18f2630dbc08, module_direct$tkwidgets$AppShell, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_390e73da8206fba7d84b18f2630dbc08->m_type_description == NULL);
    frame_390e73da8206fba7d84b18f2630dbc08 = cache_frame_390e73da8206fba7d84b18f2630dbc08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_390e73da8206fba7d84b18f2630dbc08);
    assert(Py_REFCNT(frame_390e73da8206fba7d84b18f2630dbc08) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_390e73da8206fba7d84b18f2630dbc08->m_frame.f_lineno = 559;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[211]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_390e73da8206fba7d84b18f2630dbc08->m_frame.f_lineno = 560;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[212]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_390e73da8206fba7d84b18f2630dbc08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_390e73da8206fba7d84b18f2630dbc08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_390e73da8206fba7d84b18f2630dbc08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_390e73da8206fba7d84b18f2630dbc08,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_390e73da8206fba7d84b18f2630dbc08 == cache_frame_390e73da8206fba7d84b18f2630dbc08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_390e73da8206fba7d84b18f2630dbc08);
        cache_frame_390e73da8206fba7d84b18f2630dbc08 = NULL;
    }

    assertFrameObject(frame_390e73da8206fba7d84b18f2630dbc08);

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



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__10___createAboutBox() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__10___createAboutBox,
        mod_consts[269],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_c221df33a9502568e5c9db225c2626a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__11_toggleBalloon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__11_toggleBalloon,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_2c6136b1c6164b3ae2909ffa44688d97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__12_showAbout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__12_showAbout,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        codeobj_a27451c9c621d2fcd11c3fc15cbe1e85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__13_quit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__13_quit,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_5998e36b2662c4bea2a93bdc8a184eff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__14_appInit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        codeobj_4adaebea728190a11565dda1fcb9a17b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__15_createInterface() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[275],
#endif
        codeobj_72bf7a3203b5f04912e066d864695b62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__16_onDestroy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_3ce910c9223cd4cbfecbbfaae6705eb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__17_createMenuBar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__17_createMenuBar,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        codeobj_e48b38605167642d9dc456c0e39a9912,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__18_interior() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__18_interior,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[278],
#endif
        codeobj_456acf10b5c9195412dd509be4eed06d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__19_balloon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__19_balloon,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        codeobj_c5f58bfbcafd0e8eab9cce8d66834f92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_91c1a031a50154809e2e9ffeae7722d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__20_buttonBox() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__20_buttonBox,
        mod_consts[280],
#if PYTHON_VERSION >= 0x300
        mod_consts[281],
#endif
        codeobj_e70299c3b969d7a48fe6b76f78786901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__21_messageBar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__21_messageBar,
        mod_consts[282],
#if PYTHON_VERSION >= 0x300
        mod_consts[283],
#endif
        codeobj_da6085de2e0715fd48e37f1a041b6e04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__22_buttonAdd(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__22_buttonAdd,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[285],
#endif
        codeobj_7abb47a9a256518f51adb7089638d5cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__23_alignbuttons() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__23_alignbuttons,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[286],
#endif
        codeobj_611da5c828aaad1fa364104199bc71cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        mod_consts[148],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__24_bind(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__24_bind,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[287],
#endif
        codeobj_b494f2cab71bd0a08c25801406988c13,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__25_updateProgress(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__25_updateProgress,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[289],
#endif
        codeobj_5395d44808d9c9c360b8187daccf689a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__26_addWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__26_addWidget,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        codeobj_b0d790e036960789f6b6498ad5ade74a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__27_getWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__27_getWidget,
        mod_consts[291],
#if PYTHON_VERSION >= 0x300
        mod_consts[292],
#endif
        codeobj_bcacd4bb2fa53a80933948a73d7342b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__28_addVariable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__28_addVariable,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_da01dab285ead5feeb14f7cc1c5649d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__29_getVariable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__29_getVariable,
        mod_consts[294],
#if PYTHON_VERSION >= 0x300
        mod_consts[295],
#endif
        codeobj_395d9c67404687250ccdddabf614bee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__2_resetVariableDict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__2_resetVariableDict,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f43ca045d6286e3fc882cb81e840d3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__30_createWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__30_createWidget,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[296],
#endif
        codeobj_d10ab9e229cb040087b3a378cdb39dd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry,
        mod_consts[298],
#if PYTHON_VERSION >= 0x300
        mod_consts[299],
#endif
        codeobj_bb70d19facae466a750e1e5dcbc50a8a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        mod_consts[160],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__32_newCreateButton(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__32_newCreateButton,
        mod_consts[300],
#if PYTHON_VERSION >= 0x300
        mod_consts[301],
#endif
        codeobj_30af6d93f5f6217a334e896384d69663,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        mod_consts[163],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton,
        mod_consts[303],
#if PYTHON_VERSION >= 0x300
        mod_consts[304],
#endif
        codeobj_44eb1e4289a76a73d4550a6a088088d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        mod_consts[168],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton,
        mod_consts[305],
#if PYTHON_VERSION >= 0x300
        mod_consts[306],
#endif
        codeobj_e7704f1024aa958f5ff866744fa39c1e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        mod_consts[171],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__35_newCreateFloater(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__35_newCreateFloater,
        mod_consts[307],
#if PYTHON_VERSION >= 0x300
        mod_consts[308],
#endif
        codeobj_e16e94699bcf06be71b48f3367819afe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__36_newCreateDial(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__36_newCreateDial,
        mod_consts[309],
#if PYTHON_VERSION >= 0x300
        mod_consts[310],
#endif
        codeobj_d1caf4ba1580429e8f48c400eef128d1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__37_newCreateSider(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__37_newCreateSider,
        mod_consts[311],
#if PYTHON_VERSION >= 0x300
        mod_consts[312],
#endif
        codeobj_418cfb786ae6af24a1f1e0081b1cb1e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale,
        mod_consts[313],
#if PYTHON_VERSION >= 0x300
        mod_consts[314],
#endif
        codeobj_d99dfca3f66adcb92f2a21270f2161b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry,
        mod_consts[315],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_08a84b5b15fbe1abaca91e4356e7c5a3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__3___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__3___init__,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_1480370a05d8331e821338d267ef0171,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry,
        mod_consts[317],
#if PYTHON_VERSION >= 0x300
        mod_consts[318],
#endif
        codeobj_05fc3925d7a48cc46e6fcdc3dfa3df3c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry,
        mod_consts[319],
#if PYTHON_VERSION >= 0x300
        mod_consts[320],
#endif
        codeobj_56a4a5ee6403c54c24cb2320ef5390a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        mod_consts[323],
#endif
        codeobj_2f940e23b21f913652b1b3803eabea61,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox,
        mod_consts[325],
#if PYTHON_VERSION >= 0x300
        mod_consts[326],
#endif
        codeobj_89eab973f61a1da23879afcd373e6097,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__44_transformRGB(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__44_transformRGB,
        mod_consts[328],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_38eeac297388a32c4d650942458ad67b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__45___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__45___init__,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_226c08e1b9b7f61db4010e6d4d2580cf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__46_createButtons() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__46_createButtons,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        mod_consts[333],
#endif
        codeobj_295fd9ee7f22535530f5ce70a44b756d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__47_createMain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__47_createMain,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_d634d9be428bd9938a8909de7c8774ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__48_createInterface() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__48_createInterface,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[335],
#endif
        codeobj_390e73da8206fba7d84b18f2630dbc08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__4___createInterface() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__4___createInterface,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_5b9776879ca591454fdca112acef24ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__5___createBalloon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__5___createBalloon,
        mod_consts[259],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_7d05e2014461bc7c764733317b383896,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__6___createMenuBar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__6___createMenuBar,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_5adec66cf4b6d94e0f565620f544f1e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__7___createDataArea() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__7___createDataArea,
        mod_consts[263],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_383c8dee09ca863eeb79b3b5e35e74ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__8___createCommandArea() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__8___createCommandArea,
        mod_consts[265],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_e9f396eabbbeb316ff7a7b5d04ad0571,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__9___createMessageBar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$AppShell$$$function__9___createMessageBar,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        codeobj_639c42d0a086b4b09eb712ec214922a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$AppShell,
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

function_impl_code functable_direct$tkwidgets$AppShell[] = {
    impl_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict,
    impl_direct$tkwidgets$AppShell$$$function__2_resetVariableDict,
    impl_direct$tkwidgets$AppShell$$$function__3___init__,
    impl_direct$tkwidgets$AppShell$$$function__4___createInterface,
    impl_direct$tkwidgets$AppShell$$$function__5___createBalloon,
    impl_direct$tkwidgets$AppShell$$$function__6___createMenuBar,
    impl_direct$tkwidgets$AppShell$$$function__7___createDataArea,
    impl_direct$tkwidgets$AppShell$$$function__8___createCommandArea,
    impl_direct$tkwidgets$AppShell$$$function__9___createMessageBar,
    impl_direct$tkwidgets$AppShell$$$function__10___createAboutBox,
    impl_direct$tkwidgets$AppShell$$$function__11_toggleBalloon,
    impl_direct$tkwidgets$AppShell$$$function__12_showAbout,
    impl_direct$tkwidgets$AppShell$$$function__13_quit,
    NULL,
    NULL,
    NULL,
    impl_direct$tkwidgets$AppShell$$$function__17_createMenuBar,
    impl_direct$tkwidgets$AppShell$$$function__18_interior,
    impl_direct$tkwidgets$AppShell$$$function__19_balloon,
    impl_direct$tkwidgets$AppShell$$$function__20_buttonBox,
    impl_direct$tkwidgets$AppShell$$$function__21_messageBar,
    impl_direct$tkwidgets$AppShell$$$function__22_buttonAdd,
    impl_direct$tkwidgets$AppShell$$$function__23_alignbuttons,
    impl_direct$tkwidgets$AppShell$$$function__24_bind,
    impl_direct$tkwidgets$AppShell$$$function__25_updateProgress,
    impl_direct$tkwidgets$AppShell$$$function__26_addWidget,
    impl_direct$tkwidgets$AppShell$$$function__27_getWidget,
    impl_direct$tkwidgets$AppShell$$$function__28_addVariable,
    impl_direct$tkwidgets$AppShell$$$function__29_getVariable,
    impl_direct$tkwidgets$AppShell$$$function__30_createWidget,
    impl_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry,
    impl_direct$tkwidgets$AppShell$$$function__32_newCreateButton,
    impl_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton,
    impl_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton,
    impl_direct$tkwidgets$AppShell$$$function__35_newCreateFloater,
    impl_direct$tkwidgets$AppShell$$$function__36_newCreateDial,
    impl_direct$tkwidgets$AppShell$$$function__37_newCreateSider,
    impl_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale,
    impl_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry,
    impl_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry,
    impl_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry,
    impl_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu,
    impl_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox,
    impl_direct$tkwidgets$AppShell$$$function__44_transformRGB,
    impl_direct$tkwidgets$AppShell$$$function__45___init__,
    impl_direct$tkwidgets$AppShell$$$function__46_createButtons,
    impl_direct$tkwidgets$AppShell$$$function__47_createMain,
    impl_direct$tkwidgets$AppShell$$$function__48_createInterface,
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

    function_impl_code *current = functable_direct$tkwidgets$AppShell;
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

    if (offset > sizeof(functable_direct$tkwidgets$AppShell) || offset < 0) {
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
        functable_direct$tkwidgets$AppShell[offset],
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
        module_direct$tkwidgets$AppShell,
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
PyObject *modulecode_direct$tkwidgets$AppShell(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.tkwidgets.AppShell");

    // Store the module for future use.
    module_direct$tkwidgets$AppShell = module;

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
        PRINT_STRING("direct.tkwidgets.AppShell: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.tkwidgets.AppShell: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$tkwidgets$AppShell\n");

    moduledict_direct$tkwidgets$AppShell = MODULE_DICT(module_direct$tkwidgets$AppShell);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$tkwidgets$AppShell,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$AppShell,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[227]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$AppShell,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$AppShell,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$AppShell,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$tkwidgets$AppShell);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$tkwidgets$AppShell);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_cf443efc12ac6352de6be85d53b85e06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_68348a6b279d3c7b162683f08709c163_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533 = NULL;
    struct Nuitka_FrameObject *frame_e16f57fbd3469cd7afe8db0cc5e950bd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_2);
    }
    frame_cf443efc12ac6352de6be85d53b85e06 = MAKE_MODULE_FRAME(codeobj_cf443efc12ac6352de6be85d53b85e06, module_direct$tkwidgets$AppShell);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf443efc12ac6352de6be85d53b85e06);
    assert(Py_REFCNT(frame_cf443efc12ac6352de6be85d53b85e06) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[217], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[218], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST1(mod_consts[23]);
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[221];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[222];
        tmp_level_value_1 = mod_consts[63];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
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
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[223],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[223]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[224];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_fromlist_value_2 = mod_consts[225];
        tmp_level_value_2 = mod_consts[63];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 11;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$AppShell, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[7];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[63];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[227];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[228];
        tmp_level_value_4 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[173],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[173]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[227];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[229];
        tmp_level_value_5 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 14;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[172],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[172]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[227];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[230];
        tmp_level_value_6 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 15;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[174],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[174]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[227];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[231];
        tmp_level_value_7 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 16;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[175],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[175]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[227];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[232];
        tmp_level_value_8 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 17;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[176],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[176]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[227];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[233];
        tmp_level_value_9 = mod_consts[6];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 18;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_direct$tkwidgets$AppShell,
                mod_consts[101],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_13);
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[234];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_locals_arg_value_10 = (PyObject *)moduledict_direct$tkwidgets$AppShell;
        tmp_fromlist_value_10 = mod_consts[225];
        tmp_level_value_10 = mod_consts[63];
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 21;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$AppShell, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        tmp_subscript_value_1 = mod_consts[1];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_subscript_result_1);
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cf443efc12ac6352de6be85d53b85e06, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cf443efc12ac6352de6be85d53b85e06, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
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
        tmp_ass_subvalue_1 = MAKE_DICT_EMPTY();
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 35;

            goto try_except_handler_2;
        }
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_2;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 32;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cf443efc12ac6352de6be85d53b85e06->m_frame) frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    // Tried code:
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_result_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_3;
        }
        tmp_subscript_value_2 = mod_consts[2];
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_subscript_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_subscript_result_2);
    }
    goto try_end_3;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_cf443efc12ac6352de6be85d53b85e06, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_cf443efc12ac6352de6be85d53b85e06, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = MAKE_DICT_EMPTY();
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_ass_subscript_2 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 37;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cf443efc12ac6352de6be85d53b85e06->m_frame) frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_2:;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__1_resetWidgetDict();

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__2_resetVariableDict();

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_16, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_16);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[63];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[238]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[238]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[23];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 49;
        tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts[239]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[240];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_name_value_11 = mod_consts[241];
        tmp_default_value_1 = mod_consts[242];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_11, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[241]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 49;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[243];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[244], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[245], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_7;
        }
        frame_68348a6b279d3c7b162683f08709c163_2 = MAKE_CLASS_FRAME(tstate, codeobj_68348a6b279d3c7b162683f08709c163, module_direct$tkwidgets$AppShell, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_68348a6b279d3c7b162683f08709c163_2);
        assert(Py_REFCNT(frame_68348a6b279d3c7b162683f08709c163_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[247];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[248];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[251];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[252];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[11], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[253];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[13], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[254];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[5], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[254];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[9], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[255];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__3___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__4___createInterface();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__5___createBalloon();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__6___createMenuBar();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[39], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__7___createDataArea();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__8___createCommandArea();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__9___createMessageBar();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__10___createAboutBox();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__11_toggleBalloon();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__12_showAbout();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[132], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__13_quit();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__14_appInit();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__15_createInterface();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__16_onDestroy();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__17_createMenuBar();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__18_interior();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__19_balloon();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__20_buttonBox();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[280], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__21_messageBar();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[282], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[284];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__22_buttonAdd(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[204], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__23_alignbuttons();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[147], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[255];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__24_bind(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[288];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__25_updateProgress(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__26_addWidget();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__27_getWidget();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[291], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__28_addVariable();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__29_getVariable();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[294], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__30_createWidget();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[227];
            tmp_defaults_5 = MAKE_TUPLE_EMPTY(8);
            PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[227];
            PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[297];
            PyTuple_SET_ITEM0(tmp_defaults_5, 3, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[86]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 338;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_5, 4, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 339;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_5, 5, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 339;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_5, 6, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_5, 7, tmp_tuple_element_4);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_5);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__31_newCreateLabeledEntry(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[298], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = mod_consts[227];
            tmp_defaults_6 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_6, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 364;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto tuple_build_exception_4;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 364;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto tuple_build_exception_4;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_6, 3, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_6, 4, tmp_tuple_element_5);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_6);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__32_newCreateButton(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[300], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = mod_consts[227];
            tmp_defaults_7 = MAKE_TUPLE_EMPTY(7);
            PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_7, 2, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_7, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 374;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_7, 4, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 374;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_7, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_7, 6, tmp_tuple_element_6);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_defaults_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__33_newCreateCheckbutton(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[303], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_7;
            tmp_tuple_element_7 = Py_None;
            tmp_defaults_8 = MAKE_TUPLE_EMPTY(6);
            PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[227];
            PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 388;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_8, 2, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 389;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_8, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 389;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_8, 4, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_8, 5, tmp_tuple_element_7);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_defaults_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__34_newCreateRadiobutton(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[305], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = mod_consts[227];
            tmp_defaults_9 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_9, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_9, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 404;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_9, 2, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 404;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_9, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_9, 4, tmp_tuple_element_8);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_defaults_9);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__35_newCreateFloater(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[307], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_10;
            PyObject *tmp_tuple_element_9;
            tmp_tuple_element_9 = mod_consts[227];
            tmp_defaults_10 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_10, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_10, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_10, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_10, 3, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_10, 4, tmp_tuple_element_9);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_defaults_10);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__36_newCreateDial(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[309], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_11;
            PyObject *tmp_tuple_element_10;
            tmp_tuple_element_10 = mod_consts[227];
            tmp_defaults_11 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_11, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_11, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 422;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_11, 2, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 422;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_11, 3, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_11, 4, tmp_tuple_element_10);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_defaults_11);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__37_newCreateSider(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[311], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_12;
            PyObject *tmp_tuple_element_11;
            tmp_tuple_element_11 = mod_consts[227];
            tmp_defaults_12 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_12, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_12, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 431;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_10;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_12, 2, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 431;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_10;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_12, 3, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_12, 4, tmp_tuple_element_11);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_defaults_12);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__38_newCreateEntryScale(tmp_defaults_12);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[313], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_13;
            PyObject *tmp_tuple_element_12;
            tmp_tuple_element_12 = mod_consts[227];
            tmp_defaults_13 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_13, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_13, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 440;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto tuple_build_exception_11;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_13, 2, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 440;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto tuple_build_exception_11;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_13, 3, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_13, 4, tmp_tuple_element_12);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_defaults_13);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__39_newCreateVector2Entry(tmp_defaults_13);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[315], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_14;
            PyObject *tmp_tuple_element_13;
            tmp_tuple_element_13 = mod_consts[227];
            tmp_defaults_14 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_14, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_14, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 448;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                } else {
                    goto tuple_build_exception_12;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_14, 2, tmp_tuple_element_13);
            tmp_tuple_element_13 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 448;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                } else {
                    goto tuple_build_exception_12;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_14, 3, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_14, 4, tmp_tuple_element_13);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_defaults_14);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__40_newCreateVector3Entry(tmp_defaults_14);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[317], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_15;
            PyObject *tmp_tuple_element_14;
            tmp_tuple_element_14 = mod_consts[227];
            tmp_defaults_15 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_15, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_15, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 457;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto tuple_build_exception_13;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_15, 2, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 457;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto tuple_build_exception_13;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_15, 3, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_15, 4, tmp_tuple_element_14);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_defaults_15);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__41_newCreateColorEntry(tmp_defaults_15);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[319], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_16;
            PyObject *tmp_tuple_element_15;
            tmp_tuple_element_15 = mod_consts[227];
            tmp_defaults_16 = MAKE_TUPLE_EMPTY(10);
            PyTuple_SET_ITEM0(tmp_defaults_16, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_16, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = MAKE_LIST_EMPTY(0);
            PyTuple_SET_ITEM(tmp_defaults_16, 2, tmp_tuple_element_15);
            tmp_tuple_element_15 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 466;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto tuple_build_exception_14;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_16, 3, tmp_tuple_element_15);
            tmp_tuple_element_15 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 466;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto tuple_build_exception_14;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_16, 4, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[321];
            PyTuple_SET_ITEM0(tmp_defaults_16, 5, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_defaults_16, 6, tmp_tuple_element_15);
            tmp_tuple_element_15 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 468;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto tuple_build_exception_14;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_16, 7, tmp_tuple_element_15);
            tmp_tuple_element_15 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 468;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto tuple_build_exception_14;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_16, 8, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_16, 9, tmp_tuple_element_15);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_defaults_16);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__42_newCreateOptionMenu(tmp_defaults_16);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[322], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_17;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = mod_consts[227];
            tmp_defaults_17 = MAKE_TUPLE_EMPTY(12);
            PyTuple_SET_ITEM0(tmp_defaults_17, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_17, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = MAKE_LIST_EMPTY(0);
            PyTuple_SET_ITEM(tmp_defaults_17, 2, tmp_tuple_element_16);
            tmp_tuple_element_16 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[324]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[324]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[324]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 496;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_17, 3, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_17, 4, tmp_tuple_element_16);
            tmp_tuple_element_16 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 497;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_17, 5, tmp_tuple_element_16);
            tmp_tuple_element_16 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[302]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[302]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 497;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_17, 6, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[321];
            PyTuple_SET_ITEM0(tmp_defaults_17, 7, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[321];
            PyTuple_SET_ITEM0(tmp_defaults_17, 8, tmp_tuple_element_16);
            tmp_tuple_element_16 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[72]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 499;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_17, 9, tmp_tuple_element_16);
            tmp_tuple_element_16 = PyObject_GetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[71]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 499;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto tuple_build_exception_15;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_17, 10, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_defaults_17, 11, tmp_tuple_element_16);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_defaults_17);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__43_newCreateComboBox(tmp_defaults_17);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[325], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_18;
            tmp_defaults_18 = mod_consts[327];
            Py_INCREF(tmp_defaults_18);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__44_transformRGB(tmp_defaults_18);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[328], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 522;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_68348a6b279d3c7b162683f08709c163_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_68348a6b279d3c7b162683f08709c163_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_68348a6b279d3c7b162683f08709c163_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_68348a6b279d3c7b162683f08709c163_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_68348a6b279d3c7b162683f08709c163_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49, mod_consts[330], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_7;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_17 = mod_consts[23];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_17 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 49;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49);
        locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49);
        locals_direct$tkwidgets$AppShell$$$class__1_AppShell_49 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 49;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_22);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_25 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[63];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[238]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[238]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_tuple_element_19 = mod_consts[203];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_19 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 533;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts[239]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[240];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_name_value_12 = mod_consts[241];
        tmp_default_value_2 = mod_consts[242];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_12, tmp_default_value_2);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[241]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 533;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[243];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[244], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[203];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[245], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_10;
        }
        frame_e16f57fbd3469cd7afe8db0cc5e950bd_3 = MAKE_CLASS_FRAME(tstate, codeobj_e16f57fbd3469cd7afe8db0cc5e950bd, module_direct$tkwidgets$AppShell, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e16f57fbd3469cd7afe8db0cc5e950bd_3);
        assert(Py_REFCNT(frame_e16f57fbd3469cd7afe8db0cc5e950bd_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[331];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_19;
            tmp_defaults_19 = mod_consts[255];
            Py_INCREF(tmp_defaults_19);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__45___init__(tmp_defaults_19);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__46_createButtons();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__47_createMain();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$AppShell$$$function__48_createInterface();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e16f57fbd3469cd7afe8db0cc5e950bd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e16f57fbd3469cd7afe8db0cc5e950bd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e16f57fbd3469cd7afe8db0cc5e950bd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e16f57fbd3469cd7afe8db0cc5e950bd_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_e16f57fbd3469cd7afe8db0cc5e950bd_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533, mod_consts[330], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_10;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_21 = mod_consts[203];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_21 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_cf443efc12ac6352de6be85d53b85e06->m_frame.f_lineno = 533;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533);
        locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533 = NULL;
        goto try_return_handler_9;
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

        Py_DECREF(locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533);
        locals_direct$tkwidgets$AppShell$$$class__2_TestAppShell_533 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 533;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_30);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf443efc12ac6352de6be85d53b85e06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf443efc12ac6352de6be85d53b85e06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf443efc12ac6352de6be85d53b85e06, exception_lineno);
    }



    assertFrameObject(frame_cf443efc12ac6352de6be85d53b85e06);

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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.tkwidgets.AppShell", false);

    Py_INCREF(module_direct$tkwidgets$AppShell);
    return module_direct$tkwidgets$AppShell;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$AppShell, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$tkwidgets$AppShell", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
